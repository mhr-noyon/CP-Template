/*
    author:
    Time: 20:34:48
    Date: 21-03-2026
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define pll pair<ll, ll>
#define Graph vector<vector<ll>>
#define inf 1e18
#define mod 1000000007

bool isConflict(string &s, int idx)
{
      if (idx > 2 && s[idx - 3] == s[idx])
            return true;
      if (idx > 0 && s[idx - 1] == s[idx])
            return true;

      return false;
}

void solve()
{
      string s;
      cin >> s;
      int n = s.size();

      for (int i = 0; i < n; i++)
      {
            if (isConflict(s, i))
            {
                  cout << "Wrong\n";
                  return;
            }
      }
      cout << "Correct\n";
}

signed main()
{
      ios::sync_with_stdio(false);
      cin.tie(nullptr);

      cout << fixed << setprecision(6);
      cerr << fixed << setprecision(6);

      int _t = 1;
      // cin >> _t;
      for (int i = 1; i <= _t; i++)
      {
            // cout<<"Case #" << i << ": ";
            // cerr<<"\n\n------------------------Case #" << i << ": \n";
            solve();
      }
      return 0;
}
