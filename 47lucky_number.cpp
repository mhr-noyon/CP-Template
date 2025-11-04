#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

#define pll pair<ll, ll>


/*
Lucky numbers using 4 and 7 up to 1e9
*/
void solve()
{
    ll sz = 9;

    vector<ll> pos;
    for (ll i = 1; i <= sz; i++)
    {
        for (ll j = 0; j < (1ll << i); j++)
        {
            ll x = 0;
            for (ll k = i - 1; k >= 0; k--)
            {
                if (j & (1ll << k))
                {
                    x *= 10;
                    x += 7;
                }
                else
                {
                    x *= 10;
                    x += 4;
                }
            }
            pos.push_back(x);
        }
    }
    for (auto &it : pos)
        cerr << it << " ";
    cerr << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    // cout << fixed << setprecision(6);
    // cerr << fixed << setprecision(6);

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
