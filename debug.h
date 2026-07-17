using namespace std;
void __print(int x) { cerr << x; }
void __print(long x) { cerr << x; }
void __print(long long x) { cerr << x; }
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }

template <typename T, typename V>
void __print(const T *x, const V sz)
{
    cerr << '{';
    for (int i = 0; i < sz; i++)
    {
        cerr << (i > 0 ? ", " : ""), __print(x[i]);
    }
    cerr << '}';
}
template <typename T, typename V>
void __print(const pair<T, V> &x);
template <typename T>
void __print(const T &x)
{
    int f = 0;
    cerr << '{';
    for (auto &i : x)
        cerr << (f++ ? ", " : ""), __print(i);
    cerr << "}";
}
template <typename T, typename V>
void __print(const pair<T, V> &x)
{
    cerr << '{';
    __print(x.first);
    cerr << ", ";
    __print(x.second);
    cerr << '}';
}
void _print() { cerr << "]\n"; }
template <typename T, typename... V>
void _print(T t, V... v)
{
    __print(t);
    if (sizeof...(v))
        cerr << ", ";
    _print(v...);
}

template <class T>
void __print(queue<T> q)
{
    cerr << "{";
    bool f = false;
    while (!q.empty())
    {
        if (f)
            cerr << ", ";
        f = true;
        __print(q.front());
        q.pop();
    }
    cerr << "}";
}

template<class T>
void __print(stack<T> s){
    vector<T> v;
    while(!s.empty()){
        v.push_back(s.top());
        s.pop();
    }
    reverse(v.begin(),v.end());
    __print(v);
}

template<class T>
void __print(priority_queue<T> pq){
    cerr<<"{";
    bool f=false;
    while(!pq.empty()){
        if(f) cerr<<", ";
        f=true;
        __print(pq.top());
        pq.pop();
    }
    cerr<<"}";
}

template<class... Ts>
void __print(const tuple<Ts...>& t){
    cerr<<"(";
    apply([](const auto&... args){
        int f=0;
        ((cerr<<(f++?", ":""), __print(args)),...);
    }, t);
    cerr<<")";
}

void __print(__int128 x){
    if(x==0){
        cerr<<0;
        return;
    }
    if(x<0){
        cerr<<"-";
        x=-x;
    }
    string s;
    while(x){
        s.push_back(char('0'+x%10));
        x/=10;
    }
    reverse(s.begin(),s.end());
    cerr<<s;
}

#ifdef DEBUG
#define dbg(x...)                                                             \
    cerr << "\e[91m" << __func__ << ":" << __LINE__ << " [" << #x << "] = ["; \
    _print(x);                                                                \
    cerr << "\e[39m" << endl;
#define adbg(x, n)                                                            \
    cerr << "\e[91m" << __func__ << ":" << __LINE__ << " [" << #x << "] = ["; \
    __print(x, n);                                                            \
    cerr << "]" << "\e[39m" << endl;
#else
#define dbg(x...)
#define adb(x, n)
#endif