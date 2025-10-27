#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

/*
   Problem Link: https://cses.fi/problemset/task/1753/
*/

vector<int> zFunction(const string &text, const string &p = "")
{

    string s = p + '#' + text; // For pattern matching
    // string s = text; // For prefix matching

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
    string s, p;
    cin >> s >> p;

    vector<int> v = zFunction(s, p);

    int n = s.size(), sz = v.size();

    // for (int i = 0; i < sz; i++)
    // {
    //     cerr << v[i] << " ";
    // }

    int cnt = 0, m = p.size();

    for (int i = sz - 1; i >= 1; i--)
    {
        if (v[i] == m)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
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
