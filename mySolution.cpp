#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

const ll N = 1e6 + 5;
const ll mod = 998244353;
vector<ll> facto(N + 1, 1), invFacto(N + 1, 1);

ll mul(ll a, ll b) { return (a * b) % mod; }
ll add(ll a, ll b) { return (a + b) % mod; }
ll sub(ll a, ll b) { return (a - b + mod) % mod; }
void calcInvFacto()
{
   vector<ll> inv(N + 1);
   inv[1] = 1;
   for (ll i = 2; i <= N; i++)
   {
      inv[i] = mod - mul(mod / i, inv[mod % i]);
   }
   for (ll i = 1; i < N; i++)
   {
      facto[i] = mul(facto[i - 1], i);
      invFacto[i] = mul(invFacto[i - 1], inv[i]);
   }
}
ll CnR(ll n, ll r)
{
   if (r < 0 || r > n)
      return 0;
   return mul(facto[n], mul(invFacto[r], invFacto[n - r]));
}

ll binPow(ll a, ll b)
{
   ll ans = 1;
   while (b)
   {
      if (b & 1)
         ans = (ans * a) % mod;
      a = (a * a) % mod;
      b >>= 1;
   }
   return ans;
}
ll inv(ll a, ll m)
{
   return binPow(a, m - 2) % m;
}
void solve()
{
   int a, b;
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

   calcInvFacto();

   ll _T = 1;
   // cin >> _T;
   for (ll i = 1; i <= _T; i++)
   {
      // cout << "Case #" << i << ": ";
      solve();
   }
   return 0;
}