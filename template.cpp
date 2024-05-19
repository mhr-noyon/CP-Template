//----------------NOYON CPP TEMPLATE---------------\

#include<bits/stdc++.h> 
#define ff first
#define ss second
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;
using pii = pair<int, int>;
using pli = pair<ll, int>;
using pil = pair<int, ll>;
using pll = pair<ll, ll>;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ld> vd;
typedef vector<char> vc;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<bool> vb;
#define PI acos(-1)
#define endl "\n"

#define v2d(name,n,m,val) vector<vector<int>>(name)((n),vector<int>((m),(val)))
#define Unique(a) (a).erase(unique(all(a)),(a).end())

#define pb push_back
#define ppb pop_back
#define lb lower_bound
#define ub upper_bound
#define loop(i,x,n) for(ll i=x; i<=n;i++)
#define rloop(i,x,n) for(ll i=n; i>=x;i--)

#define each(v) for (auto &it : v)
// #define each(v) for (auto it=v.begin(); it!= v.end();it++)

#define all(x) (x).begin(), (x).end()
#define MOD 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define mp make_pair
#define MEM(a,x) memset(a,x,sizeof(a))

// Debugging Functions starts
#ifndef ONLINE_JUDGE
#include "Debug2.h"
#include "Debug.h"
#else
	#define debug(...)
	#define dbg(x...)
#endif

void file(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif
}

void speed(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}


mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
clock_t startTime;
double getCurrentTime() {
	return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}




void iff(bool t){
	if(t) cout<<"YES\n";
	else cout<<"NO\n";
}
// bool checkPrime(ll n){
// 	if(n==2) return true;
// 	if(n==1)return false;
// 	for(int i=2;i*i<=n;i++){
// 		if(n%i==0) return false;
// 	}
// 	return true;
// }
// ll binPow(ll a, ll b, ll m){
// 	if(b==0) return 1;
// 	if(b==1) return a % m;
// 	ll ans = binPow(a, b/2, m);
// 	ans = (ans * ans) % m;
// 	if(b%2==1) ans = (ans * a) % m;
// 	return ans ;
// }
// ll inv(ll a,ll m) {
// 	return (binPow(a, m-2, m)%m);
// }
// bool pairSort(pair<ll,ll> &a, pair<ll,ll> &b){
// 	if(a.first==b.first) return (a.second < b.second);
//     return (a.first > b.first);
// }
// ll binarySearch(ll arr[], ll l, ll r, ll x)
// {
//     while (l <= r) {
//         ll m = l + (r - l) / 2;
//         if (arr[m] == x)
//             return m;
//         if (arr[m] < x)
//             l = m + 1;
//         else
//             r = m - 1;
//     }
//     return -1;
// }
// int limit = 1e6;
// vector<ll> primeFactor[1000001];
// vector<bool> isPrime(1000001,true);
// void sieve() 
// { 
// 	isPrime[0] = isPrime[1] = false;
//     for (int p = 2; p * p <= limit; p++) { 
//         if (isPrime[p] == true) { 
//         	primeFactor[p].pb(p);
//             for (int i = p * 2; i <= limit; i += p) {
//         		primeFactor[i].pb(p);
//                 isPrime[i] = false; 
//             }
//         } 
//     } 
// } 


bool pairSort(pair<ll,ll> &a, pair<ll,ll> &b){
	if(a.ss==b.ss) 
		return (a.ff > b.ff);
	return (a.ss < b.ss);
}

bool exist(ll x, ll y, ll m, ll n){
	if(x<0) return false;
	if(y<0) return false;
	if(x>=n) return false;
	if(y>=m) return false;
	return true;
}

ll get(ll a, ll b, ll m, ll n, string s[]){
	ll c = 1;
	vpll v = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};

	loop(i,0,7){
		ll x= a + v[i].ff;
		ll y= b + v[i].ss;
		if(exist(x,y,m,n)) if(s[x][y]=='0') c = 2;
	}
	return c;
}\
//--------------------------###--------------------------------//
//solution here


bool visited[100005];
set<ll> a, b;
void dfs(ll node, ll cur, vl graphs[]){
	visited[node] = true;

	for(auto it: graphs[node]){
		if(!visited[it]){
			if(cur==1){
				b.insert(it);
			}
			else{	
				a.insert(it);
			}
			dfs(it, cur^1, graphs);
		}
	}
}


void solve(int test){
	// dbg(test);
	string startTestCase = "-----------Test: "+to_string(test)+"-------------";
	string loopLine = "---------------------";
	string endTestCase = "-------------------------------------------\n\n\n";
	dbg(startTestCase);
	//-------------------------------------------------------
	
	
	//-------------------------------------
	dbg(endTestCase);
 }
int main(){
	speed(); 
	startTime = clock();

	 file();
	
	// sieve();
	// factorial();	
	ll t=1, T=1;
	cin>>T;

	while(t<=T){
		// cout<<"Case #"<<t<<": ";
		solve(t);
		t++;
	} 

	dbg(getCurrentTime())
	return 0;
}