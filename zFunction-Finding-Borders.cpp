#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long


/*
 Problem link: https://cses.fi/problemset/task/1732
*/

vector<int> zFunction(const string &text, const string &p = "")
{

    // string s = p + '#' + text; // For pattern matching
    string s = text; // For prefix matching

    int n = s.size();
    vector<int> z(n);
    int l = 0, r = 0;

    for (int i = 1; i < n; i++)
    {
        if (i <= r)
            z[i] = min(r - i + 1, z[i - l]);

        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
            z[i]++;

        if (i + z[i] - 1 > r)
        {
            l = i;
            r = i + z[i] - 1;
        }
    }
    return z;
}

void solve()
{
    string s;
    cin >> s;
    int n = s.size();

    string p = "";
    vector<int> v = zFunction(s, p);

    // for (int i = 0; i < n; i++)
    // {
    //     cerr << v[i] << " ";
    // }

    vector<int> ans;
    for (int i = n - 1; i >= 1; i--)
    {
        if (v[i] == n - i)
        {
            ans.push_back(v[i]);
        }
    }
    for (auto &it : ans)
        cout << it << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cout << fixed << setprecision(6);
    cerr << fixed << setprecision(6);

    ll _T = 1;
    // cin >> _T;
    for (ll i = 1; i <= _T; i++)
    {
        // cout << "Case #" << i << ": ";
        // cerr << "\n\nCase " << i << ": \n";
        solve();
    }
    return 0;
}
