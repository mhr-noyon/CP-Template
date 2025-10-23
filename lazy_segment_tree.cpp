#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define inf 2e17
#define pll pair<ll, ll>

// Problem link: https://codeforces.com/gym/105544/problem/C

ll sum = 0;
struct LazySegTree
{
    int tree[4000005][2];
    int lazyState[4000005];

    LazySegTree(int n, vector<int> &v)
    {
        memset(tree, 0, sizeof(tree));
        memset(lazyState, 0, sizeof(lazyState));
        build(1, 1, n, v);
    }

    void merge(int id)
    {
        tree[id][0] = tree[id << 1][0] + tree[id << 1 | 1][0];
        tree[id][1] = tree[id << 1][1] + tree[id << 1 | 1][1];
    }

    void apply(int id, int cnt)
    {
        if (cnt & 1)
        {
            swap(tree[id][0], tree[id][1]);
            lazyState[id] += cnt;
        }
    }
    void build(int id, int l, int r, vector<int> &data)
    {
        if (l == r)
        {
            if (data[l] != -1)
                tree[id][data[l]] = 1;
            return;
        }
        int mid = (l + r) / 2;
        build(2 * id, l, mid, data);
        build(2 * id + 1, mid + 1, r, data);

        merge(id);
    }
    void push(int id, int l, int r)
    {
        if ((lazyState[id] & 1) == 0)
            return;
        int mid = (l + r) / 2;

        apply(2 * id, lazyState[id]);
        apply(2 * id + 1, lazyState[id]);

        lazyState[id] = 0;
    }

    void update(int id, int l, int r, int a, int b, int cnt)
    {
        if (b < l || a > r)
        {
            return;
        }
        if (a <= l && r <= b)
        {
            apply(id, cnt);
            return;
        }
        push(id, l, r);
        int mid = (l + r) / 2;
        update(2 * id, l, mid, a, b, cnt);
        update(2 * id + 1, mid + 1, r, a, b, cnt);

        merge(id);
    }
};

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> v[i] >> x;
        sum += x;
    }
    LazySegTree t(n, v);

    while (q--)
    {
        char ch;
        cin >> ch;
        if (ch == 'W')
        {
            int l, r;
            cin >> l >> r;
            l++, r++;
            t.update(1, 1, n, l, r, 1);
        }
        else
        {
            int val;
            cin >> val;
            sum += ((ll)t.tree[1][1] * val);
        }
    }

    cout << sum << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // cout.tie(0);

    cout << fixed << setprecision(9);
    cerr << fixed << setprecision(9);

    ll _T = 1;
    // cin >> _T;
    for (ll i = 1; i <= _T; i++)
    {
        // cout << "Case " << i << ": ";
        cerr << "\n\nCase " << i << ": \n";
        solve();
    }
    return 0;
}