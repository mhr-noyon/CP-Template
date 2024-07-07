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
template <class T, class V> void print(map<T, V> &a){cerr<<"[ "; each(a){print(it.ff);cerr<<":";print(it.ss);cerr<<" ";}cerr<<"]";}
template <class T, class V> void print(map<pair<T, V>, V> &a){cerr<<"[ "; for(auto &it: a){print(it.ff);cerr<< ':'; print(it.ss);cerr<<' ';}cerr<<"]";}
template <class T, class V> void print(unordered_map<T, V> &a){cerr<<"[ "; for(auto &it: a){print(it);cerr<<" ";}cerr<<"]";}
template <class T> void print(vector<vector<T>> &a){cerr<<"[ "; each(a){print(it);cerr<<" ";}cerr<<"]";}

#ifndef ONLINE_JUDGE
	#define dbg(x) cerr << #x << " "; print(x); cerr << '\n';
#else
    #define dbg(x...);
#endif