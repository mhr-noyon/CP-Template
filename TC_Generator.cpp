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
// #define endl "\n"
#define pb push_back
#define ppb pop_back
#define lb lower_bound
#define ub upper_bound
#define for0(n) for(int i=0;i<n;i++)
#define for1(n) for(int i=1;i<=n;i++)
#define for0j(n) for(int j=0;j<n;j++)
#define for1j(n) for(int j=1;j<=n;j++)
#define each(v) for (auto &it : v)
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define mp make_pair
#define MEM(a,x) memset(a,x,sizeof(a))

//Debugging Functions starts
template <class T> void print(T x) {cerr << x;}
template <class T, class V> void print(pair<T, V> x){ print(x.ff); cerr << ':'; print(x.ss);}
template <class T> void print(vector<T> &a){cerr<<'['<<' '; each(a) { print(it); cerr << ' ';}cerr << ']';}
template <class T> void print(stack<T> x) {cerr<<"[ ";while(!x.empty()){cerr<<x.top()<<", "; x.pop();}cerr<<"]";}
template <class T> void print(queue<T> x) {cerr<<"[ ";while(!x.empty()){cerr<<x.front()<<", "; x.pop();}cerr<<"]";}
template <class T> void print(set<T> &a){cerr<<'['<<' ';each(a){  print(it); cerr << ' '; }cerr << ']';}
template <class T> void print(set<T, greater<T>> &a){cerr<<'['<<' '; each(a) {print(it);cerr<<' ';}cerr<<']';}
template <class T> void print(multiset<T> &a) {cerr<<'['<<' '; each(a){print(it);cerr<<' ';} cerr<<']';}
template <class T> void print(multiset<T, greater<T>> &a){cerr<<'['<<' '; each(a){print(it);cerr<<' ';}cerr<<']';}
template <class T> void print(unordered_set<T> &a){cerr << '[' << ' '; each(a){print(it);cerr<<' ';}cerr<<']';}
template <class T, class V> void print(vector<pair<T, V>> &a){cerr<<'['<<' '; each(a){print(it.ff);cerr<<":";print(it.ss);cerr<<' ';}cerr<<']';}
template <class T, class V> void print(map<T, V> &a){cerr<<"[ "; each(a){print(it);cerr<<" ";}cerr<<"]";}
template <class T, class V> void print(unordered_map<T, V> &a){cerr<<"[ "; each(a){print(it);cerr<<" ";}cerr<<"]";}
template <class T> void print(vector<vector<T>> &a){cerr<<"[ "; each(a){print(it);cerr<<" ";}cerr<<"]";}

void speed(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
void file(){
	#ifndef ONLINE_JUDGE
	    freopen("input2.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	    freopen("error.txt", "w", stderr);
		#define dbg(x) cerr << #x << " "; print(x); cerr << '\n';
	#else
		#define dbg(x)
	#endif
}

void iff(bool t){
	if(t) cout<<"YES\n";
	else cout<<"NO\n";
}
void print(ll n, ll arr[]){
	for(int i=0;i<n;i++) cout<<arr[i]<<" "; cout<<endl;
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
ll tests[1002][1002];

void randomTestCase(ll t){
	if(t==0) return;
	ll lb, ub, n, m, h;

	lb = 3, ub = 10; 
	n = (rand() % (ub - lb + 1)) + lb;

	lb = 10, ub = 3000; 
	m = (rand() % (ub - lb + 1)) + lb;
	cout<<n<<" "<<m<<endl;

	// n = 4;

	// lb = 2, ub = 6; 
	// m = (rand() % (ub - lb + 1)) + lb;
	// // cout<<m<<" ";
	// m = 1;

	// lb = 1, ub = 10;
	// for0(n){
	// 	for0j(m)
	// 		tests[i][j]=(rand() % (ub - lb + 1)) + lb;
	// } 
	// for0(n){
	// 	for0j(m)
	// 		// cout<<tests[i][j]<<" ";
	// 	// cout<<endl;
	// }
	// cout<<endl;
	--t;
	randomTestCase(t);
}

void callTest(ll x){
	freopen("randomTestCase.txt", "w", stdout);	//Test case output File
	// x = 1;
	cout<<x<<endl;
	srand(time(0));			//Very usefull
	randomTestCase(x);
	
	freopen("randomTestCase.txt", "r", stdin);	//Test case input File
	freopen("randomTestCaseOutput.txt", "w", stdout);	//Test case result output File	
}

//--------------------------###--------------------------------//
//solution here

void solve(int test){
	// dbg(test);
	string startTestCase = "-----------Test: "+to_string(test)+"-------------";
	string loopLine = "---------------------";
	string endTestCase = "\n-------------------------------------------\n\n\n";
	dbg(startTestCase);
	//----------------------------------------

	
	// string str;
	// cin>>str;
	// for0(str.size()){
	// 	for(ll j = i;j<str.size()+i;j++){
	// 		cout<<str[j%str.size()];
	// 	}
	// 	cout<<endl;
	// }
	// cout<<endl;
	//---------------------------------

	dbg(endTestCase);
 }
int main(){
	speed(); 
	 file();
	//---------For Test Case genarating--------------
	// callTest(10);
	 cout<<500<<endl;
	 for(int i=1;i<=500;i++) cout<<i<<endl;
	//-----------------------------------------------

	ll t=1, T=1;
	// cin>>T;

	while(t<=T){
		// cout<<"Case "<<t<<": ";
		// solve(t);
		t++;
	} 
	return 0;
}