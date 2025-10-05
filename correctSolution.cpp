#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

ll n, m;
vector<ll> v;

ll get(int idx, ll ans)
{
    if (ans % m == 0 && ans > 0)
    {
        // cerr << idx << endl;
        return true;
    }
    if (idx == n)
        return false;

    bool flag = get(idx + 1, ans + v[idx]);
    flag |= get(idx + 1, ans);

    return flag;
}
void solve()
{
    ll a, b;
    cin >> a >> b;
    cout << a + b << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cout << fixed << setprecision(9);
    cerr << fixed << setprecision(9);

    ll _T = 1;
    // cin >> _T;
    for (ll i = 1; i <= _T; i++)
    {
        solve();
    }

    return 0;
}