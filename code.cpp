\documentclass[10pt,landscape]{article}
\usepackage[a4paper,landscape,
  top=1.5cm,
  bottom=0.5cm,
  left=1cm,
  right=.5cm,  
  headsep=0.2cm,  % ↓ Distance between header and text body
  footskip=0.1cm  % ↓ Distance between footer and text body
]{geometry}

\setlength{\headheight}{10pt} % Allocate 15pt of vertical space for the header
% \setlength{\headsep}{0.4cm}   % Set 0.4cm between header and text


% \usepackage[margin=0.5in]{geometry}
\usepackage{multicol}
% Add vertical rule between columns
\setlength{\columnsep}{10pt}         % Space between columns
\setlength{\columnseprule}{0.3pt}   % Thickness of the vertical line

\usepackage{amsmath,amssymb,graphicx}
\usepackage{breqn}
\usepackage{enumitem} % for compact itemize
\setlength{\jot}{0pt}
\setlist{
  labelsep=0pt,
  topsep=0pt,
  itemsep=0pt,
  partopsep=0pt,
  parsep=0pt
}
% Explanation:
% First value: base text size
% Second: math text size
% Third: script size (e.g., subscript)
% Fourth: scriptscript size (e.g., sub-subscript)

% Reduce spacing around equations
\setlength{\abovedisplayskip}{0pt}
\setlength{\belowdisplayskip}{0pt}
\setlength{\abovedisplayshortskip}{0pt}
\setlength{\belowdisplayshortskip}{0pt}

\usepackage{listings}
\usepackage{xcolor}
\usepackage{fancyhdr}
\usepackage{titlesec}
\usepackage{courier}
\pagestyle{fancy}

% \fancyhf{}
% \chead{Green University of Bangladesh}
% \lhead{GreenU\_TrippleQ}
% \rhead{\thepage}

\fancyhf{} % Clear all headers and footers

\lhead{Green Sky Light Blue} % Left header
% \chead{\leftmark} % Center header: current section

% \chead{\nouppercase{\rightmark}} % Center header: subsection title

\chead{Green University of Bangladesh}
\rhead{\thepage} % Right header

\cfoot{} % Footer is empty (you can remove this if unnecessary)

\let\oldsubsection\subsection
\renewcommand{\subsection}[1]{%
  \markright{#1}%
  \oldsubsection{#1}%
}



\usepackage{xcolor}
\usepackage{hyperref}
% \hypersetup{colorlinks=true, linkcolor=blue,    urlcolor=cyan}
% \hypersetup{colorlinks=true, linkcolor=blue,    urlcolor=cyan}

\newcommand{\func}[1]{\textcolor{blue}{\texttt{\hyperref[#1]{#1}}}}


\usepackage{soul}   % for better underlining

% Tighter spacing
\titlespacing{\section}{0pt}{0.5em}{0em}
\titlespacing{\subsection}{0pt}{0.3em}{0em}
\titlespacing{\subsubsection}{0pt}{0.3em}{0em}

% Optional: consistent formatting
\usepackage{ulem} % provides \uline

% \titleformat{\section}
%   {\bfseries\Large}
%   {(\thesection)}
%   {0pt}
%   {\uline}
\titleformat{\section}
  {\normalfont\Large\bfseries} % Font styling: Large size, bold
  {(\thesection)} % Numbering prefix (e.g., “Section”)
  {5pt} % Space between number and title
  {\uline} % Code before the title
% \titleformat{\section}{\bfseries\LARGE}{\thesectionform{#1}}{0em}{\underline}
% % Define how the section number appears
% \newcommand{\thesectionform}[1]{(\thesection)}

\titleformat{\subsection}
    {\bfseries\large}
    {(\thesubsection)}
    {4pt}
    {}
    

\titleformat{\subsubsection}
  {\normalfont\normalsize\bfseries} % Normal size
  {(\thesubsubsection)}
  {3pt}
  {}


  


% \definecolor{codebg}{rgb}{0.95,0.95,0.95}
% \lstset{
%   language=C++,
%   backgroundcolor=\color{codebg},
%   basicstyle=\footnotesize\ttfamily,
%   keywordstyle=\color{blue},
%   commentstyle=\color{gray},
%   stringstyle=\color{orange},
%   breaklines=true,
%   showstringspaces=false,
%   tabsize=2,
%   commentstyle=\color{gray},
% }
\definecolor{codebg}{rgb}{1,1,1}
\definecolor{commentgray}{rgb}{0.4,0.4,0.4}
\definecolor{keywordblue}{rgb}{0.0,0.0,0.6}
\definecolor{stringorange}{rgb}{0.8,0.3,0.0}

\lstset{
  language=C++,
  % backgroundcolor=\color{white}, % or use \color{codebg}
  basicstyle=\color{black}\ttfamily\footnotesize,
  % keywordstyle=\color{keywordblue}\bfseries,
  commentstyle=\color{commentgray}\itshape,
  % stringstyle=\color{stringorange},
  numberstyle=\tiny\color{gray},
  numbers=left,
  numbersep=1pt,
  xleftmargin=4pt,
  frame=top,                 % <-- Only top border
  frame=bottom,                 % <-- Only top border
  rulecolor=\color{black},   % Border color
  breaklines=true,
  showstringspaces=false,
  tabsize=1,
  captionpos=b
}
% \lstset{
%   language=C++,                 % Set language
%   basicstyle=\ttfamily\footnotesize, % Use monospaced font
%   keywordstyle=\color{blue},   % Keywords in blue
%   commentstyle=\color{gray},   % Comments in gray
%   stringstyle=\color{orange},  % Strings in orange
%   numbers=left,                % Line numbers on the left
%   numberstyle=\tiny\color{gray},
%   stepnumber=1,
%   breaklines=true,             % Wrap lines
%   frame=single,                % Frame around code
%   tabsize=2,
%   showstringspaces=false
% }

% \titleformat{\section}{\Large\bfseries}{}{0em}{}
% \titleformat{\subsection}{\normalsize\bfseries}{}{0em}{}

\begin{document}

\vspace*{\fill}
% title page ignore page numbering
\thispagestyle{empty}
\begin{center}
    \begin{center}
     \includegraphics[scale=.5]{images/gub_logo2.png}\\
    \end{center}
  \LARGE{\textbf{Green University of Bangladesh}} \\
  \vspace{4cm}
  \Huge{\textbf{Green Sky Light Blue}} \\
  \vspace{1cm}
  \LARGE{
    Ruhan Azad\\
    Md. Hosain Rohman Noyon\\
    Mahfuz Bin Minhaz\\
  }
  \vspace{4cm}
  \normalsize \today
\end{center}
\vspace*{\fill}


\newpage


% reset page numbering here
\pagenumbering{arabic}
\setcounter{page}{1}


\begin{multicols}{4}
% ==== TABLE OF CONTENTS ====
\setcounter{tocdepth}{2}
\tableofcontents
% \newpage
\end{multicols}



\newpage




% Main body
\begin{multicols}{4}




\section{Template}
\begin{lstlisting}
#include<bits/stdc++.h> 
using namespace std;
#define largeInt __int128
typedef long double ld;
typedef unsigned long long ull;
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define MEM(a,x) memset(a,x,sizeof(a))
#define PI acos(-1)
double radians = deg* PI / 180.0;
double sin = sin(angle_radians);
double cos = cos(angle_radians);
double tan = tan(angle_radians);
// Print double
cout<<fixed<<setprecision(9);
\end{lstlisting}

\subsection{FastIO}
\begin{lstlisting}
ios_base::sync_with_stdio(false);  
cin.tie(NULL);  cout.tie(NULL);
\end{lstlisting}

\subsection{File I/O}
\begin{lstlisting}
freopen("input.txt", "r", stdin); 
freopen("output.txt", "w", stdout);
freopen("error.txt", "w", stderr);
\end{lstlisting}

\subsection{Run command}
\begin{lstlisting}
// [In ./run file]
g++ $1.cpp && ./a.out <input.txt >output.txt 2>error.txt
// In windows replace out to exe
//cmd: chmod +x run
//run cmd: ./run fileName
\end{lstlisting}


\section{Bitwise Technique}
\subsection{Bit operations}
\begin{lstlisting}
// Bitset
bitset<n> x(intVal);
x[1] = 1; x[2] = 0; // Note: x[0-n] valid
cout << x << endl; // Output: 00010

// Bit Manipulation
Getbit:      n & (1LL << i)
Setbit 0:    n & (~(1LL << i))
Setbit 1:    n | (1LL << i)
Clearbit:    n & (~(1LL << i))
Togglebit:   n ^ (1LL << i)
Rightmost 1: n & (-n)

// Check if N is power of 2
if (n && !(n & (n - 1))) 
    cout << "YES" << endl;

// Clear bits
ll b = n & (~((1LL << (i + 1)) - 1)); // Clear LSB till ith
ll c = n & ((1LL << (i + 1)) - 1);    // Clear MSB till ith

cout << (a << 1) << endl; // Multiply
cout << (a >> 1) << endl; // Divide
\end{lstlisting}

\subsection{Built-in Functions}
\begin{lstlisting}
// Number of leading zeros
__builtin_clz(x);     // for int
__builtin_clzll(x);   // for long long

// Number of trailing zeros
__builtin_ctz(x);
__builtin_ctzll(x);

// Number of 1-bits
__builtin_popcount(x);
__builtin_popcountll(x);

// Parity check (odd number of 1s)
__builtin_parity(x);
\end{lstlisting}

\subsection{Bitwise Formulas}
\begin{lstlisting}
a + b     = a ^ b + 2 * (a & b)
a + b     = a | b + a & b
a ^ b     = a | b - a & b
n % 2^i   = n & ((1 << i) - 1)
1^2^3^...^(4k-1) = 0
\end{lstlisting}

\section{STL Cheatsheet}
\subsection{Ordered Set (Access index)}
\begin{lstlisting}
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;

template<class T> 
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

//MULTI ORDERED SET: less_equal

ordered_set<int> st;

st.find_by_order(index)   // iterator to i-th element
st.order_of_key(val)   // count < x

//To Delete {works if k exist}
s.erase(s.find_by_order(s.order_of_key(k))); 
s.erase(s.find(k)); 
\end{lstlisting}


\section{String Utilities}

\subsection{Basic Operations}
\begin{lstlisting}
transform(s.begin(), s.end(), s.begin(), ::tolower); //toupper
int x = stoi(s);
string t = to_string(x);
s.substr(pos, len);
s.substr(pos);
if (s.find("abc") != string::npos) { }
s1.compare(s2);     // <0, =0, >0
s.replace(pos, len, "new");
s.erase(l, r-l);
\end{lstlisting}

\subsection{Input with Spaces}
\begin{lstlisting}
char c; cin >> c;
string s; getline(cin, s);
s = c + s;

stringstream ss(s);
vector<string> v;
string w;
while (ss >> w) v.push_back(w);
\end{lstlisting}












%Formulas
% \section{Important Formulas}
\section{Geometry}
\subsection{Point}
\begin{lstlisting}[language=C++]
// == BASIC DEFINITIONS ==
//Important check for (-0.00) value
// if(abs(ans.x) < EPS) ans.x = 0; if(abs(ans.y) < EPS) ans.y = 0;
using T = double;
const T EPS = 1e-9;
const T PI  = acos(-1.0);

int sgn(T x){ return (x > EPS) - (x < -EPS); }

T asin_safe(T x){
    x = max<T>(-1, min<T>(1, x));
    return asin(x);
}

T acos_safe(T x){
    x = max<T>(-1, min<T>(1, x));
    return acos(x);
}

T atan(T y, T x){
    return atan2(y, x);
}
// == POINT STRUCT ==

struct PT{
    T x,y;
    PT():x(0),y(0){} PT(T _x,T _y):x(_x),y(_y){}

    PT operator+(const PT& o) const { return {x+o.x,y+o.y}; }
    PT operator-(const PT& o) const { return {x-o.x,y-o.y}; }
    PT operator*(T k) const { return {x*k,y*k}; }
    PT operator/(T k) const { return {x/k,y/k}; }
    friend PT operator*(T k, const PT& p){ return {k*p.x,k*p.y}; }

    bool operator==(const PT& o) const { return sgn(x-o.x)==0 && sgn(y-o.y)==0; }
    bool operator<(const PT& o) const { return sgn(x-o.x)? x<o.x : y<o.y; }

    T norm2() const { return x*x + y*y; }
    T norm()  const { return sqrt(norm2()); }

    PT perp() const { return {-y, x}; }
    T arg()  const { return atan2(y, x); }

    PT truncate(T r) const {
        T k = norm();
        if(!sgn(k)) return *this;
        return *this * (r / k);
    }
};

// == BASIC VECTOR OPS ==

T dot(PT a, PT b){ return a.x*b.x + a.y*b.y; }
T cross(PT a, PT b){ return a.x*b.y - a.y*b.x; }
T cross2(PT a, PT b, PT c){ return cross(b-a, c-a); }
int orient(PT a, PT b, PT c){ return sgn(cross2(a,b,c)); }

bool isPerp(PT a, PT b){ return sgn(dot(a,b)) == 0; }
bool isParallel(PT a, PT b){ return sgn(cross(a,b)) == 0; }

T dist2(PT a, PT b){ return (a-b).norm2(); }
T dist (PT a, PT b){ return sqrt(dist2(a,b)); }

// == ANGLES & PROJECTION ==

T deg2rad(T d){ return d * PI / 180.0; }
T rad2deg(T r){ return r * 180.0 / PI; }

T angleBetween(PT a, PT b){
    T na=a.norm(), nb=b.norm();
    if(!sgn(na) || !sgn(nb)) return 0;
    T c = dot(a,b)/(na*nb);
    c = max<T>(-1, min<T>(1, c));
    return acos(c);
}

PT unit(PT a){ T n=a.norm(); return sgn(n)? a/n : PT(0,0); }
PT moveToward(PT A, PT B, T k){ return A + unit(B-A)*k; }

PT projVec(PT a, PT b){
    T bb=dot(b,b);
    if(!sgn(bb)) return PT(0,0);
    return b * (dot(a,b)/bb);
}

T projLen(PT a, PT b){
    T nb=b.norm();
    if(!sgn(nb)) return 0;
    return dot(a,b)/nb;
}

// == ROTATION ==

PT rotateccw90(PT a){ return {-a.y, a.x}; }
PT rotatecw90 (PT a){ return { a.y,-a.x}; }

PT rotateccw(PT a, T t){
    T c=cos(t), s=sin(t);
    return {a.x*c - a.y*s, a.x*s + a.y*c};
}

PT rotateAround(PT p, PT O, T t){
    return rotateccw(p-O, t) + O;
}


// == SEGMENT & LINE BASIC ==

bool onSeg(PT a, PT b, PT p){
    if(orient(a,b,p)!=0) return false;
    return sgn(dot(p-a, p-b)) <= 0;
}

bool lineLineInter(PT a, PT b, PT c, PT d, PT &out){
    PT r=b-a, s=d-c;
    T den = cross(r,s);
    if(!sgn(den)) return false;
    T t = cross(c-a, s)/den;
    out = a + r*t;
    return true;
}

bool segInter(PT A, PT B, PT C, PT D){
    int o1=orient(A,B,C), o2=orient(A,B,D);
    int o3=orient(C,D,A), o4=orient(C,D,B);
    if(o1==0 && onSeg(A,B,C)) return true;
    if(o2==0 && onSeg(A,B,D)) return true;
    if(o3==0 && onSeg(C,D,A)) return true;
    if(o4==0 && onSeg(C,D,B)) return true;
    return (o1*o2 < 0) && (o3*o4 < 0);
}

// point p lies inside (or on boundary) of angle <bac, assumes angle not straight
bool is_point_in_angle(PT b, PT a, PT c, PT p){
    assert(orient(a,b,c) != 0);
    if(orient(a,c,b) < 0) swap(b,c);        // make <bac CCW
    return orient(a,c,p) >= 0 && orient(a,b,p) <= 0;
}

// == DISTANCE ==

T triArea(PT A, PT B, PT C){ return fabs(cross(B-A, C-A))*0.5; }

T distPointLine(PT A, PT B, PT P){
    T dAB = dist(A,B);
    if(!sgn(dAB)) return dist(P,A);
    return fabs(cross(B-A, P-A)) / dAB;
}

T distPointSeg(PT A, PT B, PT P){
    if(dot(B-A, P-A) < 0) return dist(P,A);
    if(dot(A-B, P-B) < 0) return dist(P,B);
    return distPointLine(A,B,P);
}


\end{lstlisting}



\subsection{Lines}

\begin{lstlisting}[language=C++]

// --- LINE / SEGMENT / RAY ---

struct line {
    PT a,b;    // two points on the line
    PT v; T c; // cross(v, (x,y)) = c  (directed line)

    line(): a(), b(), v(), c(0) {}

    // from direction vector v and constant c
    line(PT _v, T _c): v(_v), c(_c){
        assert(sgn(v.norm2()) != 0);
        auto p = get_points();
        a = p.first; b = p.second;
    }

    // ax + by + C = 0
    line(T A, T B, T C): v({B, -A}), c(-C){
        assert(sgn(v.norm2()) != 0);
        auto p = get_points();
        a = p.first; b = p.second;
    }

    // through p,q
    line(PT p, PT q): a(p), b(q), v(q-p), c(cross(v,p)){
        assert(sgn(v.norm2()) != 0);
    }

    // return 2 points on the line
    pair<PT,PT> get_points() const {
        assert(sgn(v.norm2()) != 0);
        T A = -v.y, B = v.x; // A x + B y = c
        PT p,q;
        if(sgn(A)==0){
            // B != 0
            p = PT(0, c/B);
            q = PT(1, c/B);
        }else if(sgn(B)==0){
            p = PT(c/A, 0);
            q = PT(c/A, 1);
        }else{
            p = PT(0, c/B);
            q = PT(1, (c-A)/B);
        }
        return {p,q};
    }

    // returns {a,b,C} for ax + by + C = 0
    array<T,3> get_abc() const {
        T A = -v.y, B = v.x;
        return {A, B, -c};
    }

    // side test: 1 left, -1 right, 0 on line
    int side(PT p) const { return sgn(cross(v,p) - c); }

    line perpendicular_through(PT p) const { return {p, p + v.perp()}; }
    line translate(PT t) const { return {v, c + cross(v,t)}; }
    bool cmp_by_projection(PT p, PT q) const { return dot(v,p) < dot(v,q); }

    // shift to the left by distance d
    line shift_left(T d) const {
        PT z = v.perp().truncate(d);
        return line(a + z, b + z);
    }
};

PT point_along_line(PT a, PT b, T d){
    assert(a != b);
    return a + (b-a).truncate(d);
}

PT project_from_point_to_line(PT a, PT b, PT p){
    PT ab = b-a;
    T den = ab.norm2();
    if(!sgn(den)) return a;  // degenerate line
    return a + ab * (dot(p-a, ab)/den);
}

PT reflection_from_point_to_line(PT a, PT b, PT p){
    PT h = project_from_point_to_line(a,b,p);
    return h + h - p;
}

T dist_from_point_to_line(PT a, PT b, PT p){
    PT ab = b-a;
    T den = ab.norm();
    if(!sgn(den)) return dist(p,a);
    return fabs(cross(ab, p-a)) / den;
}

// inclusive point on segment [a,b]
bool is_point_on_seg(PT a, PT b, PT p){
    if(orient(a,b,p) != 0) return false;
    return sgn(dot(p-a, p-b)) <= 0;
}

PT project_from_point_to_seg(PT a, PT b, PT p){
    PT ab = b-a;
    T den = ab.norm2();
    if(!sgn(den)) return a;
    T t = dot(p-a, ab)/den;
    if(t < 0) t = 0;
    if(t > 1) t = 1;
    return a + ab*t;
}

T dist_from_point_to_seg(PT a, PT b, PT p){
    return dist(p, project_from_point_to_seg(a,b,p));
}

// 0 not parallel, 1 parallel, 2 collinear
int is_parallel_lines(PT a, PT b, PT c, PT d){
    if(sgn(cross(b-a, d-c)) != 0) return 0;
    // parallel; check collinear
    return (orient(a,b,c)==0 && orient(a,b,d)==0) ? 2 : 1;
}

// angle bisector direction vector of <abc at b  (vector form)
PT angle_bisector(PT &a, PT &b, PT &c){
    PT p = a-b, q = c-b;
    T np = p.norm(), nq = q.norm();
    if(!sgn(np) || !sgn(nq)) return PT(0,0);
    return p*(1.0/np) + q*(1.0/nq); // unit-sum direction
}

// 1 left, 2 right, 3 on line (relative to directed a->b)
int point_line_relation(PT a, PT b, PT p){
    int s = sgn(cross(b-a, p-a));
    if(s > 0) return 1;
    if(s < 0) return 2;
    return 3;
}

// infinite line intersection (unique), false if parallel/collinear
bool line_line_intersection(PT a, PT b, PT c, PT d, PT &ans){
    PT r=b-a, s=d-c;
    T den = cross(r,s);
    if(!sgn(den)) return false;
    T t = cross(c-a, s)/den;
    ans = a + r*t;
    return true;
}

// strict proper segment intersection (no touching), returns point
bool seg_seg_intersection(PT a, PT b, PT c, PT d, PT &ans){
    T oa = cross2(c,d,a), ob = cross2(c,d,b);
    T oc = cross2(a,b,c), od = cross2(a,b,d);
    if(oa*ob < 0 && oc*od < 0){
        ans = (a*ob - b*oa) / (ob-oa);
        return true;
    }
    return false;
}

// inclusive intersection points set (size 0/1/2) WITHOUT using set<PT>
vector<PT> seg_seg_intersection_inside(PT a, PT b, PT c, PT d){
    PT x;
    if(seg_seg_intersection(a,b,c,d,x)) return {x};

    vector<PT> res;
    if(is_point_on_seg(a,b,c)) res.push_back(c);
    if(is_point_on_seg(a,b,d)) res.push_back(d);
    if(is_point_on_seg(c,d,a)) res.push_back(a);
    if(is_point_on_seg(c,d,b)) res.push_back(b);

    sort(res.begin(), res.end());
    res.erase(unique(res.begin(), res.end()), res.end());
    return res; // 0/1/2 points
}

// 0 no intersect, 1 proper intersect (straddles), 2 collinear
int seg_line_relation(PT a, PT b, PT c, PT d){
    T p = cross2(c,d,a), q = cross2(c,d,b);
    if(!sgn(p) && !sgn(q)) return 2;
    if(p*q < 0) return 1;
    return 0;
}

bool seg_line_intersection(PT a, PT b, PT c, PT d, PT &ans){
    int k = seg_line_relation(a,b,c,d);
    if(k == 0) return false;
    if(k == 2) return false; // infinite intersections
    return line_line_intersection(a,b,c,d,ans);
}

T dist_from_seg_to_seg(PT a, PT b, PT c, PT d){
    // if they intersect (even touching), distance = 0
    if(!seg_seg_intersection_inside(a,b,c,d).empty()) return 0.0;
    return min({dist_from_point_to_seg(a,b,c), dist_from_point_to_seg(a,b,d),
                dist_from_point_to_seg(c,d,a), dist_from_point_to_seg(c,d,b)});
}

// point to ray (ray starts at a, direction vector dir)
T dist_from_point_to_ray(PT a, PT dir, PT p){
    PT b = a + dir;
    T t = dot(p-a, b-a);
    if(t < 0) return dist(p,a);
    return dist_from_point_to_line(a,b,p);
}

// ray-ray intersection (as + u*ad = bs + v*bd, u,v >= 0)
bool ray_ray_intersection(PT as, PT ad, PT bs, PT bd){
    T det = cross(ad, bd);
    if(fabs(det) < EPS) return false;
    PT d = bs - as;
    T u = cross(d, bd)/det;
    T v = cross(d, ad)/det;
    return sgn(u) >= 0 && sgn(v) >= 0;
}

T ray_ray_distance(PT as, PT ad, PT bs, PT bd){
    if(ray_ray_intersection(as,ad,bs,bd)) return 0.0;
    T ans = dist_from_point_to_ray(as, ad, bs);
    ans = min(ans, dist_from_point_to_ray(bs, bd, as));
    return ans;
}


\end{lstlisting}

\subsection{Circle}
\begin{lstlisting}[language=C++]

// --- CIRCLE ----
struct circle {
    PT p; T r;
    circle() {}
    circle(PT _p, T _r): p(_p), r(_r) {}
    circle(T x, T y, T _r): p(PT(x,y)), r(_r) {}

    // circumcircle of triangle (a,b,c distinct)
    circle(PT a, PT b, PT c){
        b = (a+b)*0.5;
        c = (a+c)*0.5;
        line_line_intersection(b, b + rotatecw90(a-b), c, c + rotatecw90(a-c), p);
        r = dist(a,p);
    }

    // incircle of triangle (bool tag to differentiate)
    circle(PT a, PT b, PT c, bool){
        line u,v;
        T m=atan2(b.y-a.y,b.x-a.x), n=atan2(c.y-a.y,c.x-a.x);
        u.a=a; u.b=u.a + PT(cos((n+m)/2.0), sin((n+m)/2.0));
        v.a=b;
        m=atan2(a.y-b.y,a.x-b.x), n=atan2(c.y-b.y,c.x-b.x);
        v.b=v.a + PT(cos((n+m)/2.0), sin((n+m)/2.0));
        line_line_intersection(u.a,u.b,v.a,v.b,p);
        r = dist_from_point_to_seg(a,b,p);
    }

    bool operator==(circle v){ return p==v.p && sgn(r-v.r)==0; }
    T area() const { return PI*r*r; }
    T circumference() const { return 2.0*PI*r; }
};

// 0 outside, 1 on, 2 inside
int circle_point_relation(PT p, T r, PT b){
    T d = dist(p,b);
    if(sgn(d-r) < 0) return 2;
    if(sgn(d-r) == 0) return 1;
    return 0;
}

// 0 outside, 1 tangent, 2 intersects
int circle_line_relation(PT p, T r, PT a, PT b){
    T d = dist_from_point_to_line(a,b,p);
    if(sgn(d-r) < 0) return 2;
    if(sgn(d-r) == 0) return 1;
    return 0;
}


vector<PT> circle_circle_intersection(PT a, T r, PT b, T R){
    if(a==b && sgn(r-R)==0) return {PT(1e18,1e18)}; // infinite intersections (sentinel)
    vector<PT> ret;
    T d = sqrt(dist2(a,b));
    if(d > r+R || d + min(r,R) < max(r,R)) return ret;
    T x = (d*d - R*R + r*r)/(2*d);
    T y = sqrt(max<T>(0, r*r - x*x));
    PT v = (b-a)/d;
    ret.push_back(a + v*x + rotateccw90(v)*y);
    if(y > 0) ret.push_back(a + v*x - rotateccw90(v)*y);
    return ret;
}

// circles through a,b with radius r: returns count (0/1/2)
int get_circle(PT a, PT b, T r, circle &c1, circle &c2){
    auto v = circle_circle_intersection(a,r,b,r);
    if(v.empty()) return 0;
    c1 = circle(v[0], r);
    if(v.size()==2) c2 = circle(v[1], r);
    return (int)v.size();
}


T circle_circle_area(PT a, T r1, PT b, T r2){
    T d = (a-b).norm();
    if(r1 + r2 < d + EPS) return 0;
    if(r1 + d < r2 + EPS) return PI*r1*r1;
    if(r2 + d < r1 + EPS) return PI*r2*r2;
    T t1 = acos((r1*r1 + d*d - r2*r2)/(2*r1*d));
    T t2 = acos((r2*r2 + d*d - r1*r1)/(2*r2*d));
    return r1*r1*(t1 - sin(2*t1)/2.) + r2*r2*(t2 - sin(2*t2)/2.);
}



\end{lstlisting}


\subsection{Polygon}
\begin{lstlisting}[language=C++]
T polyArea2(const vector<PT>& p){
    T s = 0;
    int n = p.size();
    for(int i = 0; i < n; i++)
        s += cross(p[i], p[(i+1)%n]);
    return s;
}

T polyArea(const vector<PT>& p){
    return fabs(polyArea2(p)) * 0.5;
}

T perimeter(const vector<PT>& p){
    T ans = 0;
    int n = p.size();
    for(int i = 0; i < n; i++)
        ans += dist(p[i], p[(i+1)%n]);
    return ans;
}

PT centroid(const vector<PT>& p){
    T A2 = polyArea2(p);
    if(!sgn(A2)) return PT(0,0);
    PT c(0,0);
    int n = p.size();
    for(int i = 0; i < n; i++){
        int j = (i+1)%n;
        T k = cross(p[i], p[j]);
        c = c + (p[i] + p[j]) * k;
    }
    return c / (3.0 * A2);
}

int pointInPoly(const vector<PT>& p, PT q){
    int n = p.size();
    for(int i = 0; i < n; i++)
        if(onSeg(p[i], p[(i+1)%n], q)) return 0;

    int wn = 0;
    for(int i = 0; i < n; i++){
        PT a = p[i], b = p[(i+1)%n];
        bool below = a.y < q.y - EPS;
        if(below != (b.y < q.y - EPS)){
            int o = orient(q, b, a);
            if(o == 0) return 0;
            if(below == (o > 0)) wn += below ? 1 : -1;
        }
    }
    return wn ? -1 : +1;
}

bool isCCW(const vector<PT>& p){
    return sgn(polyArea2(p)) > 0;
}


// == CONVEX HULL ==

// convex check (allows collinear)
bool is_convex(const vector<PT>& p){
    bool s[3]={0,0,0};
    int n=(int)p.size();
    for(int i=0;i<n;i++){
        int j=(i+1)%n, k=(j+1)%n;
        s[sgn(cross(p[j]-p[i], p[k]-p[i])) + 1] = 1;
        if(s[0] && s[2]) return false;
    }
    return true;
}

vector<PT> convexHull(vector<PT> pts, bool keep_collinear = false){
    sort(pts.begin(), pts.end());
    pts.erase(unique(pts.begin(), pts.end()), pts.end());
    int n = pts.size();
    if(n <= 1) return pts;

    auto bad = [&](PT a, PT b, PT c){
        int o = orient(a,b,c);
        return keep_collinear ? (o < 0) : (o <= 0);
    };

    vector<PT> lower, upper;

    for(auto &p : pts){
        while(lower.size() >= 2 && bad(lower[lower.size()-2], lower.back(), p))
            lower.pop_back();
        lower.push_back(p);
    }

    for(int i = n-1; i >= 0; i--){
        PT p = pts[i];
        while(upper.size() >= 2 && bad(upper[upper.size()-2], upper.back(), p))
            upper.pop_back();
        upper.push_back(p);
    }

    lower.pop_back();
    upper.pop_back();
    lower.insert(lower.end(), upper.begin(), upper.end());
    return lower;
}


// == CONVEX DIAMETER ==
(hull must be CCW)

T convexDiameter(const vector<PT>& p){
    int n = p.size();
    if(n <= 1) return 0;
    if(n == 2) return dist(p[0], p[1]);

    T best = 0;
    int j = 1;

    for(int i = 0; i < n; i++){
        int ni = (i+1)%n;
        while(cross(p[ni] - p[i], p[(j+1)%n] - p[j]) >= -EPS)
            j = (j+1)%n;
        best = max(best, dist2(p[i], p[j]));
    }

    return sqrt(best);
}


// == POLAR SORT ==

bool half(PT p){ return p.y > 0.0 || (p.y == 0.0 && p.x > 0.0); }

void polar_sort(vector<PT>& v){
    sort(v.begin(), v.end(), [&](const PT& a, const PT& b){
        bool ha = half(a), hb = half(b);
        if(ha != hb) return ha > hb;
        T cr = cross(a,b);
        if(sgn(cr) != 0) return cr > 0;
        return a.norm2() < b.norm2();
    });
}

void polar_sort(vector<PT>& v, PT o){
    sort(v.begin(), v.end(), [&](const PT& A, const PT& B){
        PT a = A - o, b = B - o;
        bool ha = half(a), hb = half(b);
        if(ha != hb) return ha > hb;
        T cr = cross(a,b);
        if(sgn(cr) != 0) return cr > 0;
        return a.norm2() < b.norm2();
    });
}
\end{lstlisting}




\subsection{Theory}
% -------------------- Lines / Coordinates --------------------
% \vspace{0.5em}
\subsubsection{Lines}
\begin{itemize}[left=0pt, itemsep=0pt]
  \item \small \textbf{Line Equations:}
\vspace{-0.5em}
  \begin{align*}
    & y = mx + c \quad \text{(Straight line)} \\
    & \text{Slope: } m = \frac{y_2 - y_1}{x_2 - x_1} \\
    & m = \tan \theta \quad \text{(Slope in terms of angle)} \\
    & m_1=m_2 \Rightarrow \text{parallel}\\
    & m_1 \times m_2=-1 \Rightarrow \text{perpendicular}\\
    & m = \infty \quad \text{(Vertical line)} \\
    & m = 0 \quad \text{(Horizontal line)}
  \end{align*}

    

  \item \small \textbf{Intersection Ratio:} \\
  A point dividing segment between \((x_1, y_1)\) and \((x_2, y_2)\) in ratio \(m_1 : m_2\):
\vspace{-1.5em}
  
  \begin{align*}
    x = \frac{m_1 x_2 + m_2 x_1}{m_1 + m_2}, \quad
    y = \frac{m_1 y_2 + m_2 y_1}{m_1 + m_2}
  \end{align*}

  \item \small \textbf{Point of Intersection of Two Lines:} \\[2pt]
For two lines \(a_1x + b_1y + c_1 = 0\) and \(a_2x + b_2y + c_2 = 0\), the coordinates of their intersection point are:
\(
(x, y)
=
\left(
    \frac{b_1c_2 - b_2c_1}{a_1b_2 - a_2b_1},
    \frac{c_1a_2 - c_2a_1}{a_1b_2 - a_2b_1}
\right)
\)

  \item \small \textbf{Parallel and Perpendicular Lines:}
  \begin{itemize}[left=10pt]
    \item \textbf{Parallel line}: change \(c\) to another constant \(k\) in \(y = mx + c\)
    \item \textbf{Perpendicular line}: swap coefficients and change sign in line form \\
\vspace{-1.2em}
  \begin{align*}
      ax + by + c = 0 \quad \Rightarrow \quad bx - ay + k = 0
    \end{align*}
  \end{itemize}

  \item \small \textbf{Quadrant-based Angle \(\theta\) for point \(P(x,y)\):}
\vspace{-1.2em}
  \begin{align*}
  \theta = 
  \begin{cases}
    \tan^{-1}(\frac{y}{x}), & \text{if } x>0, y>0 \text{ (1st quad)} \\
    \pi - \tan^{-1}(|\frac{y}{x}|), & \text{if } x<0, y>0 \text{ (2nd quad)} \\
    \pi + \tan^{-1}(|\frac{y}{x}|), & \text{if } x<0, y<0 \text{ (3rd quad)} \\
    2\pi - \tan^{-1}(|\frac{y}{x}|), & \text{if } x>0, y<0 \text{ (4th quad)}
  \end{cases}
  \end{align*}
  

  \item \small \textbf{Cartesian and Polar Coordinates:}
\vspace{-.5em}
  \begin{align*}
    x = r \cos \theta, \quad
    y = r \sin \theta, \\
    r = \sqrt{x^2 + y^2}, \quad
    \theta = \tan^{-1}\left(\frac{y}{x}\right)
  \end{align*}

\end{itemize}




% -------------------- 2D Shapes --------------------
\subsection{2D Shapes}

\subsubsection{Triangle}
\begin{itemize}[left=0pt, itemsep=0pt]

\item \small \textbf{Perimeter and Semiperimeter:}
\begin{align*}
    P = a+b+c, \qquad
    s = \frac{a+b+c}{2}
\end{align*}

\item \small \textbf{Area Formulas:}
\begin{align*}
    A &= \sqrt{s(s-a)(s-b)(s-c)} \quad \text{[Heron's Formula]} \\
    A &= \frac12 bh \\
    A &= \frac12 ab\sin C
     = \frac12 bc\sin A
     = \frac12 ca\sin B
\end{align*}

\item \small \textbf{Pythagorean Theorem:}
\begin{align*}
    c^2 = a^2 + b^2
\end{align*}

\item \small \textbf{Law of Sines:}
\begin{align*}
    \frac{a}{\sin A}
    =
    \frac{b}{\sin B}
    =
    \frac{c}{\sin C}
    =
    2R
\end{align*}
\small where $a,b,c$ are opposite to angles $A,B,C$ respectively, and $R$ is the circumradius.

\item \small \textbf{Law of Cosines:}
\begin{align*}
    a^2 &= b^2 + c^2 - 2bc\cos A \\
    b^2 &= a^2 + c^2 - 2ac\cos B \\
    c^2 &= a^2 + b^2 - 2ab\cos C
\end{align*}

\item \small \textbf{Triangle Radii:}
\begin{align*}
    r = \frac{A}{s}, \qquad
    R = \frac{abc}{4A}
\end{align*}
\small $r$ = inradius, $R$ = circumradius.

\item \small \textbf{Special Triangles:}
\begin{align*}
    \text{Equilateral:} \quad
    h &= \frac{\sqrt3}{2}a, \quad
    A = \frac{\sqrt3}{4}a^2 \\
    \text{Isosceles:} \quad
    h &= \frac{\sqrt{4a^2-b^2}}{2}, \quad
    A = \frac{b}{4}\sqrt{4a^2-b^2}
\end{align*}

\item \small \textbf{Coordinate Geometry:}
\begin{align*}
    &A =
    \frac12
    \left|
    x_1(y_2-y_3)
    +
    x_2(y_3-y_1)
    +
    x_3(y_1-y_2)
    \right| \\
    &\text{Centroid}
    =
    \left(
    \frac{x_1+x_2+x_3}{3},
    \frac{y_1+y_2+y_3}{3}
    \right)
\end{align*}

\item \small \textbf{Miscellaneous:}
\begin{align*}
    &\text{Altitude} = \frac{2A}{\text{base}} \\
    &a = \frac{2h}{\sqrt3}
    \quad \text{[equilateral side from height]} \\
    &\text{If sides } x,x \text{ and angle }120^\circ:
    \quad \text{3rd side} = \sqrt3\,x
\end{align*}



\subsubsection{Vector Geometry}
\item \small \textbf{Dot Product:}
\begin{align*}
    \vec{u}\cdot\vec{v}
    =
    |\vec{u}||\vec{v}|\cos\theta
\end{align*}

\item \small \textbf{Perpendicular Vectors:}
\begin{align*}
    \vec{a}\cdot\vec{b}=0
\end{align*}
\small Angle between them is $90^\circ$.

\item \small \textbf{Cross Product / Area:}
\begin{align*}
    |\vec{a}\times\vec{b}|
    =
    |\vec{a}||\vec{b}|\sin\theta
\end{align*}
\small Gives the parallelogram area formed by $\vec a,\vec b$.

\item \small \textbf{Cross Product with Itself:}
\begin{align*}
    \vec{s}\times\vec{s}
    =
    |\vec{s}|^2\sin0^\circ
    =
    0
\end{align*}

\item \small \textbf{Parametric Equation of a Line:}
\begin{align*}
    P = A + \vec r t
\end{align*}
\small $A$ = point on line, $\vec r$ = direction vector.

\end{itemize}




\subsubsection{Quadrilateral}
\begin{itemize}[left=0pt, itemsep=0pt]
  \item \small {\textbf{General Quadrilateral:}}
  \begin{align*}
    \text{Area} &= \text{TriangleArea}_1 + \text{TriangleArea}_2
  \end{align*}
  
  \item \small {\textbf{Rectangle:}}
  \(
    \text{P} = 2(l + w) ,\quad
    \text{A} = l \cdot w
  \)

  \item \small {\textbf{Parallelogram:}}
  \(
    \text{P} = 2(\text{l} + \text{b}), \quad
    \text{A} = \text{b} \cdot \text{h}
  \)

  \item \small {\textbf{Square:}}
  \begin{align*}
    \text{P} &= 4a ,\quad
    \text{A} = a^2 ,\quad
    \text{D} = \sqrt{2}a
  \end{align*}

  \item \small {\textbf{Rhombus:}}
  \(
    \text{P} = 4a ,\quad
    \text{A} = \frac{d_1 \cdot d_2}{2}
  \)

  \item \small {\textbf{Trapezium:}}
  \(
    \text{P} = a + b + c + d ,\quad
    \text{A} = \frac{(a + b) \cdot h}{2}
  \)

\end{itemize}

\subsubsection{Circle}

\begin{itemize}[left=0pt, itemsep=0pt]

  \item \small {\textbf{Circle (General Equation):}}
  \begin{align*}
  (x - a)^2 + (y - b)^2 = r^2 \ [(a,b)\ center\ point]\\
    S = x^2 + y^2 + 2gx + 2fy + c = 0 \\
    \text{Center} = (-g, -f) ,\quad
    \text{Radius} = \sqrt{g^2 + f^2 - c} \\
    \text{X part} = 2\sqrt{g^2 - c} ,\quad
    \text{Y part} = 2\sqrt{f^2 - c}
  \end{align*}
  
  \item \small {\textbf{Circle:}}
  \begin{align*}
    \text{Circumference} &= 2\pi r ,\quad
    \text{Area} = \pi r^2 \\
    \text{1 Radian} &= \frac{180}{\pi} \text{ degree} \\
    \text{Sector Area} &= \frac{\theta}{360} \cdot \pi r^2 ,\quad \text{[If } \theta \text{ in degree]} \\
    \text{Sector Area} &= \frac{1}{2} \cdot r^2 \theta ,\quad \text{[If } \theta \text{ in radian]} \\
    \text{Arc Length} &= \frac{\theta}{360} \cdot 2\pi r ,\quad \text{[If } \theta \text{ in degree]} \\
    \text{Arc Length} &= r \theta ,\quad \text{[If } \theta \text{ in radian]}
  \end{align*}
\end{itemize}

\subsubsection{Ellipse}

\begin{itemize}[left=0pt, itemsep=0pt]

  \item \small {\textbf{Ellipse:}}
  \begin{align*}
    \text{Perimeter (approx)} &= \pi(a + b) , \quad
    \text{Area} = \pi a b
  \end{align*}

\end{itemize}

\subsubsection{Hexagon}

\begin{itemize}[left=0pt, itemsep=0pt]

  \item \small {\textbf{Regular Hexagon (6 equal sides):}}
  \begin{align*}
    &\text{Perimeter} = 6a ,\\
    &\text{Area} = 6 \cdot \text{EquilateralTriangleArea} \\
    & \text{Area (general)} = \frac{na^2 \cot\left(\frac{180}{n}\right)}{4}
  \end{align*}

\end{itemize}


\subsubsection{Polygon}
\begin{itemize}[left=0pt, itemsep=0pt]
  \item \small \textbf{Interior and Exterior Angles (for an \( n \)-sided polygon):}
  \begin{align*}
    \text{Sum of interior angles} &= (n - 2) \times 180^\circ \\
    \text{Each interior angle (regular)} &= \frac{(n - 2) \times 180^\circ}{n} \\
    \text{Each exterior angle (regular)} &= \frac{360^\circ}{n} \\
    \text{Inradius (Apothem)} \quad r &= \frac{s}{2\tan(\pi/n)},\\
    \text{Circumradius} \quad R &= \frac{s}{2\sin(\pi/n)}
  \end{align*}

  \item \small \textbf{Perimeter of a regular polygon:}
  \( 
  = n \times s
  \)

  \item \small \textbf{Apothem:} (The perpendicular distance from the center to a side in a regular polygon)
    \begin{align*}
      a &= \frac{s}{2 \tan\left(\frac{\pi}{n}\right)} \quad \text{[using side length]} \\
      a &= R \cos\left(\frac{\pi}{n}\right) \quad \text{[using radius]}
    \end{align*}

  \item \small \textbf{Area of a Regular Polygon:}
  \begin{align*}
    A = \frac{n \times s^2}{4 \tan\left(\frac{\pi}{n}\right)}, \quad
    A = \frac{1}{2} \times \text{Perimeter} \times a
  \end{align*}

  \item \small \textbf{Number of Diagonals:}
  \(
    D = \frac{n(n - 3)}{2}
  \)
\end{itemize}

% -------------------- 3D Shapes --------------------
\subsection{3D Shapes}

\begin{itemize}[left=0pt, itemsep=0pt]

  \item \small {\textbf{Cuboid (Rectangle box):}} 
  \begin{align*}
    \text{Diagonal} &= \sqrt{a^2 + b^2 + c^2} \\
    \text{Total Surface Area (TSA)} &= 2(ab + bc + ca) \\
    \text{Lateral Surface Area (LSA)} &= 2h(l + b) \\
    \text{Volume} &= abc
  \end{align*}

  \item \small {\textbf{Cube (Square box):}}
  \begin{align*}
    \text{Volume} &= a^3 ,\quad
    \text{LSA} = 4a^2 ,\quad
    \text{TSA} = 6a^2
  \end{align*}

  \item \small {\textbf{Sphere (3D Circle):}}
  \begin{align*}
    \text{Volume} = \frac{4}{3}\pi r^3 ,\quad
    \text{LSA} = 4\pi r^2 ,\quad
    \text{TSA} = 4\pi r^2
  \end{align*}

  \item \small {\textbf{Hemisphere (half of a sphere):}}
  \begin{align*}
    \text{Volume} = \frac{2}{3}\pi r^3 ,\quad
    \text{LSA} = 2\pi r^2 ,\quad
    \text{TSA} = 3\pi r^2
  \end{align*}

  \item \small {\textbf{Cylinder:}}
  \begin{align*}
    \text{Volume} = \pi r^2 h ,\quad
    \text{LSA} = 2\pi r h ,\\
    \text{TSA} = 2\pi r (r + h)
  \end{align*}

  \item \small {\textbf{Cone:}}
  \begin{align*}
    \text{Volume} = \frac{1}{3}\pi r^2 h ,\quad
    \text{LSA} = \pi r l ,\\
    \text{TSA} = \pi r (r + l)
  \end{align*}

    \item \small {\textbf{Spherical Cap:}}
    \begin{align*}
    \text{Volume} &= \frac{1}{3}\pi h^2 (3r - h) \\
    \text{Surface Area (curved)} &= 2\pi r h \\
    \text{Radius of base of cap 'a': } a^2 &= 2rh - h^2
    \end{align*}
\end{itemize}

\subsubsection{Prism}

\begin{itemize}[left=0pt, itemsep=0pt]
  \item \small \textbf{Triangular Prism Volume:}
  \begin{align*}
    \text{Volume} &= \text{Area of triangle} \times \text{Height} \\
    &= \left(\frac{1}{2} \times \text{base} \times \text{height}\right) \times \text{Height}
  \end{align*}
  where base = length of triangle base, height = height of triangle, Height = height of prism.

  \item \small \textbf{Surface Area of Triangular Prism:}
  \begin{align*}
    \text{Surface Area} = 2 \times \text{Area} + \text{Perimeter} \times \text{Height}
  \end{align*}
\end{itemize}

\subsubsection{Computational Geo}
\begin{itemize}[left=0pt, itemsep=0pt]
  \item \small \textbf{Polygon Area (Shoelace Formula):} \\
  Given polygon vertices \(\{p_i\}\),  
  \vspace{-1em}
  \begin{align*}
    \text{Area} = \frac{1}{2} \left| \sum_{i=0}^{n-1} (x_i y_{i+1} - x_{i+1} y_i) \right|
  \end{align*}

  \item \small \textbf{Polygon Perimeter:}
  \begin{align*}
    \text{Perimeter} = \sum_{i=0}^{n-1} \sqrt{(x_{i+1} - x_i)^2 + (y_{i+1} - y_i)^2}
  \end{align*}

  \item \small \textbf{Centroid of Simple Polygon:}
  \begin{align*}
    C_x &= \frac{1}{6A} \sum_{i=0}^{n-1} (x_i + x_{i+1})(x_i y_{i+1} - x_{i+1} y_i) \\
    C_y &= \frac{1}{6A} \sum_{i=0}^{n-1} (y_i + y_{i+1})(x_i y_{i+1} - x_{i+1} y_i)
  \end{align*}
  where \(A\) is the polygon area using the Shoelace Formula.
\end{itemize}


\subsection{Extra Formula}
\vspace{-0.5em}

\begin{itemize}[left=0pt]

\item \small \textbf{Linear Motion:}
\(
v = \frac{s}{t},
\quad
a = \frac{v-u}{t}
\)

\item \small \textbf{Equations of Motion:}
\(
v = u + at,
\quad
s = ut + \frac12 at^2
\)

\(
v^2 = u^2 + 2as,
\quad
s = \frac{(u+v)}{2}t
\)

\item \small \textbf{Wave Motion:}
\(
v = f\lambda,
\quad
T = \frac{1}{f}
\)

\item \small \textbf{Angular Motion:}
\(
\theta = \omega t,
\quad
\omega = \frac{\theta}{t}
\)

\(
\omega = 2\pi f = \frac{2\pi}{T}
\)

\item \small \textbf{Circular Motion:}
\(
v = r\omega,
\quad
a_c = \frac{v^2}{r} = r\omega^2
\)

\item \small \textbf{Period \& Frequency:}
\(
T = \frac{1}{f},
\quad
f = \frac{1}{T}
\)

\item \small \textbf{Work, Power, Energy:}
\(
W = Fs,
\quad
P = \frac{W}{t} = Fv,
\quad
KE = \frac12 mv^2,
\quad
PE = mgh
\)

\item \small \textbf{Momentum \& Force:}
\(
p = mv,
\quad
F = ma
\)

\item \small \textbf{Density \& Pressure:}
\(
\rho = \frac{m}{V},
\quad
P = \frac{F}{A}
\)






\item \small \textbf{Gravitation:}
\(
F = G\frac{m_1 m_2}{r^2},
\quad
g = \frac{GM}{r^2},
\quad
W = mg
\)

\item \small \textbf{Projectile Motion:}
\(
v_x = u\cos\theta,
\quad
v_y = u\sin\theta
\)

\(
T = \frac{2u\sin\theta}{g},
\quad
H = \frac{u^2\sin^2\theta}{2g},
\quad
R = \frac{u^2\sin 2\theta}{g}
\)

\item \small \textbf{Simple Harmonic Motion (SHM):}
\(
a = -\omega^2 x,
\quad
x = A\sin(\omega t + \phi)
\)

\(
v = \omega\sqrt{A^2 - x^2},
\quad
T = 2\pi\sqrt{\frac{m}{k}}
\)

\item \small \textbf{Fluid Mechanics:}
\(
P = \rho gh,
\quad
F_b = \rho V g
\)

\item \small \textbf{Heat:}
\(
Q = mc\Delta T,
\quad
Q = mL
\)

\item \small \textbf{Electricity (Basic):}
\(
V = IR,
\quad
P = VI = I^2R = \frac{V^2}{R}
\)

\item \small \textbf{Calculus Basics:}
\(
\frac{d}{dx}(x^n) = nx^{n-1}
\)

\(
\frac{d}{dx}(\sin x) = \cos x,
\quad
\frac{d}{dx}(\cos x) = -\sin x
\)

\(
\int x^n dx = \frac{x^{n+1}}{n+1} + C
\)
\quad
\(
\int \frac{1}{x} dx = \ln|x| + C
\)

\item \small \textbf{Useful Mathematical Limits:}
\(
\lim_{x \to 0} \frac{\sin x}{x} = 1,
\quad
\lim_{x \to 0} \frac{1 - \cos x}{x^2} = \frac12
\)

\item \small \textbf{Exponential Rules:}
\(
e^x = \sum_{n=0}^{\infty} \frac{x^n}{n!},
\quad
\frac{d}{dx}(e^x) = e^x
\)








\item \small \textbf{Basic Trigonometric Identities:}
\(
\sin^2\theta + \cos^2\theta = 1
\),
\quad
\(
1 + \tan^2\theta = \sec^2\theta,
\quad
1 + \cot^2\theta = \csc^2\theta
\)

\item \small \textbf{Double Angle Formulas:}
\(
\sin 2\theta = 2\sin\theta\cos\theta
\),
\quad
\(
\cos 2\theta = \cos^2\theta - \sin^2\theta = 1 - 2\sin^2\theta = 2\cos^2\theta - 1
\)

\(
\tan 2\theta = \frac{2\tan\theta}{1 - \tan^2\theta}
\)

\item \small \textbf{Sum and Difference:}
\(
\sin(A \pm B) = \sin A \cos B \pm \cos A \sin B
\)

\(
\cos(A \pm B) = \cos A \cos B \mp \sin A \sin B
\)

\item \small \textbf{Product to Sum:}
\(
\sin A \sin B = \frac{1}{2}[\cos(A-B) - \cos(A+B)]
\)

\(
\cos A \cos B = \frac{1}{2}[\cos(A-B) + \cos(A+B)]
\)
\end{itemize}


\subsection{Geometry Theorems}
\vspace{-0.5em}

\begin{itemize}[left=0pt, itemsep=0pt]

\item \small \textbf{Isosceles Triangle:}
Equal sides $\Rightarrow$ equal opposite angles.

\item \small \textbf{Centroid Theorem:}
Centroid divides each median in ratio $2:1$ (vertex : midpoint).

\item \small \textbf{Angle Bisector Theorem:}
Angle bisector divides opposite side proportionally:
\[
\frac{BD}{DC} = \frac{AB}{AC}
\]

\item \small \textbf{Midpoint Theorem:}
Segment joining midpoints of two sides is parallel to third side and half of it.

\item \small \textbf{Basic Proportionality (BPT):}
Line parallel to one side divides other two sides proportionally.

\item \small \textbf{Exterior Angle:}
Exterior angle = sum of two remote interior angles.

\item \small \textbf{Angles in Same Segment:}
Angles subtended by same arc are equal.

\item \small \textbf{Angle at Center:}
Central angle $= 2 \times$ angle at circumference on same arc.

\item \small \textbf{Angle in Semicircle:}
Angle subtended by diameter is $90^\circ$.

\item \small \textbf{Cyclic Quadrilateral:}
Opposite angles sum to $180^\circ$.

\item \small \textbf{Equal Chords:}
Equal chords subtend equal angles at center.

\item \small \textbf{Perpendicular from Center:}
Perpendicular from center to chord bisects chord.

\item \small \textbf{Equal Distance Chords:}
Chords equidistant from center are equal.

\item \small \textbf{Chord Bisector:}
Perpendicular bisector of chord passes through center.

\item \small \textbf{Tangent Radius:}
Radius at point of tangency is perpendicular to tangent.

\item \small \textbf{Two Tangents:}
Tangents from same external point are equal.

\item \small \textbf{Tangent Angle Bisector:}
Line joining center to external point bisects angle between tangents.

\item \small \textbf{Alternate Segment:}
Angle between tangent and chord equals angle in opposite arc.

\item \small \textbf{Intersecting Chords:}
If chords intersect at $P$:
\[
AP \cdot PB = CP \cdot PD
\]

\item \small \textbf{Tangent-Secant:}
\[
(\text{tangent})^2
=
(\text{external}) \times (\text{whole secant})
\]

\item \small \textbf{Two Secants:}
\[
PA \cdot PB = PC \cdot PD
\]

\item \small \textbf{Triangle Congruence:}
SSS, SAS, ASA, AAS, RHS $\Rightarrow$ congruent triangles.

\end{itemize}



\section{Sequence and Series}

\subsection{Nth Term Formulas:} 
\vspace{-2em}
\begin{align*}
& \text{Arithmetic:} \quad a_n = a + (n - 1)d \\
& \text{Geometric:} \quad a_n = ar^{n-1}
\end{align*}
\vspace{-2em}

\subsection{Sum of First $n$ Terms:} 
\vspace{-2em}
\begin{align*}
& \text{Arithmetic:} \quad S_n = \frac{n}{2} \left( 2a + (n - 1)d \right) \\
& \text{Geometric (if } r < 1 \text{):} \quad S_n = \frac{a(1 - r^n)}{1 - r} \\
& \text{Geometric (if } r > 1 \text{):} \quad S_n = \frac{a(r^n - 1)}{r - 1} \\
& \text{Infinite (if } r < 1 \text{):} \quad S_n = \frac{a}{1 - r} 
\end{align*}
\vspace{-2em}

\subsection{Special Sums:}
\vspace{-2em}
\begin{align*}
& \text{Sum of first } n \text{ natural numbers:} \quad \frac{n(n + 1)}{2} \\
& \text{Sum of squares of first } n \text{ natural numbers:} \\ &\quad \quad \frac{n(n + 1)(2n + 1)}{6} \\
& \text{Sum of squares of first } n \text{ even numbers:} \\ &\quad \quad \frac{2n(n + 1)(2n + 1)}{3} \\
& \text{Sum of squares of first } n \text{ odd numbers:} \\ &\quad \quad \frac{n(2n + 1)(2n - 1)}{3}
\end{align*}
\vspace{-1.5em}


\subsection{Equation:}
\[
ax^2 + bx + c = 0 \quad \Rightarrow \quad x = \frac{-b \pm \sqrt{b^2 - 4ac}}{2a}
\]





\section{Combinatorics}

\subsection{Permutations (Order Matters)}
\vspace{-1.5em}
\begin{align*}
&\text{Permutation of all } n \text{ elements:} \quad P(n) = n! \\
& \text{Permutation of } r \text{ elements chosen from } n, \\
& \quad\quad \text{ no repetition:} \quad P(n, r) = \frac{n!}{(n - r)!} 
\end{align*}
\textit{Use:} Example: arrange 2 from A, B, C:  AB, BA, AC, CA, BC, CB.
\begin{align*}
& \text{Permutation of } n \text{ position chosen from } r\ \text{elem}, \\
& \quad\quad \text{ with repetition allowed:} \quad P(r, n) = r^n\\
\end{align*}
\textit{Use:} Example: arrange 5 from A, B:  AAAAB, AAAABA, AABAB, AABBB...
\subsection{Permutation of Multisets}
When a set contains \( n \) objects where:
\begin{itemize}[left=0pt]
  \item \( P_i \) objects are of the \( i\)-th kind (indistinguishable)
\end{itemize}
then the total number of distinct permutations is given by:
\[
\frac{n!}{P_1! \cdot P_2! \cdot \cdots \cdot P_k!}
\]



\subsection{Derangement (No element in original position)}
\vspace{-1.5em}
\begin{align*}
!n &= \left\lfloor \frac{n!}{e} + 0.5 \right\rfloor \\
&= n! \left( 1 - \frac{1}{1!} + \frac{1}{2!} - \frac{1}{3!} + \cdots + \frac{(-1)^n}{n!} \right)
\end{align*}
\textit{Use:} Counts permutations with no fixed points. Useful in problems like secret Santa or seat rearrangements.
\\
\textbf{If a permutation has at most $k$ deranged (misplaced) positions:}
\[
\text{Total} = \sum_{r=0}^{k} \binom{n}{r} \cdot !r
\]

It counts permutations of \( n \) elements with at most \( k \) misplaced positions.  
\(\binom{n}{r}\) chooses which positions are misplaced, and \(!r\) counts derangements of those positions.


\subsection{Combinations (Order Doesn't Matter)}
\vspace{-1.8em}
\begin{align*}
& \text{Without repetition:} \quad C(n, r) = \frac{n!}{r!(n - r)!} \\
& \text{With repetition (multiset selection):}\\& \quad \quad C(n + r - 1, r) = \frac{(n + r - 1)!}{r!(n - 1)!}
\end{align*}
\textit{Use:} Example: arrange 2 from A, B, C:  AB, AC, BC.

\subsection{Stars and Bars Theorem}
\vspace{-1.5em}
\begin{align*}
& \text{Number of solutions to } x_1 + x_2 + \cdots + x_k = n, \\
& \quad\quad \ x_i \geq 0: \quad C(n + k - 1, k - 1) \\
& \quad\quad \ x_i > 0: \quad C(n - 1, k - 1) \\
& \quad \ a > 1,  b>3: \\ & \quad\quad C(n +k- 1 - (2 + 4), k - 1)
\end{align*}
\vspace{-.2em}
\textit{Use:} Distribute identical items into boxes with or without emptiness allowed.

\subsection{Circular Permutations}
\vspace{-1.5em}
\begin{align*}
& \text{When clockwise and anticlockwise } \\ &\text{arrangements are considered, }\\
& \quad\quad \text{ same:} \quad \frac{(n - 1)!}{2} \\
& \quad\quad \text{different:} \quad (n - 1)!
\end{align*}
\textit{Use:} Arrange people/items around a round table or circle.

\subsection{From \( n \) Points}
\vspace{-1.5em}
\begin{align*}
& \text{Number of distinct lines from } n \text{ points:} \\
& \quad \quad C(n, 2) = \frac{n(n - 1)}{2} \\
& \text{Number of triangles:} \quad C(n, 3) \\
& \text{Number of rectangles (in grid points):} \quad C(n, 4) \\
& \text{Number of diagonals in an } n\text{-sided polygon:} \\
& \quad \quad C(n, 2) - n = \frac{n(n - 3)}{2}
\end{align*}
\textit{Use:} Geometric and combinational problems involving points and polygons.

\subsection{Subset Selection}
\vspace{-1.5em}
\begin{align*}
&\text{Ways to select at least one from } n \text{ elements:}\\
& \quad \quad \quad \quad \quad 2^n - 1
\end{align*}
\textit{Use:} Count non-empty subsets.

\subsection{Maintaining a Condition}
\vspace{-1em}
\[
\left( \frac{n!}{(n - r)!} \right) \times \left( \frac{m}{n} \right)
\]
\textit{Use:} This can represent weighted permutations or conditional selections where \(m/n\) is a probability or fraction related to selection.

\subsection{Divisibility}

\textbf{Statement.} For integers \(n\) and \(r\) with \(0\le r\le n\),
\[
\frac{n!}{(n-r)!}\quad\text{is divisible by}\quad r!,
\]

\paragraph{Algebraic proof.}
By definition of the binomial coefficient,
\begin{align*}
&\binom{n}{r}=\frac{n!}{r!(n-r)!}. \\
    &=\frac{n-r+1}{1} \times  \frac{n-r+2}{2} ...  \times  \frac{n}{r} .
\end{align*}


\paragraph{Example.}
Take \(n=6,\; r=3\). Then
\begin{align*}
\frac{6!}{(6-3)!}=\frac{720}{6}=120,
\qquad r!=3!=6, \\
\qquad \frac{120}{6}=20=\binom{6}{3}, \text{ an integer.}
\end{align*}


\subsection{Subarray}
All possible subarray count:
\begin{align*}
a_1,a_2,..,a_n &= \frac{n(n+1)}{2}\\
&= C(n+1, 2)
\end{align*}

\paragraph{Sum of Bitwise And of all subarray}
\begin{align*}
a_1, a_2,..,a_n &= \sum_{Bit} \sum_{Len} C(Len+1, 2) \times 2^{Bit}\\
\end{align*}
\paragraph{Example.} If for some bit $b$ the array has runs of lengths $L_1,L_2,\dots$, that bit's contribution is
\[
2^b\sum_i \frac{L_i(L_i+1)}{2}.
\]

\paragraph{Sum of Bitwise AND of all subsequence}
\begin{align*}
a_1, a_2,..,a_n &= \sum_{Bit} (2^{Frequncy_{Bit}} - 1) \times 2^{Bit}\\
\end{align*}

\paragraph{Sum of Bitwise OR of all subarray}
\begin{align*}
a_1, a_2,..,a_n &= \sum_{Bit} (C(n+1, 2) \times 2^{Bit} \\ & - \sum_{L_{0 subarray}} C(L+1, 2) \times 2^{Bit})\\
\end{align*}

\subsection{Tree}
All possible subtree path cost:
\begin{align*}
ans &= \sum_i cost_i \times childCnt_i \times (n-childCnt_i)\\
\end{align*}


\subsection{Calculate Modular Inverse and Combinatorics}
\begin{lstlisting}[language=C++]

const int N = 1e6 + 1;
const int mod = 1e9 + 7;
vector<int> facto(N+1, 1), invFacto(N+1, 1);

int mul(ll a, ll b){return (a*b) % mod;}
int add(ll a, ll b){return (a+b) % mod;}
int sub(ll a, ll b){return (a-b+mod) % mod;}
void calcInvFacto(){
    vector<int> inv(N+1);
    inv[1] = 1;
    for(ll i = 2; i<= N; i++){
        inv[i] = mod - mul(mod / i, inv[mod % i]); 
    }
    for(int i=1;i<N;i++){
        facto[i] = mul(facto[i-1], i);
        invFacto[i] = mul(invFacto[i-1], inv[i]);
    }
}
int CnR(ll n, ll r){
    if(r < 0 || r > n) return 0;
    return mul(facto[n], mul(invFacto[r], invFacto[n-r]));
}
int PnR(ll n, ll r){
    if(r < 0 || r > n) return 0;
    return mul(facto[n], invFacto[n-r]);
}
\end{lstlisting}                                             









\subsection{Catalan Numbers and Balanced Sequences}
Catalan numbers count various balanced structures (e.g., valid parentheses sequences).

\textbf{Recursive Formula:}
\vspace{-1em}
\begin{align*}
C_0 = 1,\quad C_1 = 1,\quad C_n = \sum_{k=0}^{n-1} C_k C_{n-1-k}
\end{align*}
\textit{Use: Count valid expressions, bracket sequences, tree shapes, etc.}

\textbf{Closed Form:} Number of balanced bracket sequences of length \(2n\):
\[
C_n = \frac{1}{n+1} \binom{2n}{n} = \frac{(2n)!}{(n+1)! \cdot n!}
\]
\textit{Use: Count number of balanced bracket sequences of length \(2n\).}

\textbf{With \(k\) bracket types:}
\[
\text{Count} = C_n \cdot k^n
\]
\textit{Use: Add color/type variety to bracket problems.}

\textbf{Prefix Condition:} Number of sequences with \(n + k\) pairs and first \(k\) open brackets:
\[
C_{n,k} = \frac{k+1}{n+k+1} \binom{2n+k}{n}
\]
\textit{Use: Count bracket sequences with fixed number of opening brackets at start.}




\subsection{Binomial Coefficients}
\[
\binom{n}{k} = \frac{n!}{k!(n-k)!}
\]

\noindent
\textbf{Meaning:} Number of ways to choose $k$ items from $n$ without regard to order.

\noindent
\textbf{Use:} Appears in combinatorics, binomial expansion, Pascal’s triangle, and counting problems.



\noindent
\textbf{Binomial Expression:}

\[
(x + 1)^k = \sum_{r = 0}^{k} \binom{k}{r} x^{r}
\]

\[
=>(x + 1)^k = \binom{k}{0}x^{0} + \binom{k}{1}x^{1} +  \cdots + \binom{k}{k}x^{k}
\]



\noindent
\textbf{Pascal’s Identity:}
\[
\binom{n}{k} = \binom{n-1}{k} + \binom{n-1}{k-1}
\]
Used for recursive computation and building Pascal’s Triangle.
\vspace{1em}
\noindent
\textbf{Pascal's Triangle (First 6 Rows):}
\begin{lstlisting}
Start from Row 0 and Col 0, 
[binom(r, c)]:
          1         - binom(0,0)
        1   1       - (1,0) (1,1)
      1   2   1     - (2,0) (2,1), ...
    1   3   3   1
  1   4   6   4   1
1   5  10  10   5   1

\end{lstlisting}{}



\subsection{Stirling Numbers}

\subsubsection{First Kind (\(s(n,k)\))}
Counts permutations of \(n\) elements with \(k\) disjoint cycles:
\[
s(n,k) = (n - 1) \cdot s(n-1,k) + s(n-1,k-1)
\]
Base cases:
\[
s(0,0) = 1,\quad s(n,0) = s(0,n) = 0
\]
\textit{Use: Helpful in permutation-based DP.}
\[
\sum_{k=0}^n s(n,k) = n!
\]
\textit{Use: Total permutations of \(n\) items.}\\
Example: $s(3,2) = 3$ — Three ways to arrange 3 elements into 2 cycles: (1)(23), (2)(13), (3)(12).  

\subsubsection{Second Kind (\(S(n,k)\))}
Counts ways to partition \(n\) objects into \(k\) non-empty subsets:
\[
S(n,k) = k \cdot S(n-1,k) + S(n-1,k-1)
\]
Base cases:
\[
S(0,0) = 1,\quad S(n,0) = S(0,n) = 0
\]
\textit{Use: Useful in grouping problems.}

\textbf{Special case:}
\[
S(n,2) = 2^{n-1} - 1
\]
\textit{Use: Special case for partitioning into two subsets.}\\
Example: Counts ways to divide $3$ elements into $2$ non-empty subsets.  
 $S(3,2) = 3$ — {1,2}{3}, {1,3}{2}, {2,3}{1}.  

\textbf{Coloring Interpretation:} 
\begin{align*}
S(n,k) \cdot k! = \text{Number of colorings using } k\\
\text{colors such that each is used at least once}
\end{align*}
\textit{Use: Coloring or assignment problems ensuring coverage.}

\subsubsection{r-associated  Stirling Number}
Number of partitions where each subset has at least \(r\) elements:
\[
S_r(n,k) = \text{(custom recurrence)}
\]
\textit{Use: Partition into subsets with at least \(r\) elements each. Useful in constrained grouping.}

\subsubsection{Reduced Stirling Number \(S_d(n,k)\)}
Partitions where each element in a subset differs by at least \(d\):
\begin{align*}
S_d(n,k) = S(n - d + 1, k - d + 1) \quad \\
\text{(when } n \geq k \geq d \text{)}
\end{align*}
\textit{Use: Partition such that elements in each subset are at least distance \(d\) apart.}

\section{Probability / Expected Value}

\subsection{Probability basics}
If an event $E$ occurs in $r$ ways out of $n$ equally likely outcomes,
\[
P(E)=\frac{r}{n}, \qquad P(E')=1-P(E).
\]
Complement rule:
\[
P(E)+P(E')=1.
\]

% --- union / inclusion-exclusion (2,3 and general) ---

\subsubsection{Inclusion-Exclusion:} 
\noindent
Two events $A,B$:
\[
\begin{aligned}
&P(A\cup B)=P(A)+P(B)-P(A\cap B),
\\& P(A\cap B)=P(B)\,P(A\mid B).
\end{aligned}
\]

\noindent
Three events $A,B,C$:
\[
\begin{aligned}
&P(A\cup B\cup C) =P(A)+P(B)+P(C)\\
&  -P(A\cap B)-P(B\cap C)-P(A\cap C)\\
& +P(A\cap B\cap C).
\end{aligned}
\]

% --- short notes / tips ---
\noindent
\begin{itemize}
  \item \textbf{Notes:} If events are pairwise disjoint, all intersections vanish and the union probability is the sum of individual probabilities.
\end{itemize}



\noindent
Conditional probability:
\[
P(A\mid B)=\frac{P(A\cap B)}{P(B)}\quad (P(B)>0).
\]
Independence:
\[
\begin{aligned}
P(A\cap B)=P(A)P(B).
\end{aligned}
\]

\subsection{Expected value}
\textbf{Definition (discrete).}
If a random variable $X$ takes values $x_1,\dots,x_k$ with probabilities $p_1,\dots,p_k$ then
\[
\mathbb{E}[X]=\sum_{i=1}^k x_i p_i.
\]
For a countable set of outcomes,
\[
\mathbb{E}[X]=\sum_{i=1}^{\infty} x_i p_i,
\]
provided the sum converges (absolutely in most uses).


\textbf{Linearity of expectation (always true).}
For any random variables $X,Y$ (not necessarily independent) and constants $a,b$,

\vspace{-5mm}
\begin{align*}
\mathbb{E}[X+Y]=\mathbb{E}[X]+\mathbb{E}[Y], 
\\ \mathbb{E}[aX+b]=a\mathbb{E}[X]+b.
\end{align*}

\textbf{Indicator variables.} If $I_A$ is the indicator of event $A$ (i.e. $I_A=1$ when $A$ occurs, else $0$), then
\[
\mathbb{E}[I_A]=P(A).
\]
Use indicator variables plus linearity to simplify many counting expectations:
\[
\mathbb{E}\Big[\sum_{i} I_i\Big] = \sum_i \mathbb{E}[I_i] = \sum_i P(I_i=1).
\]

\paragraph{Small examples}

\paragraph{Fair die}
If $X$ is the outcome of a fair six-sided die,
\[
\mathbb{E}[X]=\frac{1+2+3+4+5+6}{6}=3.5.
\]

\paragraph{Expected number of fixed points in a random permutation of $n$}
Let $I_j$ indicate that element $j$ is a fixed point. Then $P(I_j=1)=1/n$, so
\[
\mathbb{E}[\#\text{ fixed points}] = \sum_{j=1}^n \mathbb{E}[I_j] = n\cdot\frac{1}{n}=1.
\]




\subsubsection{Geometric / recursion}

\paragraph{Uniform distribution.}  
In a uniform distribution, the random variable $X$ has $n$ possible values $a, a+1, \dots, b$, each with probability $1/n$.  
For example, when throwing a die, $a=1$, $b=6$, and $P(X=x)=1/6$ for each value $x$.  
The expected value of $X$ in a uniform distribution is
\[
\mathbb{E}[X] = \frac{a+b}{2}.
\]

\paragraph{Binomial distribution.}  
In a binomial distribution, $n$ independent attempts are made and the probability that a single attempt succeeds is $p$.  
The random variable $X$ counts the number of successful attempts, and the probability of a value $x$ is
\[
P(X=x) = \binom{n}{x} p^x (1-p)^{n-x},
\]
where $\binom{n}{x}$ counts the number of ways to choose $x$ successes among $n$ attempts.  
For example, when throwing a die ten times, the probability of throwing a six exactly three times is
\[
P(X=3) = \binom{10}{3} \left(\frac16\right)^3 \left(\frac56\right)^7.
\]
The expected value of $X$ in a binomial distribution is
\[
\mathbb{E}[X] = np.
\]

\paragraph{Generalized binomial with different probabilities.}  
If each attempt has its own success probability $p_i$, the standard binomial formula does not apply.  
Let $dp[i][k]$ denote the probability of obtaining $k$ successes using the first $i$ trials. Then
\begin{align*}
dp[i][k] = dp[i-1][k] \cdot (1-p_i) \\+ dp[i-1][k-1] \cdot p_i, \\
\text{Base cases: }
dp[0][0]=1, dp[0][k>0]=0 
\end{align*}
which allows computing the probability for each $k$ taking into account individual $p_i$ values.

\paragraph{Brute force approach:}  
Let $p_i$ be the probability that the $i$-th coin shows head. Then
\[
P(X = K) = \sum_{\substack{S \subseteq \{1,\dots,N\} \\ |S| = K}} \prod_{i \in S} p_i \prod_{j \notin S} (1-p_j),
\]
where the sum is over all subsets $S$ of size $K$.  
\textit{Note: This is exact but computationally infeasible for large $N$, so dynamic programming is preferred.}


\paragraph{Geometric distribution.}  
In a geometric distribution, each attempt succeeds with probability $p$, and we continue until the first success.  
The random variable $X$ counts the number of attempts needed, and the probability of a value $x$ is
\[
P(X=x) = (1-p)^{x-1}p,
\]
where $(1-p)^{x-1}$ corresponds to $x-1$ unsuccessful attempts and $p$ corresponds to the first successful attempt.  
For example, if we throw a die until we throw a six, the probability that the number of throws is exactly 4 is
\[
P(X=4) = \left(\frac{5}{6}\right)^3 \frac{1}{6}.
\]
The expected value of $X$ in a geometric distribution is
\[
\mathbb{E}[X] = \frac{1}{p}.
\]

\paragraph{Example: ``toss until first head'' (success prob.\ $p$).}
Let $T$ be the number of tosses until the first success (so $P(T=k)=(1-p)^{k-1}p$ for $k\ge1$).
By summing the series,
\[
\mathbb{E}[T]=\sum_{k=1}^{\infty} k(1-p)^{k-1}p=\frac{1}{p}.
\]
Equivalently, recursion: conditioning on the first toss gives
\[
\mathbb{E}[T]=1\cdot p + (1+\mathbb{E}[T])\cdot(1-p)
\;\Longrightarrow\; \mathbb{E}[T]=\frac{1}{p}.
\]
For $p=\tfrac12$ this yields $\mathbb{E}[T]=2$.

\subsubsection{Recursive expectations}

\textbf{Law of total expectation.} If after the first step one of several actions $i$ happens with probability $p_i$, giving immediate reward $r_i$ and leaving a subproblem with expected remaining value $E_i$, then
\[
\mathbb{E}[X] \;=\; \sum_i p_i\,(r_i + E_i).
\]
Solve the resulting linear equation(s) for the unknown expectation(s).

\medskip
\paragraph{Example 1:``toss until first head'' (success prob.\ $p$).}
Let $T$ be the number of tosses until the first head. Condition on the first toss:
\[
T=\begin{cases}
1, & \text{w.p. } p,\\[4pt]
1+T', & \text{w.p. } 1-p,
\end{cases}
\]
where $T'\overset{d}{=}T$ (fresh copy). Taking expectations:
\[
\mathbb{E}[T] = p\cdot 1 + (1-p)\cdot(1+\mathbb{E}[T]).
\]
Solve for $\mathbb{E}[T]$:
\begin{align*}
\mathbb{E}[T] = p + (1-p) + (1-p) \mathbb{E}[T] 
\\ = 1 + (1-p)\mathbb{E}[T] = p\,\mathbb{E}[T]=1
\\ \mathbb{E}[T]=\frac{1}{p}.
\end{align*}

\paragraph{Example 2: expected number of fair-coin flips to see two consecutive heads.}
Use states: $E_0$ = expected flips starting with no previous head, $E_1$ = expected flips given the previous flip was a head.
\[
\begin{aligned}
E_0 &= 1 + \tfrac12 E_1 + \tfrac12 E_0, \\
E_1 &= 1 + \tfrac12\cdot 0 + \tfrac12 E_0.
\end{aligned}
\]
Solve the system. From the first equation $E_0-\tfrac12E_0=1+\tfrac12E_1$, so $E_0=2+E_1$.
Substitute into the second: $E_1 = 1 + \tfrac12(2+E_1)=2+\tfrac12E_1$, hence $\tfrac12E_1=2$ and $E_1=4$. Thus $E_0=2+4=6$.
So the expected number of flips to get two consecutive heads is $6$.

\subsection{Expected inversions (permutation):} $\mathbb{E}[\text{inv}] = \frac{n(n-1)}{4}$.


\subsection{Variance (brief)}
\[
\operatorname{Var}(X)=\mathbb{E}[X^2]-(\mathbb{E}[X])^2.
\]
Affine property:
\[
\operatorname{Var}(aX+b)=a^2\operatorname{Var}(X).
\]

\subsubsection{Useful identities}
\text{Law of total probability:}
\begin{align*}
\quad & P(A)=P(A\mid B)P(B)+P(A\mid B^c)P(B^c).\\
\end{align*}
\text{Bayes' theorem:}
\begin{align*}
 & P(B\mid A)=\frac{P(A\mid B)P(B)}{P(A)}\quad(P(A)>0).
\end{align*}
\text{Mismatch in permutation:}
\begin{align*}
 & P(a_1)= 1 - \frac{1}{n}.
 \\& P(a_1..a_n) = n - 1
\end{align*}

\noindent
Expected number of connected components in a tree:
\[
\begin{aligned}
\mathbb{E}[X]
&= 1 + \sum_{e \in \text{edges}} \mathbb{E}[\text{notEdge}_e] \\
&= 1 + \mathbb{E}[\text{notEdge}_1] + \mathbb{E}[\text{notEdge}_2] + \dots + \mathbb{E}[\text{notEdge}_{n-1}],
\end{aligned}
\]
where $\mathbb{E}[\text{notEdge}_e] = p_e$ is the probability that edge $e$ is removed.


\subsection{Contest tips}
\begin{itemize}
  \item Use inclusion--exclusion for unions of many events.
  \item Use Stirling numbers when counting set partitions (unlabeled boxes).
  \item Use indicator variables + linearity to turn combinatorial counts into simple expectations.
  \item For recursive expectations, condition on the first step and solve the resulting linear equation.
\end{itemize}







\section{Fibonacci Numbers}

\subsection{Definition}
\[
F_1=F_2=1,\qquad F_n=F_{n-1}+F_{n-2}
\]

\subsection{Key Properties}
\begin{itemize}[left=0pt, itemsep=0pt]
  \item $\gcd(F_m,F_n)=F_{\gcd(m,n)}$
  \item $\gcd(F_n,F_{n+1})=1$ $\gcd(F_n,F_{n+2})=1$ $\gcd(F_{n+1},F_{n+2})=1$
  \item $F_k \mid F_m \;\text{if}\; k\mid m$
  \item $F_{3k}$ is even
  \item Fibonacci mod $n$ is periodic (Pisano), period $\le 6n$
  \item $n$ is Fibonacci iff $5n^2\pm4$ is a perfect square
\end{itemize}

\subsection{Closed Form (Binet)}
\[
F_n=\frac{1}{\sqrt5}\left(\phi^n-\psi^n\right),
\quad
\phi=\frac{1+\sqrt5}{2}
\]
\textit{(Approximate, floating precision)}

\subsection{Sum}
\[
\sum_{i=1}^{n} F_i = F_{n+2}-1
\]

\subsection{Log-Factorial Precompute}
\[
\log(n!)=\sum_{k=1}^n \log k
\]

\begin{lstlisting}[language=C++]
vector<double> logFact(N+1);
logFact[0]=0;
for(int i=1;i<=N;i++)
    logFact[i]=logFact[i-1]+log(i);
// log(a*b) = log(a) + log(b) // log(a/b) = log(a) - log(b) // reverse = exp(i) or expl(i)
\end{lstlisting}





\section{Calendar Day Calculation}

% Zeller's Congruence
Zeller's congruence is an algorithm to compute the day of the week for any date. It has different versions for the Gregorian and Julian calendars.

\subsection{Gregorian Calendar}
\vspace{-2em}
\begin{align*}
\begin{aligned}
    h = ( q + \left\lfloor \frac{13(m+1)}{5} \right\rfloor + k + \left\lfloor \frac{k}{4} \right\rfloor + \left\lfloor \frac{j}{4} \right\rfloor \\ - 2j ) \bmod 7
\end{aligned}
\end{align*}
\vspace{-1.5em}

\subsection{Julian Calendar}
\vspace{-2em}
\begin{align*}
\begin{aligned}
h = \left( q + \left\lfloor \frac{13(m+1)}{5} \right\rfloor + k + \left\lfloor \frac{k}{4} \right\rfloor + 5 - j \right) \\ \bmod 7
\end{aligned}
\end{align*}
\vspace{-1.5em}

\subsubsection{Where:}
\begin{itemize}
    \item \(h\) is the day of the week (0 = Saturday, 1 = Sunday, ..., 6 = Friday)
    \item \(q\) is the day of the month
    \item \(m\) is the month (March = 3, ..., January = 13, February = 14 of the \textbf{previous year})
    \item \(k = \text{year} \bmod 100\) (the year within the century)
    \item \(j = \left\lfloor \frac{\text{year}}{100} \right\rfloor\) (the zero-based century)
\end{itemize}

\subsection{Adjustment for January and February}
If the month is January or February, use:
\begin{align*}
    m = 13 \text{ (January)}, \quad m = 14 \text{ (February)},\\ \text{year} = \text{year} - 1
\end{align*}

\textit{Use: Quickly determine the day of the week for a given date.)}












\section{Number Theory}
\subsection{Euler's Totient Function}

Euler's totient function, $\phi(n)$, counts the number of positive integers up to a given integer $n$ 
that are relatively prime to $n$.
\noindent

\begin{itemize}
    \item For a \textbf{prime number} $p$:
    \[
    \phi(p) = p - 1
    \]

    \item For a \textbf{power of a prime} $p^k$:
    \[
    \phi(p^k) = p^k - p^{k-1} = p^k \left(1 - \frac{1}{p}\right)
    \]

    \item The function is \textbf{multiplicative}. If $\gcd(a, b) = 1$, then:
    \[
    \phi(a \times b) = \phi(a) \times \phi(b)
    \]

    \item For a number $n$ with prime factorization 
    $n = p_1^{k_1} \times p_2^{k_2} \times \dots \times p_r^{k_r}$:
    \[
    \phi(n) = n \left(1 - \frac{1}{p_1}\right) \left(1 - \frac{1}{p_2}\right) \dots \left(1 - \frac{1}{p_r}\right)
    \]
\end{itemize}

\subsection{Number Theoretic Sums}

\noindent
\begin{itemize}
    \item \textbf{Sum of divisors of all numbers from $1$ to $N$:}  
    The sum of divisors of all integers from $1$ to $N$ is
    \[
    \sum_{i=1}^{N} \sigma(i) = \sum_{d=1}^{N} d \cdot \left\lfloor \frac{N}{d} \right\rfloor,
    \]
    where $\sigma(i)$ denotes the sum of divisors of $i$.  
    \textbf{Time Complexity:} $O(N)$.

   \item \textbf{Sum of divisors of all numbers from $1$ to $N$ (Optimized $O(\sqrt{N})$):}  
    Let $q = \lfloor N/d \rfloor$ for each divisor $d$. Group all $d$ that give the same $q$. Then
    \begin{align*}
        &\sum_{i=1}^{N} \sigma(i) \\
    =& \sum_{q=1}^{N} q \cdot \frac{(d_{\min}+d_{\max}) \cdot (d_{\max}-d_{\min}+1)}{2},
    \end{align*}
    
    where
    \[
    d_{\min} = \left\lfloor \frac{N}{q+1} \right\rfloor + 1, \quad
    d_{\max} = \left\lfloor \frac{N}{q} \right\rfloor.
    \]
    Each \(q\) corresponds to a “block” of d values with the same quotient.
    This reduces the time complexity to $O(\sqrt{N})$.
    \begin{lstlisting}
ll di2 = binPow(2, mod - 2);
ll ans = 0;
for (ll i = n; i > 0; i)
{
    ll q = n / i;
    ll r = i;
    ll l = n / (q + 1) + 1;

    ll cur = mul(mul(q, mul(add(l, r), add(sub(r, l), 1))), di2);
    ans = add(ans, cur);
    i = l - 1;
}
    \end{lstlisting}

    \item \textbf{Sum of Co-primes:}  
    The sum of all integers $i$ from $1$ to $N$ that are co-prime to $N$ (i.e., $\gcd(i, N) = 1$). For $N > 1$:
    \[
    \text{Sum} = \frac{N \cdot \phi(N)}{2}.
    \]
    \textbf{Time Complexity:} $O(\sqrt{N})$ if computing $\phi(N)$ using prime factorization.

    \item \textbf{Count of numbers coprime with $N$:}  
    The count of integers $i$ from $1$ to $M$ such that $\gcd(i, N) = 1$ is
    \[
    \text{Count} = \phi(N) \quad \text{if } M = N.
    \]
    For general $M \ge N$, we can write
    \[
    \text{Count} = \left\lfloor \frac{M}{N} \right\rfloor \cdot \phi(N) + \phi(\text{remainder}).
    \]
    \textbf{Time Complexity:} $O(\sqrt{N})$ to compute $\phi(N)$.

    \item \textbf{Count of numbers with a specific GCD with $N$:}  
    The count of integers $i$ from $1$ to $M$ such that $\gcd(i, N) = g$ is
    \[
    \text{Count} = \phi\!\left(\frac{N}{g}\right).
    \]
    \textbf{Time Complexity:} $O(\sqrt{N/g})$.

    \item \textbf{Sum of numbers with a specific GCD with $N$:}  
    The sum of all numbers $i$ from $1$ to $N$ such that $\gcd(i, N) = g$ is
    \begin{align*}
    \sum_{\substack{1 \le i \le N \\ \gcd(i, N) = g}} i
    = \frac{N \cdot \phi(N/g)}{2}.
    \end{align*}
    \textbf{Time Complexity:} $O(\sqrt{N/g})$.

    \item \textbf{Sum of GCDs with $N$:}  
    \[
    \sum_{i=1}^{N} \gcd(i, N) = \sum_{d|N} d \cdot \phi\!\left(\frac{N}{d}\right),
    \]
    where the sum is over all divisors $d$ of $N$.  
    \textbf{Time Complexity:} $O(\sqrt{N})$ to enumerate divisors and compute $\phi$.

    \item \textbf{Sum of LCM with $N$:}  
    The sum of least common multiples of $i$ and $N$ for all $i$ from $1$ to $N$ is
    \begin{align*}
    \sum_{i=1}^{N} \operatorname{lcm}(i, N) 
    = N \cdot \sum_{d \mid N} d \cdot \phi(d).
    \end{align*}
    \textbf{Time Complexity:} $O(\sqrt{N})$ to enumerate divisors and compute $\phi$.
\end{itemize}







\subsection{GCD and LCM}

\begin{itemize}
    \item \( \gcd(a, b) = \texttt{gcd}(a, b - a) \)  


    \item \( \text{lcm}(a, b) = \dfrac{a \cdot b}{\gcd(a, b)} \)  
    \textit{Use: Finds the smallest common multiple, useful in periodic pattern problems.}

    \item $\gcd(a_i+b,\; a_{i+1}+b,\; a_{i+2}+b)
      = \gcd(a_i+b,\; a_{i+1}-a_i,\; a_{i+2}-a_i)$
    \textit{Adding a constant preserves GCD of differences.}
\end{itemize}







\section{Modular Arithmetic}

\subsection{Modular Arithmetic Rules}
For any integers \( a \), \( b \), and a modulus \( m \),:
\vspace{-0.5em}
\begin{align*}
(a + b)\ \%\ m &= ((a\ \%\  m) + (b\ \%\  m))\ \%\  m \\
(a - b)\ \%\  m &= ((a\ \%\  m) - (b\ \%\  m) + m)\ \%\   m \\
(a \cdot b)\ \%\  m &= ((a \ \%\   m) \cdot (b \ \%\   m)) \ \%\   m \\
\end{align*}
\vspace{-2em}
\subsubsection{Modular Division}
\[
\frac{a}{b}\ \%\  m = (a \cdot b^{-1})\ \%\  m
\]
\textbf{Note:} The modular inverse \( b^{-1} \ \%\   m\) exists only if \( \gcd(b, m) = 1 \).  
To compute modular inverse use Fermat\'s theorem



\subsubsection{Fermat\'s Little Theorem: Prime check}
\[
b^{-1} \bmod m = b^{m-2} \bmod m
\]
if \(m\) is prime.


\subsubsection{Miller-Rabin Primality Test}
Write \( n - 1 = 2^s \cdot d \), where \( d \) is odd.
\begin{align*}
&a^{n-1} \equiv 1 \ \%\  n \\
\Rightarrow &a^{2^k.d} \equiv 1 \ \%\  n \\
\Rightarrow &a^{2^{k-1}.d} - 1\equiv 0 \ \%\  n \\
\Rightarrow &(a^{2^{k-1}.d} + 1)....(a^d + 1)(a^d - 1)\equiv 0 \ \%\  n \\
\end{align*}
\vspace{-1em}
Pick base \( a \in [2, n-2] \), then compute:
\[
x = a^d \bmod n
\]

If \( x \ne 1 \) and \( x \ne n - 1 \), repeat:
\[
x = x^2 \bmod n
\]
If \( x \ne n - 1 \) after all steps, then \( n \) is \textbf{composite}.





\subsection{Euler's Totient}
\vspace{-1.5em}

\begin{align*}
& \text{If } \gcd(x, m) = 1, \quad x^{\phi(m)} \equiv 1 \pmod{m} \\
& \text{If } \gcd(x, m) = 1, \quad x^n \equiv x^{n \bmod \phi(m)} \pmod{m}
\end{align*}





\subsection{Cayley's Formula}

Cayley's formula states that the number of labeled trees with $n$ vertices is:
\[
n^{n-2}
\]

\noindent
A \textbf{labeled tree} is an undirected tree where each vertex is uniquely labeled from $1$ to $n$.

\begin{itemize}
  \item For $n = 3$, total trees = $3^{3-2} = 3$
  \item For $n = 4$, total trees = $4^{4-2} = 16$
\end{itemize}



\section{Algorithms}
\subsection{Big Mod (Modular Exponentiation)}
\begin{lstlisting}[language=C++]
/**
 * Time Complexity: O(log b)
 * Computes (a^b) % m
 */
ll binPow(ll a, ll b, ll m) {
    if (b == 0) return 1;
    if (b == 1) return a % m;
    ll ans = binPow(a, b / 2, m);
    ans = (ans * ans) % m;
    if (b % 2 == 1) ans = (ans * a) % m;
    return ans;
}
\end{lstlisting}

\begin{lstlisting}[language=C++]
ll binPow(ll a, ll b) {
    ll ans = 1;
    while (b) {
        if (b & 1) ans = (ans * a) % mod;
        a = (a * a) % mod; 
        b >>= 1;
    }
    return ans;
}
\end{lstlisting}

\subsection{Big Mod with Big Multiplication}
\begin{lstlisting}[language=C++]
/**
 * Time Complexity: O(log b)
 * Computes (a^b) % m
 * Calculate(1e18^1e18) without uint
 * NOTE: USE BinMul and BinPow
 */
ll binMul(ll a, ll b, ll m)
{
   ll ans = 0;
   while (b)
   {
      if (b & 1)
      {
         ans = (ans + a) % m;
      }
      a = (a + a) % m;
      b >>= 1;
   }
   return ans % m;
}
\end{lstlisting}

\subsection{Modular Inverse}
\begin{lstlisting}[language=C++]
/**
 * Time Complexity: O(log m)
 * assuming m is prime using Fermat's Little Theorem.
 * inv(a) = a^(m-2) % m
 */
ll inv(ll a, ll m) {
    return binPow(a, m - 2, m) % m;
}
\end{lstlisting}


\subsection{Extended Euclidean Algorithm}

\begin{lstlisting}[language=C++]
/**
 * Time Complexity: O(log(min(a, b)))
 * Computes gcd of a and b, and finds x, y such that: ax + by = gcd(a, b)
 * Useful to find modular inverse when gcd(a, m) = 1.
 */
ll gcdExtended(ll a, ll b, ll &x, ll &y) {
	if (!b) return x = 1, y = 0, a;
	ll d = gcdExtended(b, a % b, y, x);
	return y -= a/b * x, d;
}

void solve(){
    int x = 0, y = 0;
    int g = gcdExtended(a, m, x, y);
    if (g != 1) {
        // No modular inverse exists
    } else {
        x = (x % m + m) % m; // x is modular inverse of a mod m
    }
}

\end{lstlisting}

\textbf{Example:}  
Input: \(a = 35\), \(m = 15\) \\
Output: \(\gcd = 5\), \(x = 1\), \(y = -2\) \\
Verification: \(35 \times 1 + 15 \times (-2) = 5\)



\subsection{Sieve of Eratosthenes}
\begin{lstlisting}[language=C++]
/**
 * Computes primes up to N using sieve in O(N log log N).
 * Computes for each number:
 * - lowest prime factor (lp),
 * - highest prime factor (hp),
 */

const int N = 1e7 + 10; 
vector<bool> isPrime(N + 1, true);
vector<int> lp(N + 1, 0), hp(N + 1, 0);

void sieve() {
    isPrime[0] = isPrime[1] = false;
    iota(hp.begin(), hp.end(), 0);

    for (long long p = 2; p <= N; p++) {
        if (isPrime[p]) {
            lp[p] = hp[p] = p;

            for (int i = p * 2; i <= N; i += p) {
                isPrime[i] = false;
                hp[i] = p;
                if (lp[i] == 0) lp[i] = p;
            }
        }
    }
}
\end{lstlisting}

\subsection{Segmented Sieve}
\begin{lstlisting}[language=C++]
/**
 * Find primes in range [L, R] in O((R-L+1) * sqrt(R))
 */

vector<char> segmentedSieveNoPreGen(long long L, long long R) {
    vector<char> isPrime(R - L + 1, true);
    long long lim = sqrt(R);

    for (long long i = 2; i <= lim; ++i) {
        for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i) {
            isPrime[j - L] = false;
        }
    }

    if (L == 1) isPrime[0] = false;  // 1 is not prime

    return isPrime;
}
\end{lstlisting}





\subsection{Miller Rabin Prime check till 1e18}
\begin{lstlisting}[language=C++]
/**
 * Time Complexity: O(log n)
 * Do all the multiplcation using int128
 */
#define int64 uint64_t
#define int128 __uint128_t
bool miller(ll n){
    if (n < 4) return n > 1;
    if (n % 2 == 0) return false;

    ll nOdd = n - 1, cnt2 = 0;
    while (nOdd % 2 == 0){
        nOdd /= 2;
        cnt2++;
    }
    vector<ll> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23};

    for (auto &b : primes){
        if (b >= n) break;

        b = binPow(b, nOdd, n);
        if (b == 1 || b == n - 1){
            continue;
        }

        ll pow2 = cnt2;
        while (b != n - 1 && pow2){
            b = ((int128)b * b) % n;
            pow2--;
        }
        if (b != n - 1){
            return false;
        }
    }
    return true;
}
\end{lstlisting}

\subsection{Pollard rho Prime factorization}
\begin{lstlisting}[language=C++]
/**
 * Time Complexity: O(1e6log1e6)
 * Do all the multiplcation using int128
 * 1. First remove the prime divisor till 1e6. Now it can have only two prime divisor as multiplication of 3prime divisor greater than 1e6 will be greater than 1e18.
 * 2. Check it is 1.
 * 3. Check it is prime (Using miller Rabin).
 * 4. Check it is a square of a prime. 
 * 5. Use rho to get a prime divisor p1 than p2 = n/p1;
 */
 for (ll i = 2; i <= 1e6; i++){
        while (n % i == 0){
            n /= i;
        }
    }
    
#define int64 uint64_t
#define int128 __uint128_t
ll mult(ll a, ll b, ll mod){
    return (int128)a * b % mod;
}

ll f(ll x, ll c, ll mod){
    return ((int128)mult(x, x, mod) + c) % mod;
}

ll rho(ll n, ll x0 = 2, ll c = 1){
    ll x = x0;
    ll y = x0;
    ll g = 1;
    while (g == 1){
        x = f(x, c, n);
        y = f(y, c, n);
        y = f(y, c, n);
        g = gcd(abs(x - y), n);
    }
    return g;
}
\end{lstlisting}



\subsection{Euler\'s Totient Function (Phi Function)}

Euler\'s Totient function $\phi(n)$ counts the number of integers from $1$ to $n$ that are coprime with $n$.

\textbf{1. Computing $\phi(1)$ to $\phi(n)$ using a sieve-like method:}

\begin{lstlisting}[language=C++]
// Time: O(N log log N) 
void phi_1_to_n(int n) {
    vector<int> phi(n + 1);
    for (int i = 0; i <= n; i++)
        phi[i] = i;

    for (int i = 2; i <= n; i++) {
        if (phi[i] == i) {  
            for (int j = i; j <= n; j += i)
                phi[j] -= phi[j] / i; 
        }
    }
}
\end{lstlisting}

\paragraph{2. Computing $\phi(n)$ for a single number $n$ in $O(\sqrt{n})$:}

This method factorizes $n$ and applies the formula: 
\[
\phi(n) = n \times \prod_{p|n} \left(1 - \frac{1}{p}\right)
\]
where $p$ are the distinct prime factors of $n$.

\begin{lstlisting}[language=C++]
// Time: O(sqrt(n)) 
int phi(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;  // Remove contribution of prime factor i
        }
    }
    if (n > 1)
        result -= result / n;  // Remove contribution of last prime factor
    return result;
}
\end{lstlisting}





\subsection{Find Divisors \& Count (till N)}
\begin{lstlisting}[language=C++]
/**
 * Time Complexity: O(n log n)
 */
const int Max = 1e5 + 10;
long long divcnt[Max];          
vector<long long> divs[Max];   

void DivisorCount(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            divcnt[j]++;      
            divs[j].push_back(i);
        }
    }
}

/**
 * Usage example: DivisorCount(10);
 * divcnt[6] = 4, divs[6] = {1, 2, 3, 6}
 */
\end{lstlisting}


\subsection{Count divisor count of N in N^(1/3}

\begin{lstlisting}[language=C++]
// precomputed sieve to get bool prime and  squares of prime array

int countDivisors(int n)
{
    if (n == 1)
        return 1;

    bool prime[n + 1], primesquare[n * n + 1];
    int a[n];

    int ans = 1;

    // Counting powers of prime factors
    for (int i = 0;; i++) {
        if (a[i] * a[i] * a[i] > n)
            break;

        int cnt = 1;
        while (n % a[i] == 0){
            n /= a[i];
            cnt++;
        }

        ans *= cnt;
    }

    if (prime[n])  ans *= 2;
    else if (primesquare[n]) ans *= 3;
    else if (n != 1) ans *= 4;

    return ans;
}
\end{lstlisting}


\subsection{Count \& SumOfDivisors of N}
\begin{lstlisting}[language=C++]
/**
 * Calculates the count and sum of divisors of a number using its prime factorization.
 * Precompute hp using Sieve, and prime factors count 
 * Time complexity:  O(log n)
 */
\end{lstlisting}
\vspace{-0.8em}
\[
\text{If }n = P_1^{n_1} \times P_2^{n_2} \times \cdots \times P_k^{n_k} \quad \text{then,}
\]
\subsubsection{Count of divisors:}
\vspace{-1.2em}
\[
\text{count} = (n_1 + 1)(n_2 + 1) \cdots (n_k + 1)
\]

\subsubsection{Sum of divisors:}
\vspace{-1.2em}
\begin{align*}
    \begin{aligned}
    \text{sum} &= \prod_{i=1}^{k} \frac{P_i^{n_i+1} - 1}{P_i - 1}\\
    =& \left(1 + P_1 + P_1^2 + \cdots + P_1^{n_1}\right) \times \cdots \\ 
    &\times \left(1 + P_k + P_k^2 + \cdots + P_k^{n_k}\right)
\end{aligned}
\end{align*}


\small{\textbf{Example:} For \(36 = 2^2 \times 3^2\),
\vspace{-0.8em}
\[
\text{count} = (2+1)(2+1) = 9
\]
\vspace{-0.8em}
\[
\text{sum} = \frac{2^{3} - 1}{2 - 1} \times \frac{3^{3} - 1}{3 - 1} = 7 \times 13 = 91
\]
}

\subsection{Sum of Divisors from 1 to \(N\)}

\begin{lstlisting}[language=C++]
/**
 * Time Complexity: O(N)
 */
long long sumOfDivisors(long long N) {
    long long sum = 0;
    for (long long i = 1; i <= N; i++) {
        sum += i * (N / i);
    }
    return sum;
}
\end{lstlisting}
\vspace{-0.8em}
\small{
\textbf{Formula:}
\[
\text{SOD of all numbers from } 1 \text{ to } N = \sum_{i=1}^{N} i \cdot \left\lfloor \frac{N}{i} \right\rfloor
\]

\textbf{Explanation:}  
Every number \(i\) is a divisor of exactly \(\left\lfloor \frac{N}{i} \right\rfloor\) numbers between 1 and \(N\), so we add \(i \times \left\lfloor \frac{N}{i} \right\rfloor\) to the total sum.
\vspace{0.5em}
\textbf{Example:} For \(N = 2\),
\vspace{-1.2em}
\[
\text{Sum} = 1 \cdot \left\lfloor \frac{2}{1} \right\rfloor + 2 \cdot \left\lfloor \frac{2}{2} \right\rfloor = 1 \cdot 2 + 2 \cdot 1 = 4
\]
}

\subsection{Product of Divisors of \(N\)}
\small{
\textbf{Formula:}
\[
\text{POD of a number } N = N^{NumOfDivi/2} 
\]

\paragraph{Modular method:}

Let the product and number of divisors when only considering the first \( i \) prime
factors be \( P_i \) and \( C_i \) respectively. The answer will be \( P_N \).

\begin{equation}
P_i = P_{i - 1}^{k_i + 1} \left(x_i^{\frac{k_i(k_i + 1)}{2}} \right)^{C_{i - 1}}
\end{equation}

Again, we can calculate each \( P_i \) using fast exponentiation in
\(\mathcal{O}(N \log(\max(k_i)))\) time, but there's a catch! It might be tempting
to use \( C_{i - 1} \) from your previously-calculated values in part 1 of this
problem, but those values will yield wrong answers.

This is because \( a^b \not\equiv a^{b \bmod p} \pmod{p} \) in general. However, by
Fermat's Little Theorem, \( a^b \equiv a^{b \bmod (p - 1)} \pmod{p} \) for prime
\( p \), so we can just store \( C_i \) modulo \( 10^9 + 6 \) to calculate \( P_i \).



\subsection{Power of a Prime in \(n!\)}
\begin{lstlisting}[language=C++]
/**
 * Finds the exponent of a prime number p in the factorization of n! This counts how many times p divides n!
 * Time Complexity: O(log_p n)
 */

long long largestPower(long long n, long long p) {
    long long x = 0;
    while (n) {
        n /= p; x += n;
    }
    return x;
}
\end{lstlisting}

\vspace{0.5em}
\small{
\textbf{Formula:}
\[
e = \left\lfloor \frac{n}{p} \right\rfloor + \left\lfloor \frac{n}{p^2} \right\rfloor + \left\lfloor \frac{n}{p^3} \right\rfloor + \cdots
\]

\vspace{0.5em}
\textbf{Example:} Find the power of 5 in \(100!\)
\[
e = \left\lfloor \frac{100}{5} \right\rfloor + \left\lfloor \frac{100}{25} \right\rfloor + \left\lfloor \frac{100}{125} \right\rfloor
= 20 + 4 + 0 = 24
\]

\textbf{Answer:} The power of 5 in \(100!\) is \(\boxed{24}\).
}


\subsection{Gaussian Elimination}
\textbf{For Linear Systems:} 
Used when number of equations = number of unknowns. 
Convert the system to an augmented matrix, perform forward elimination and back substitution.  
\textbf{Example:} Solve $a + 3b + 2c = 5$ represented as $[1\ 3\ 2\ 5]$. 
Detect singularity for dependent or collinear equations.

\begin{lstlisting}[language=C++, caption={}]
// Time Complexity: O(N^3), 
// Space Complexity: O(N^2)

class GaussianElimination
{
private:
int N;
vector<vector<ld>> mat;

int forwardElim(){
    for (int k = 0; k < N; k++){
        int i_max = k;
        ld v_max = fabs(mat[k][k]);
        for (int i = k + 1; i < N; i++){
            if (fabs(mat[i][k] > v_max)){
                i_max = i, v_max = fabs(mat[i][k]);
            }
        }
        if (fabs(mat[i_max][k]) < 1e-12)
            return k;
        if (i_max != k){
            swap(mat[k], mat[i_max]);
        }
        for (int i = k + 1; i < N; i++){
            ld f = mat[i][k] / mat[k][k];
            for (int j = k; j <= N; j++){
                mat[i][j] -= f * mat[k][j];
            }
            mat[i][k] = 0;
        }
    }
    return -1;
}
vector<ld> backSub(){
    vector<ld> x(N);
    for (int i = N - 1; i >= 0; i--){
        x[i] = mat[i][N];
        for (int j = i + 1; j < N; j++){
            x[i] -= mat[i][j] * x[j];
        }
        x[i] /= mat[i][i];
    }
    return x;
}

public:
GaussianElimination(vector<vector<ld>> v){
    N = v.size();
    mat = v;
}
vector<ld> solve(){
    int singular_flag = forwardElim();
    if (singular_flag != -1){
        if (fabs(mat[singular_flag][N]) > 1e-12){
            cout << "Inconsistent\n";
        }
        else{
            cout << "Many solution\n";
        }
        return {};
    }
    return backSub();
}
};
\end{lstlisting}














\section{Graph Algorithm}

\subsection{Dijkstra's}
\begin{lstlisting}[language=C++]
/**
 * Time Complexity: O((n + m) log n)
 * Computes the shortest distance from a single source node to all others.
 * Requires non-negative edge weights.
 */

void dijkstra(int src) {
    vector<ll> dist(n + 1, 1e9);
    dist[src] = 0;

    // Min-heap: (distance, node)
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push({0, src});

    while (!pq.empty()) {
        auto [dis, u] = pq.top();
        pq.pop();

        if (dis != dist[u]) continue;

        for (auto [v, w] : G[u]) { // G[u] holds pairs (v, weight)
            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
}
\end{lstlisting}



\subsection{Floyd-Warshall}
\begin{lstlisting}[language=C++]
/**
 * Time Complexity: O(n^3)
 * It computes the shortest distance between every pair of nodes.
 * Works for positive and negative edge weights.
 * Does not work correctly if the graph contains a negative weight cycle.
 */
int n, m;
vector<vector<long long>> dist(n + 1, vector<long long>(n + 1, LLONG_MAX));

for (int via = 1; via <= n; via++) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (dist[i][via] != LLONG_MAX && dist[via][j] != LLONG_MAX) {
                dist[i][j] = min(dist[i][j], dist[i][via] + dist[via][j]);
            }
        }
    }
}
\end{lstlisting}


\subsection{Bellman-Ford}
\begin{lstlisting}[language=C++]
/**
 * Time Complexity: O(n * m)
 * Detects the shortest or longest path from a source node.
 * Can detect the presence of a positive or negative cycle.
 * This version returns -1 if there's a positive cycle on the way to the destination.
 */
int n, m, src;
vector<vector<pair<ll, ll>>> graph;
vector<ll> dist(n + 1, LLONG_MIN);

dist[src] = 0;

// Relax edges n times to detect positive cycle
for (int cnt = 1; cnt <= n; cnt++) {
    for (int u = 1; u <= n; u++) {
        for (auto [w, v] : graph[u]) {
            if (dist[u] != LLONG_MIN && dist[v] < dist[u] + w) {
                if (cnt == n) {
                    // Positive cycle detected
                    return {-1};
                }
                dist[v] = dist[u] + w;
            }
        }
    }
}
\end{lstlisting}


\subsection{Kruskal's for MST}
\begin{lstlisting}[language=C++]
/**
 * Time Complexity: O(E log E)
 */

const int Max = 100001;
struct Edge {
    int u, v, w;
} edges[Max];

int parent[Max], node, edge;

int Find_parent(int n) {
    if (parent[n] == n) return n;
    return Find_parent(parent[n]); 
}

int kruskal() {
    int sum = 0;
    for (int i = 1; i <= node; i++)
        parent[i] = i;

    for (int i = 1; i <= edge; i++) {
        int u = Find_parent(edges[i].u);
        int v = Find_parent(edges[i].v);

        if (u != v) {
            parent[u] = v;
            sum += edges[i].w;
        }
    }
    return sum;
}

int main() {
    cin >> node;
    edge = 0;
    while (true) {
        int u, v, w;
        if (!(cin >> u >> v >> w)) break;  // Read until EOF or input ends
        edges[++edge] = {u, v, w};
    }

    // For Minimum Spanning Tree
    sort(edges + 1, edges + edge + 1, [](Edge a, Edge b) { return a.w < b.w; });
    cout << kruskal() << "\n";

    // For Maximum Spanning Tree
    sort(edges + 1, edges + edge + 1, [](Edge a, Edge b) { return a.w > b.w; });
    cout << kruskal() << "\n";

    return 0;
}
\end{lstlisting}


\subsection{Prim's for (MST)}
\begin{lstlisting}[language=C++]
/**
 * Time Complexity: O(m log n)
 */

const int Max = 1e5 + 10;
bool visited[Max];
vector<pair<long long, int>> G[Max];

long long prim(int src) {
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> pq;
    long long mst_weight = 0;

    pq.push({0, src});

    while (!pq.empty()) {
        auto [weight, u] = pq.top();
        pq.pop();

        if (visited[u]) continue;

        visited[u] = true;
        mst_weight += weight;

        for (auto [w, v] : G[u]) {
            if (!visited[v]) {
                pq.push({w, v});
            }
        }
    }

    return mst_weight;
}

\end{lstlisting}


\subsection{SCC using Kosaraju\'s Algo}
\begin{lstlisting}[language=C++]
/**
 * Time Complexity: O(n + m)
 * Finds SCCs in a directed graph.
 * First DFS on original graph to get finish order.
 * Second DFS on reversed graph to identify components.
 */

int n; 
vector<vector<int>> adj, adj_rev;
vector<bool> used;
vector<int> order, component;

void dfs1(int v) {
    used[v] = true;
    for (int u : adj[v]) {
        if (!used[u])   dfs1(u);
    }
    order.push_back(v);
}

void dfs2(int v) {
    used[v] = true;
    component.push_back(v);
    for (int u : adj_rev[v]) {
        if (!used[u])   dfs2(u);
    }
}

void findSCC() {
    used.assign(n, false);
    order.clear();
    // Run dfs1 on all nodes
    for (int v = 0; v < n; v++) {
        if (!used[v]) dfs1(v);
    }

    used.assign(n, false);
    vector<int> roots(n);
    vector<int> root_nodes;
    vector<vector<int>> adj_scc(n);

    for (int i = (int)order.size() - 1; i >= 0; i--) {
        int v = order[i];
        if (!used[v]) {
            component.clear();
            dfs2(v);

            int root = component.front();
            for (int u : component) {
                roots[u] = root;
            }
            root_nodes.push_back(root);
        }
    }

    // Build condensed graph of SCCs
    for (int v = 0; v < n; v++) {
        for (int u : adj[v]) {
            int root_v = roots[v];
            int root_u = roots[u];
            if (root_u != root_v) {
                adj_scc[root_v].push_back(root_u);
            }
        }
    }
}
\end{lstlisting}


\subsection{Disjoint Set Union (DSU)}
\begin{lstlisting}[language=C++]
/**
 * Time Complexity: O(log n)
 Average: Amortized O(alpha(n)), per operation (almost constant <= 4)
 * Union by rank for optimization.
 */

class DSU {
public:
    vector<int> rank, parent;

    DSU(int n) {
        rank.assign(n, 0);
        parent.assign(n, 0);
        iota(parent.begin(), parent.end(), 0); // parent[i] = i
    }

    int findParent(int i) {
        if (parent[i] == i) 
            return i;
        return parent[i] = findParent(parent[i]);
    }

    void JointSet(int i, int j) {
        int u = findParent(i);
        int v = findParent(j);
        if (u == v) return; // Already in the same set

        if (rank[u] > rank[v]) 
            parent[v] = u;
        else {
            parent[u] = v;
            if (rank[u] == rank[v]) 
                rank[v]++;
        }
    }
};
\end{lstlisting}

\subsection{Rollback Disjoint Set Union (RollbackDSU)}
\begin{lstlisting}[language=C++]
/**
 * Time Complexity: O(log n)
 * Average: Amortized O(alpha(n)), per operation (almost constant <= 4)
 * Supports rollback to previous states.
 */

struct RollbackDSU {
    vector<int> ps; 
    vector<pair<int, int>> st;
    // negative for parent itself with size 1..

    RollbackDSU(int n) : ps(n, -1) {}

    bool sameSet(int a, int b) {
        return Find(a) == Find(b);
    }

    int Find(int x) { 
        return ps[x] < 0 ? x : Find(ps[x]); 
    }

    bool Union(int a, int b) {
        a = Find(a), b = Find(b);
        if (a == b) return false;
        if (ps[a] > ps[b]) swap(a, b);
        st.push_back({a, ps[a]}); // for rollback
        st.push_back({b, ps[b]}); // for rollback
        ps[a] += ps[b]; 
        ps[b] = a;
        return true;
    }

    int getSize(int x) { 
        return -ps[Find(x)]; 
    }

    // Use only for rollback
    int time() { 
        return st.size(); 
    }

    void rollback(int t) {
        for (int i = time(); i-- > t;)
            ps[st[i].first] = st[i].second;
        st.resize(t);
    }
};
\end{lstlisting}

\subsection{Binary Lifting for LCA}
\begin{lstlisting}[language=C++]
/**
 * Time Complexity:
 *  - Preprocessing (DFS + Table build): O(N log N)
 *  - Query (LCA): O(log N)
 * Assumes 1-based indexing of nodes.
 */

class LCA {
public:
    int N, logN;
    vector<vector<int>> graph, tbl;
    vector<int> lev;

    LCA(int n, vector<vector<int>> &v) {
        N = n;
        logN = ceil(log2(n));
        graph = v;
        tbl.assign(logN + 1, vector<int>(n + 1, -1));
        lev.assign(n + 1, 0);
        dfs(1, -1);
    }

    void dfs(int cur, int par) {
        tbl[0][cur] = par;
        for (int i = 1; i <= logN; i++) {
            if (tbl[i - 1][cur] != -1) {
                tbl[i][cur] = tbl[i - 1][tbl[i - 1][cur]];
            }
        }

        for (auto child : graph[cur]) {
            if (child != par) {
                lev[child] = lev[cur] + 1;
                dfs(child, cur);
            }
        }
    }

    int getKthPar(int cur, int k) {
        for (int i = logN; i >= 0; i--) {
            if (cur == -1) break;
            if (k & (1 << i)) {
                cur = tbl[i][cur];
            }
        }
        return cur;
    }

    int getLCA(int u, int v) {
        if (lev[u] > lev[v]) {
            u = getKthPar(u, lev[u] - lev[v]);
        } else if (lev[v] > lev[u]) {
            v = getKthPar(v, lev[v] - lev[u]);
        }

        if (u == v) return u;

        for (int i = logN; i >= 0; i--) {
            if (tbl[i][u] != -1 && tbl[i][u] != tbl[i][v]) {
                u = tbl[i][u];
                v = tbl[i][v];
            }
        }
        return tbl[0][u];
    }
};
\end{lstlisting}






\subsection{Heavy-Light Decomposition (Edge Weight)}
\begin{lstlisting}[language=C++]
/**
 * Time Complexity:
 *  - Preprocessing : O(N)
 *  - Query/Update : O(log N)
 * Use: Tree (Range Max Query)
 - max/min value on the path (u and v)
 - Sum of values on the path
 - Count of values in a range
 - K-th largest on a path (with persistent tree)
 - XOR of weights between two nodes
 */
class segTree { // also can use recursive, mxN <= 1e4...
    vector<int> sg;
public:
    segTree(int n) : sg(4 * n + 1) {}
    void upd(int i, int val, int n) {
        // iterative code
    }
    int qry(int lb, int rb, int n) {
        // iterative code
    }
};

class HeavyLight {
    vector<vector<int>> g;
    vector<int> u, v, depth, parents, heavy, root, start, weigth;
    int timer;
public:
    HeavyLight(int n, vector<vector<int>> &graph, vector<int> &_u, vector<int> &_v, vector<int> &cost, segTree &t) {
        g = graph;
        u = _u; v = _v;
        weigth.resize(n + 1, 0); depth.resize(n + 1, 0);
        parents.resize(n + 1, 0); heavy.resize(n + 1, 0);
        root.resize(n + 1, 0); start.resize(n + 1, 0);
        timer = 0;

        dfs(1, 0);
        decompose(1, 0, 1);

        for (int i = 1; i < n; ++i) {
            int x = u[i];
            int y = v[i];
            if (parents[x] == y)
                weigth[x] = cost[i];
            else
                weigth[y] = cost[i];
        }
        for (int i = 1; i <= n; ++i) {
            t.upd(start[i], weigth[i], n);
        }
    }

    int dfs(int node, int par) {
        int subTree = 1, maxChildSize = 0;
        depth[node] = depth[par] + 1;
        parents[node] = par;

        for (auto &child : g[node]) {
            if (child ^ par) {
                int childSize = dfs(child, node);
                subTree += childSize;
                if (childSize > maxChildSize) {
                    maxChildSize = childSize;
                    heavy[node] = child;
                }
            }
        }
        return subTree;
    }

    void decompose(int node, int par, int top) {
        root[node] = top;
        start[node] = timer++;
        if (heavy[node])
            decompose(heavy[node], node, top);
        for (auto &child : g[node]) {
            if (child != par && child != heavy[node]) {
                decompose(child, node, child);
            }
        }
    }

    int getMax(int a, int b, int n, segTree &t) {
        int ans = 0;
        while (root[a] ^ root[b]) {
            if (depth[root[a]] < depth[root[b]])
                swap(a, b);
            ans = max(ans, t.qry(start[root[a]], start[a], n));
            a = parents[root[a]];
        }
        if (depth[a] > depth[b]) swap(a, b);
        if (a != b) {
            // start[a]+1 = (exclude LCA for Edge Weight)...
            ans = max(ans, t.qry(start[a] + 1, start[b], n));
        }
        return ans;
    }

    void upd(int indx, int val, int n, segTree &t) {
        int x = u[indx];
        int y = v[indx];
        if (parents[x] == y)
            indx = start[x];
        else
            indx = start[y];
        t.upd(indx, val, n);
    }
};

void Solve() {
    int n;
    cin >> n;
    vector<int> u(n + 1), v(n + 1), cost(n + 1);
    vector<vector<int>> g(n + 1);
    for (int i = 1; i < n; ++i) {
        cin >> u[i] >> v[i] >> cost[i];
        int x = u[i]; int y = v[i];
        g[x].push_back({y});
        g[y].push_back({x});
    }

    segTree t(n);
    HeavyLight hld(n, g, u, v, cost, t);

    while (q--) {
        hld.getMax(L, R, n, t);
        hld.upd(indx, val, n, t);
    }
}
\end{lstlisting}











% For node based query:
% \subsection{Heavy-Light Decomposition (HLD)}
% \begin{lstlisting}[language=C++]
% /**
%  * Time Complexity:
%  *  - Preprocessing : O(N)
%  *  - Query/ Update : O(log N)
%  * Use: Tree (Range Max Query)
%  */
% class HLD {
%     int n, cur_pos;
%     vector<vector<int>> g;
%     vector<int> parent, depth, heavy, head, pos, base, val;
%     vector<int> seg;

%     int dfs(int u) {
%         int size = 1, max_sub = 0;
%         for (int v : g[u]) {
%             if (v != parent[u]) {
%                 parent[v] = u;
%                 depth[v] = depth[u] + 1;
%                 int sz = dfs(v);
%                 size += sz;
%                 if (sz > max_sub) {
%                     max_sub = sz;
%                     heavy[u] = v;
%                 }
%             }
%         }
%         return size;
%     }

%     void decompose(int u, int h) {
%         head[u] = h;
%         pos[u] = cur_pos;
%         base[cur_pos++] = val[u];
%         if (heavy[u] != -1)
%             decompose(heavy[u], h);
%         for (int v : g[u]) {
%             if (v != parent[u] && v != heavy[u])
%                 decompose(v, v);
%         }
%     }

%     void build(int idx, int l, int r) {
%         if (l == r) {
%             seg[idx] = base[l];
%             return;
%         }
%         int mid = (l + r) / 2;
%         build(idx*2, l, mid);
%         build(idx*2+1, mid+1, r);
%         seg[idx] = max(seg[idx*2], seg[idx*2+1]);
%     }

%     void updateSeg(int idx, int l, int r, int p, int x) {
%         if (l == r) {
%             seg[idx] = x;
%             return;
%         }
%         int mid = (l + r) / 2;
%         if (p <= mid) updateSeg(idx*2, l, mid, p, x);
%         else updateSeg(idx*2+1, mid+1, r, p, x);
%         seg[idx] = max(seg[idx*2], seg[idx*2+1]);
%     }

%     int querySeg(int idx, int l, int r, int L, int R) {
%         if (R < l || r < L) return INT_MIN;
%         if (L <= l && r <= R) return seg[idx];
%         int mid = (l + r) / 2;
%         return max(querySeg(idx*2, l, mid, L, R),
%                    querySeg(idx*2+1, mid+1, r, L, R));
%     }

% public:
%     HLD(int size, vector<int> values, vector<vector<int>> &graph) {
%         n = size;
%         val = values;
%         g = graph;
%         parent.assign(n, -1);
%         depth.assign(n, 0);
%         heavy.assign(n, -1);
%         head.assign(n, 0);
%         pos.assign(n, 0);
%         base.assign(n, 0);
%         seg.assign(4*n, INT_MIN);

%         cur_pos = 0;
%         dfs(0);
%         decompose(0, 0);
%         build(1, 0, n-1);
%     }

%     void update(int u, int x) {
%         updateSeg(1, 0, n-1, pos[u], x);
%     }

%     int query(int u, int v) {
%         int res = INT_MIN;
%         while (head[u] != head[v]) {
%             if (depth[head[u]] < depth[head[v]]) swap(u, v);
%             res = max(res, querySeg(1, 0, n-1, pos[head[u]], pos[u]));
%             u = parent[head[u]];
%         }
%         if (depth[u] > depth[v]) swap(u, v);
%         res = max(res, querySeg(1, 0, n-1, pos[u], pos[v]));
%         return res;
%     }
% };

% HLD hld(n, values, edges);
% hld.query(u,v);
% hld.update(u,x);
% \end{lstlisting}











\subsection{Centroid Decomposition}
\begin{lstlisting}[language=C++]
/**
 * Time Complexity:
 *  - Preprocessing (dfs + decomposition): O(N log N)
 *  - Each centroid level recurses on at most half the subtree.
 * Use: Centroid Decomposition on Tree (for divide & conquer on trees)
 */
const int mxN = 1e5 + 9;
vector<int> g[mxN], subTree(mxN, 0);
vector<bool> vis(mxN, 0);

void dfs(int node, int par) {
    subTree[node] = 1;
    for (auto &child : g[node]) {
        if (!vis[child] && child != par) {
            dfs(child, node);
            subTree[node] += subTree[child];
        }
    }
}

int getCentroid(int node, int par, int n) {
    for (auto &child : g[node]) {
        if (child != par && !vis[child] && subTree[child] * 2 > n) {
            return getCentroid(child, node, n);
        }
    }
    return node;
}

void makeResult(int node, int n, vector<int> &ans, int curr_char) {
    dfs(node, 0);
    int centroid = getCentroid(node, 0, subTree[node]);
    vis[centroid] = 1;
    ans[centroid] = curr_char;

    for (auto &child : g[centroid]) {
        if (!vis[child]) {
            makeResult(child, subTree[child], ans, curr_char + 1);
        }
    }
}

void solve() {
    int n;
    cin >> n;

    for (int i = 1; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    vector<int> ans(n + 1);
    makeResult(1, n, ans, 1);

    for (int i = 1; i <= n; ++i) {
        cout << char(ans[i] - 1 + 'A') << " ";
    }
}
\end{lstlisting}









% Data Structure
\section{Data Structure}
\subsection{Binary Indexed Tree (Fenwick Tree)}
\begin{lstlisting}[language=C++]
/**
 * Time Complexity:
 *  - Build: O(n log n)
 *  - Update: O(log n) (If reverse operation exists)
 *  - Query (prefix sum): O(log n)
 * Supports point updates and prefix sum queries.
*/
vector<int> bit, v;
int n;

void update(int i, int val) {
    while (i <= n) {// 1'based
        bit[i] += val;
        i += (i & (-i));
    }
}
ll sum(int i) {
    ll ans = 0;
    while (i) {
        ans += bit[i];
        i -= (i & (-i));
    }
    return ans;
}
ll getSum(int L, int R) {// 1'based
    return sum(R) - sum(L-1);
}
// bit.assign(n + 1, 0);
\end{lstlisting}
\subsection{2D Fenwick Tree}
\begin{lstlisting}[language=C++]
/**
 * Time Complexity:
 *  - Build: O(n log n log n)
 *  - Update: O(log n  log n)
 *  - Query (prefix sum): O(log n  log n)
 */

vector<vector<ll>> input;
vector<vector<ll>> Bits;
ll n, m, q;

void build(ll idxI, ll idxJ, ll val){
    for(int row = idxI; row <= n; row += (row & (-row))){
        int col = idxJ;
        while(col<=m){
            Bits[row][col] += val;
            col += (col & (-col));
        }
    }
}
void FirstCall(ll n, ll m) {
    Bits.assign(2*n+1, vector<ll>(2*m+1,0)); 
}

void update(ll i, ll j, ll val) {
    build(i, j, val);
}

ll getAns(ll idxI, ll idxJ){
    ll ans = 0;
    for(int col = idxJ; col > 0; col -= (col & (-col))){
        ll row = idxI;
        while(row > 0){    
            ans += Bits[row][col];
            row -= (row & (-row));
        }
    }
    return ans;
}
ll sumRange(ll a, ll b, ll x, ll y) {
    ll upperRight = getAns(a-1, y);
    ll lowerLeft = getAns(x, b-1);
    ll downRight = getAns(x, y);
    ll upperCorner = getAns(a-1, b-1);
    return downRight+upperCorner-lowerLeft-upperRight;
}
\end{lstlisting}

\subsection{Sparse Table}
\begin{lstlisting}[language=C++]
/**
 * Time Complexity:
 *  - Build: O(n log n)
 *  - Query: O(1) for RMQ
 * 
 * Supports static range man, max, gcd queries on an immutable array.
 * Uses 1-based indexing internally for convenience.
 */

class maxTable {
public:
    int N, logN;     
    vector<vector<int>> tbl; 
    vector<int> v; 

    maxTable(int n, const vector<int>& v2) {
        N = n;
        logN = (int)log2(n);
        v.assign(n + 1, 0);
        for (int i = 0; i < n; i++) {
            v[i + 1] = v2[i]; // 1-based index
        }
        build();
    }

    void build() {
        tbl.assign(logN + 1, vector<int>(N + 1, 0));
        for (int i = 1; i <= N; i++) {
            tbl[0][i] = v[i];
        }
        for (int k = 1; k <= logN; k++) {
            int intervalLen = 1 << k;
            int halfLen = intervalLen >> 1;
            for (int i = 1; i + intervalLen - 1 <= N; i++) {
                tbl[k][i] = max(tbl[k - 1][i], tbl[k - 1][i + halfLen]);
            }
        }
    }
    
    int query(int l, int r) {
        l++; r++; // Convert to 1-based index
        int length = r - l + 1;
        int k = (int)log2(length);
        int intervalLen = 1 << k;
        return max(tbl[k][l], tbl[k][r - intervalLen + 1]);
    }
    ing sumQuery(int l, int r){
        l++, r++;
        int sum = 0;
        for (int i = K; i >= 0; i--) {
            if ((1 << i) <= R - L + 1) {
                sum += st[i][L];
                L += 1 << i;
            }
        }
        return sum;
    }
};
\end{lstlisting}


\subsection{Mo\'s Algorithm}
\begin{lstlisting}[language=C++]
/**
 * Time Complexity:
 *  - Build: O(n sqrt (q))
 * Supports offline query.
 */
class MoAlgorithm {
public:
    static int sqrtN;
    int n, q, distinct;
    vector<int> a, ans;
    vector<int> freq;
    struct Query {
        int l, r, idx;
        bool operator<(const Query &other) const {
            if (l / sqrtN != other.l / sqrtN)
                return l / sqrtN < other.l / sqrtN;
            return ((l / sqrtN) & 1) ? r > other.r : r < other.r;
        }
    };

    vector<Query> queries;

    void add(int pos) {
        if (++freq[a[pos]] == 1)
            distinct++;
    }

    void remove(int pos) {
        if (--freq[a[pos]] == 0)
            distinct--;
    }

    MoAlgorithm(const vector<int> &input, int query_count) {
        a = input;
        n = a.size();
        q = query_count;
        sqrtN = sqrt(n) + 1;
        freq.assign(n, 0);
        ans.assign(q, 0);
    }

    void addQuery(int l, int r, int idx) {
        queries.push_back({l, r, idx});
    }

    vector<int> process() {
        sort(queries.begin(), queries.end());

        int currL = 0, currR = -1;
        distinct = 0;
        for (auto &query : queries) {
            while (currL > query.l) add(--currL);
            while (currR < query.r) add(++currR);
            while (currL < query.l) remove(currL++);
            while (currR > query.r) remove(currR--);
            ans[query.idx] = distinct;
        }

        return ans;
    }
};
int MoAlgorithm::sqrtN; // static member
\end{lstlisting}





\subsection{Segment Tree (Iterative)}
\begin{lstlisting}[language=C++]
/**
 * Time Complexity:
 *  - Build: O(N)
 *  - Update + query: O(logN)
 * Can use for min/max/xor etc.
 */

class segTree { 
    vector<int> sg;
public:
    segTree(int n) : sg(4 * n + 1) {}

    void upd(int i, int val, int n) {
        // sg[i += n] = val;
        i += n; sg[i] = val; i /= 2;
        while (i) {
            sg[i] = max(sg[2*i], sg[2*i+1]);
            i /= 2;
        }
    }

    int qry(int lb, int rb, int n) {
        lb += n, rb += n+1;
        int max_a = 0, max_b = 0;
        while (lb < rb) {
            if (lb & 1)
                max_a = max(max_a, sg[lb++]);
            if (rb & 1)
                max_b = max(max_b, sg[--rb]);
            lb /= 2, rb /= 2;
        }
        return max(max_a, max_b);
    }
};
\end{lstlisting}





\subsection{Lazy Segment Tree (Range Updates + Queries)}
\begin{lstlisting}[language=C++]
/**
 * Time Complexity:
 *  - Build: O(n)
 *  - Update (range): O(log n)
 *  - Query (range): O(log n)
 * Uses 1-based indexing for input and segment tree.
 */

struct LazySegTree{
    ll tree[4000005]; 
    ll lazy[4000005];
    
    inline void merge(int id){
        tree[id] = tree[id << 1] + tree[id << 1 | 1];
    }

    inline void apply(int id, int l, int r, ll val){
        tree[id] += (r - l + 1) * val;
        lazy[id] += val;
    }

    inline void push(int id, int l, int r){
        if (!lazy[id]) return;
        int mid = (l + r) >> 1;
        apply(id << 1, l, mid, lazy[id]);
        apply(id << 1 | 1, mid + 1, r, lazy[id]);
        lazy[id] = 0;
    }

    void build(int id, int l, int r, const vector<ll> &data){
        if (l == r){
            tree[id] = data[l];
            return;
        }
        int mid = (l + r) >> 1;
        build(id << 1, l, mid, data);
        build(id << 1 | 1, mid + 1, r, data);
        merge(id);
    }

    // Range update [a, b] += val
    void update(int id, int l, int r, int a, int b, ll val) {
        if (b < l || a > r) return;
        if (a <= l && r <= b){
            apply(id, l, r, val);
            return;
        }
        push(id, l, r);
        int mid = (l + r) >> 1;
        update(id << 1, l, mid, a, b, val);
        update(id << 1 | 1, mid + 1, r, a, b, val);
        merge(id);
    }

    // Range query [a, b]
    ll query(int id, int l, int r, int a, int b){
        if (b < l || a > r) return 0;
        if (a <= l && r <= b) return tree[id];
        push(id, l, r);
        int mid = (l + r) >> 1;
        return query(id << 1, l, mid, a, b) + query(id << 1 | 1, mid + 1, r, a, b);
    }
};
// Example
void solve() {
    vector<ll> input(n + 1);  
    LazySegTree seg;
    seg.build(1, 1, n, arr);
    seg.update(1, 1, n, l, r, val);
    seg.query(1, 1, n, l, r);
}
// -------Can be used constructor---
int tree[4000005][2], lazyState[4000005];
LazySegTree(int n, vector<int> &v){
    memset(tree, 0, sizeof(tree));
    memset(lazyState, 0, sizeof(lazyState));
    build(1, 1, n, v);
}
\end{lstlisting}




\subsection{Persistent Segment Tree}

\begin{lstlisting}[language=C++, numbers=left]
/*
Features:
- O(log N) per update/query
- Supports versioning (old versions remain)
- Suitable for range k-th queries, frequency, prefix sums, etc.

Usage Example:
    PST pst(n); // n = number of distinct values after compression
    for (int i = 1; i <= n; i++)
        pst.roots[i] = pst.update(pst.roots[i - 1], 1, n, getId(arr[i]));

    int ans = pst.query(pst.roots[L - 1], pst.roots[R], 1, n, k);
───────────────────────────────────────────────
*/
struct PST {
    static const int MAXN = 200000 * 20; // 20×n for safe memory limit
    int L[MAXN], R[MAXN], val[MAXN];     // child pointers & stored value
    int root[200005];                    // store roots of versions
    int tot = 0;                         // total nodes created

    PST() { tot = 0; }

    // Create a new version by updating index `pos`
    int update(int prev, int l, int r, int pos, int add = 1) {
        int curr = ++tot;                // create new node
        L[curr] = L[prev];
        R[curr] = R[prev];
        val[curr] = val[prev] + add;     // store merged value

        if (l == r) return curr;
        int m = (l + r) >> 1;
        if (pos <= m)
            L[curr] = update(L[prev], l, m, pos, add);
        else
            R[curr] = update(R[prev], m + 1, r, pos, add);
        return curr;
    }

    // Example: find k-th smallest in range (for freq-type PST)
    int kth(int u, int v, int l, int r, int k) {
        if (l == r) return l;
        int cntLeft = val[L[v]] - val[L[u]];
        int m = (l + r) >> 1;
        if (k <= cntLeft)
            return kth(L[u], L[v], l, m, k);
        else
            return kth(R[u], R[v], m + 1, r, k - cntLeft);
    }

    // Range sum between versions (general purpose query)
    int rangeSum(int u, int v, int l, int r, int ql, int qr) {
        if (qr < l || ql > r) return 0;
        if (ql <= l && r <= qr) return val[v] - val[u];
        int m = (l + r) >> 1;
        return rangeSum(L[u], L[v], l, m, ql, qr) +
               rangeSum(R[u], R[v], m + 1, r, ql, qr);
    }
};
\end{lstlisting}


%Dynamic Programming
\section{Dynamic Programming}

\subsection{Longest Increasing Subsequence}
\begin{itemize}[left=0pt, itemsep=0pt]
  \item \textbf{Time Complexity:} \(O(n \log n)\)
  \item \textbf{Space Complexity:} \(O(n)\)
\end{itemize}

\begin{lstlisting}[language=C++]
\\ Time Complexity: O(n log n)
void solve(){
    ll n;
    cin >> n;
    ll arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    vector<ll> v;
    v.push_back(arr[0]);

    for(int i = 1; i < n; i++){
        if(arr[i] > v.back())
            v.push_back(arr[i]);
        else {
            int ind = lower_bound(v.begin(), v.end(), arr[i]) - v.begin();
            v[ind] = arr[i];
        }
    }
    cout << v.size() << endl;
}
\end{lstlisting}

\subsection{Longest Common Subsequence}
\begin{itemize}[left=0pt, itemsep=0pt]
  \item \textbf{Time Complexity:} $O(m \times n)$
  \item \textbf{Space Complexity:} $O(m \times n)$
\end{itemize}
\begin{lstlisting}[language=C++]
int lcs(string X, string Y, int m, int n) {
    int L[m + 1][n + 1];
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                L[i][j] = 0;
            else if (X[i - 1] == Y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;
            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }
    return L[m][n]; //length
}
\end{lstlisting}



\section{String Algorithm}
\subsection{KMP String Matching}
\begin{lstlisting}[language=C++]
\\ Time Complexity: O(N + M)
class KMP {
public:
    int M;
    vector<int> lps;
    string pat;

    KMP(string &s) {
        M = s.size();
        pat = s;
        lps.assign(M, 0);
        computeLPSArray();
    }

    void computeLPSArray() {
        int len = 0, i = 1;
        while (i < M) {
            if (pat[i] == pat[len]) {
                len++;
                lps[i++] = len;
            } else {
                if (len != 0) len = lps[len - 1];
                else lps[i++] = 0;
            }
        }
    }

    void search(string &txt) {
        int N = txt.size(), i = 0, j = 0;
        while ((N - i) >= (M - j)) {
            if (pat[j] == txt[i]) { i++; j++; }
            if (j == M) {
                cout << i - j << endl;
                j = lps[j - 1];
            } else if (i < N && pat[j] != txt[i]) {
                if (j != 0) j = lps[j - 1];
                else i++;
            }
        }
    }
};

// Usage:
KMP kmp(pat);
kmp.search(txt);
\end{lstlisting}



 \subsection{Z-Function Algorithm}
\begin{lstlisting}[language=C++]
/**
 * Time Complexity: O(n + m)
 * Space Complexity: O(n + m)
 *
 * Uses:
 *  - Fast pattern matching (similar to KMP)
 *  - Finding repetitions and borders in strings
 */

vector<int> zFunction(const string &text, const string &p = ""){
    string s = p + '#' + text; // For pattern matching
    // string s = text; // For prefix matching
    
    int n = s.size();
    vector<int> z(n);
    int l = 0, r = 0;

    for (int i = 1; i < n; i++){
        if (i <= r)
            z[i] = min(r - i + 1, z[i - l]);
        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
            z[i]++;
        if (i + z[i] - 1 > r)
            l = i, r = i + z[i] - 1;
    }

    return z;
}
/*
Check for minimal period
for (int i = 1; i < n; i++) {
    if (z[i] == n - i && n % i == 0)
        return i;
}
*/
\end{lstlisting}





\subsection{Manacher's Algorithm}
Computes the length of the longest palindromic substring in linear time, $\mathcal{O}(n)$.  

\begin{lstlisting}[language=C++, label={lst:manacher}]
vector<int> manacher_odd(string s){
    int n = s.size();
    s = "$" + s + "^";
    vector<int> p(n + 2);
    int l = 0, r = 0;

    for (int i = 1; i <= n; i++){
        if (i < r)
            p[i] = min(r - i, p[l + (r - i)]);
        while (s[i - p[i]] == s[i + p[i]])   p[i]++;
        if (i + p[i] > r){
            l = i - p[i];
            r = i + p[i];
        }
    }
    return vector<int>(begin(p) + 1, end(p) - 1);
}

vector<int> manacher(string s){
    string t = "#";
    for (auto c : s){
        t += c;
        t += "#";
    }
    return manacher_odd(t);
}
\end{lstlisting}

\noindent
\textbf{Note:}  
Return radius of the longest palindrome centered at that position in the transformed string.  
Answer:
\[
L_{\text{max}} = \max(p_i) - 1
\]
where \( p_i \) denotes the palindrome radius at position \( i \).







\subsection{String Hashing}
\begin{lstlisting}[language=C++]
/**
 * Time Complexity:
 *  - Preprocessing: O(n)
 *  - Substring hash query: O(1)
 * Uses 1-based indexing for hashes.
 */


#include <random>
#include <chrono>
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

vector<int> primes = {
    1000003, 1000033, 1000037, 1000039, 1000081,
    1000099, 1000117, 1000121, 1000133, 1000151
};

void shuffleBase() {
    shuffle(primes.begin(), primes.end(), rng);
}

class Hashing {
public:
    int base, len;           
    const int Mod = 1e9 + 7; 
    vector<long long> pw, Hash;

    Hashing(string &str) {
        base = primes[0]; 
        len = (int)str.size();
        Hash.assign(len + 1, 0);
        pw.assign(len + 1, 0);        
        pw[0] = 1;
        for (int i = 1; i <= len; i++) {
            pw[i] = (pw[i - 1] * base) % Mod;
        }
        generateHash(str);
    }
    
    void generateHash(string &str) {
        long long hash_val = 0;
        for (int i = 0; i < len; i++) {
            hash_val = (hash_val * base + str[i]) % Mod;
            Hash[i + 1] = hash_val;
        }
    }

    // Get hash of substring [l, r] (1-based indexing)
    long long substringHash(int l, int r) {
        long long hash_val = Hash[r] - (Hash[l - 1] * pw[r - l + 1]) % Mod;
        if (hash_val < 0) hash_val += Mod;
        return hash_val;
    }

};
\end{lstlisting}
\small{
\textbf{Approaches:}

\begin{itemize}
  \item \textit{Distinct substrings} (\(O(n^2)\)): Insert \(\text{hash}(L,R)\) for all substrings into a set; answer = set size.
  \item \textit{Longest Common Prefix} (\(O(\log n)\)): Binary search \(R\) where \(s_1.\text{hash}[1..R] = s_2.\text{hash}[1..R]\).
  \item \textit{Lexicographically smaller} (\(O(\log n)\)): Use LCP to find \(R\), then check if \(s_1.\text{hash}[R+1] > s_2.\text{hash}[R+1]\).
\end{itemize}
}


\subsection{Dynamic String Hashing}
\begin{lstlisting}
#define ull unsigned long long
struct Hash {
    ull x;
    Hash(ull x = 0) : x(x) {};
    Hash operator+(Hash op) {
        return x + op.x + (x + op.x < x);
    }
    Hash operator-(Hash op) {
        return *this + ~op.x;
    }
    Hash operator*(Hash op) {
        auto m = (__uint128_t) x * op.x;
        return Hash((ull) m) + (ull) (m >> 64);
    }
    ull get() const {
        return x + !~x;
    }
    bool operator==(Hash op) {
        return get() == op.get();
    }
    friend ostream& operator<<(ostream& out, Hash &op) {
        return out << op.x;
    }
};

static const Hash prime = (ll) 1e11 + 3;

class dynamicHash {
    vector<Hash> pw, hsh, tree;
    int n;
public:
    dynamicHash(string &s) {
        this->n = s.size();
        hsh.resize(n + 1); pw = hsh;
        tree.resize(4 * n + 1);

        pw[0] = 1;
        for (int i = 1; i <= n; ++i) {
            pw[i] = pw[i - 1] * prime;
        }
        for (int i = 1; i <= n; ++i) {
            update(i, s[i - 1]);
        }
    }

    void update(int idx, char val, int s, int e, int node = 1) {
        if (s == e) tree[node] = val;
        else {
            int mid = (s + e) / 2;
            if (idx <= mid)
                update(idx, val, s, mid, 2 * node);
            else
                update(idx, val, mid + 1, e, 2 * node + 1);
            tree[node] = tree[2 * node] * pw[e - mid] + tree[2 * node + 1];
        }
    }

    void update(int idx, char val) {
        update(idx, val, 1, n);
    }

    pair<Hash, int> query(int lb, int rb, int s, int e, int i = 1) {
        if (s > rb || e < lb) return {0, 0};
        if (s >= lb && e <= rb) return {tree[i], e - s + 1};
        int mid = (s + e) / 2;
        auto left = query(lb, rb, s, mid, 2 * i);
        auto right = query(lb, rb, mid + 1, e, 2 * i + 1);
        int k = right.second;
        Hash ans = left.first * pw[k] + right.first;
        int len = left.second + right.second;
        return {ans, len};
    }
    Hash query(int a, int b) {
        return query(a, b, 1, n).first;
    }
};
\end{lstlisting}
    
% \begin{lstlisting}[language=C++]
% /**
%  * Time Complexity:
%  *  - Build: O(n)
%  *  - Update: O(log n)
%  *  - Query (substring hash): O(log n)
%  * Uses 1-based indexing for segment tree and hashing.
%  * Supports double hashing for collision reduction.
%  */
% struct dynamicHash {
%     const long long poww = 1e9+7;
%     const long long x = 1e6;

%     vector<long long> power, arr, tree;

%     dynamicHash(string &s) {
%         ll n = (ll)s.size() + 1;
%         power.resize(n);
%         arr.resize(n);
%         tree.resize(4*n);

%         power[0] = 1; 
%         for (ll i = 1; i < n; i++) {
%             power[i] = (power[i - 1] * x) % poww;
%         }
%         for (ll i = 0; i < (ll)s.size(); i++) {
%             arr[i + 1] = s[i];
%         }
%         build(1, 1, (ll)s.size());
%     }

%     void build(ll id, ll l, ll r) {
%         if (l == r) {
%             tree[id] = arr[l];
%             return;
%         }
%         ll mid = (l + r) / 2;
%         build(2*id, l, mid);
%         build(2*id+1, mid+1, r);
%         tree[id] = (tree[2*id] * power[r - mid] + tree[2*id + 1]) % poww;
%     }

%     void update(ll id, ll l, ll r, ll pos, char val) {
%         if (l == r) {
%             tree[id] = val;
%             return;
%         }
%         ll mid = (l + r) / 2;
%         if (pos <= mid)
%             update(2*id, l, mid, pos, val);
%         else
%             update(2*id+1, mid+1, r, pos, val);

%         tree[id] = (tree[2*id] * power[r - mid] + tree[2*id + 1]) % poww;
%     }

%     pair<long long, ll> query(ll id, ll l, ll r, ll a, ll b) {
%         if (l > b || r < a) return {0, 0};
%         if (l >= a && r <= b) return {tree[id], r - l + 1};
%         ll mid = (l + r) / 2;
%         auto left = query(2*id, l, mid, a, b);
%         auto right = query(2*id+1, mid+1, r, a, b);
%         long long combined = (left.first * power[right.second] + right.first) % poww;
%         return {combined, left.second + right.second};
%     }

%     long long queryCall(ll id, ll l, ll r, ll a, ll b) {
%         auto p = query(id, l, r, a, b);
%         return p.first;
%     }
% };
% \end{lstlisting}

\subsection{Trie (String + Bitwise)}

\textbf{Features:}
\begin{itemize}
    \item Insert, Search, Erase
    \item Count words equal to or starting with a prefix
    \item Check if any word starts with a prefix
\end{itemize}

\textbf{Time Complexity:} \( O(\text{length of word}) \) per operation

\begin{lstlisting}[language=C++]
class Trie {
    static const int MAXN = 1000000; 
    int nxt[MAXN][26];    // 26 letters
    int endCnt[MAXN];  
    int preCnt[MAXN];   
    int nodeCnt;

public:
    Trie() {
        memset(nxt, -1, sizeof(nxt));
        memset(endCnt, 0, sizeof(endCnt));
        memset(preCnt, 0, sizeof(preCnt));
        nodeCnt = 1; // root = 0
    }

    void insert(const string &s) {
        int node = 0;
        for (char ch : s) {
            int i = ch - 'a';
            if (nxt[node][i] == -1)
                nxt[node][i] = nodeCnt++;
            node = nxt[node][i];
            preCnt[node]++;
        }
        endCnt[node]++;
    }

    bool search(const string &s) {
        int node = 0;
        for (char ch : s) {
            int i = ch - 'a';
            if (nxt[node][i] == -1) return false;
            node = nxt[node][i];
        }
        return endCnt[node] > 0;
    }

    int countEqual(const string &s) {
        int node = 0;
        for (char ch : s) {
            int i = ch - 'a';
            if (nxt[node][i] == -1) return 0;
            node = nxt[node][i];
        }
        return endCnt[node];
    }

    int countPrefix(const string &p) {
        int node = 0;
        for (char ch : p) {
            int i = ch - 'a';
            if (nxt[node][i] == -1) return 0;
            node = nxt[node][i];
        }
        return preCnt[node];
    }

    void erase(const string &s) {
        if (!search(s)) return;
        int node = 0;
        for (char ch : s) {
            int i = ch - 'a';
            node = nxt[node][i];
            preCnt[node]--;
        }
        endCnt[node]--;
    }

    bool startsWith(const string &p) {
        int node = 0;
        for (char ch : p) {
            int i = ch - 'a';
            if (nxt[node][i] == -1) return false;
            node = nxt[node][i];
        }
        return true;
    }
};
\end{lstlisting}

\noindent
\textbf{Note for Bitwise Trie Usage:}
\begin{itemize}
    \item Change \texttt{nxt[26]} to \texttt{nxt[2]} since bits have only two states (0 and 1).
    \item Replace \texttt{int i = c - 'a';} with \texttt{int i = (x >> bit) \& 1;} for bit extraction.
    \item Example insertion for integers:
    \begin{lstlisting}[language=C++]
void insert(const int &x)
{
    int node = 0;
    for (int b = 30; b >= 0; b--)
    {
        int bit = (x >> b) & 1;
        if (nxt[node][bit] == -1)
            nxt[node][bit] = nodeCnt++;
        node = nxt[node][bit];
    }
}
    \end{lstlisting}
    \item This adapts the same Trie to work for bitwise problems like 
    maximum XOR pair, subset XOR, etc.
\end{itemize}


\subsection{Lexicographically Minimal String Rotation (Booths)}

Booth's algorithm computes the starting index of the lexicographically smallest rotation of a string in linear time.  
Given a string \( s \), the algorithm considers the doubled string \( s + s \) and applies a two-pointer technique to skip invalid rotations efficiently.

\begin{lstlisting}[language=C++]
// Time Complexity: O(n)
// Space Complexity: O(1)
int func(string s){
    s += s;
    int i = 0, j = 1, k = 0, len = s.size();

    while(i + k < len && j + k < len){
        if(s[i + k] == s[j + k]) 
            k++;
        else if(s[i + k] < s[j + k]){
            j = max(j + k + 1, i + 1);
            k = 0;
        }
        else{
            i = max(i + k + 1, j + 1);
            k = 0;
        }
    }
    return min(i, j);
}
\end{lstlisting}
\subsection{Suffix Array with LCP and Sparse Table}

\textbf{Time Complexity Summary}
\begin{itemize}
    \item Building Suffix Array: $O(n \log n)$
    \item Building Rank Array: $O(n)$
    \item Building LCP Array (Kasai): $O(n)$
    \item Building Sparse Table: $O(n \log n)$
    \item LCP Query: $O(1)$
\end{itemize}

\textbf{Uses:}  
This structure is used for efficient string queries such as pattern searching, longest common substring, substring comparison, lexicographic order queries, and various competitive programming problems involving suffixes.

\begin{lstlisting}[language=C++,caption={Suffix Array Implementation}]
struct SuffixArray {
  vector<int> p, c, rank, lcp;
  vector<vector<int>> st;

  SuffixArray(string const& s) {
    build_suffix(s + char(1));
    build_rank(p.size());
    build_lcp(s + char(1));
    build_sparse_table(lcp.size());
  }

  void build_suffix(string const& s) {
    int n = s.size();
    const int MX_ASCII = 256;
    vector<int> cnt(max(MX_ASCII, n), 0);
    p.resize(n); c.resize(n);

    for (int i = 0; i < n; i++) cnt[s[i]]++;
    for (int i = 1; i < MX_ASCII; i++) cnt[i] += cnt[i-1];
    for (int i = 0; i < n; i++) p[--cnt[s[i]]] = i;

    c[p[0]] = 0;
    int classes = 1;
    for (int i = 1; i < n; i++) {
      if (s[p[i]] != s[p[i-1]]) classes++;
      c[p[i]] = classes - 1;
    }

    vector<int> pn(n), cn(n);
    for (int h = 0; (1 << h) < n; h++) {
      for (int i = 0; i < n; i++) {
        pn[i] = p[i] - (1 << h);
        if (pn[i] < 0) pn[i] += n;
      }

      fill(cnt.begin(), cnt.begin() + classes, 0);
      for (int i = 0; i < n; i++) cnt[c[pn[i]]]++;
      for (int i = 1; i < classes; i++) cnt[i] += cnt[i-1];
      for (int i = n-1; i >= 0; i--) p[--cnt[c[pn[i]]]] = pn[i];

      cn[p[0]] = 0; classes = 1;
      for (int i = 1; i < n; i++) {
        pair<int,int> cur = {c[p[i]], c[(p[i] + (1 << h)) % n]};
        pair<int,int> prev = {c[p[i-1]], c[(p[i-1] + (1 << h)) % n]};
        if (cur != prev) classes++;
        cn[p[i]] = classes - 1;
      }
      c.swap(cn);
    }
  }

  void build_rank(int n) {
    rank.resize(n, 0);
    for (int i = 0; i < n; i++) rank[p[i]] = i;
  }

  void build_lcp(string const& s) {
    int n = s.size(), k = 0;
    lcp.resize(n - 1, 0);
    for (int i = 0; i < n; i++) {
      if (rank[i] == n - 1) {
        k = 0;
        continue;
      }
      int j = p[rank[i] + 1];
      while (i + k < n && j + k < n && s[i+k] == s[j+k]) k++;
      lcp[rank[i]] = k;
      if (k) k--;
    }
  }

  void build_sparse_table(int n) {
    int lim = __lg(n);
    st.resize(lim + 1, vector<int>(n));
    st[0] = lcp;
    for (int k = 1; k <= lim; k++)
      for (int i = 0; i + (1 << k) <= n; i++)
        st[k][i] =
          min(st[k-1][i], st[k-1][i + (1 << (k-1))]);
  }

  int get_lcp(int i) { return lcp[i]; }

  int get_lcp(int i, int j) {
    if (j < i) swap(i, j);
    j--;
    int K = __lg(j - i + 1);
    return min(st[K][i], st[K][j - (1 << K) + 1]);
  }
};
\end{lstlisting}















\section{Game Theory}

\subsection{Basics}
\begin{itemize}[left=0pt, itemsep=2pt]
    \item \textbf{Winning state:} Can move to a losing state
    \item \textbf{Losing state:} All moves go to winning states
    \item \textbf{Optimal play:} Always move to losing state
\end{itemize}

\subsection{Take-Away Game}
Remove $1..k$ stones, last wins  
\textbf{Losing positions:} $n \bmod (k+1) = 0$

\subsection{Nim}
\begin{itemize}[left=0pt, itemsep=2pt]
    \item XOR all pile sizes
    \item XOR $\neq 0$ $\Rightarrow$ Win
    \item XOR $= 0$ $\Rightarrow$ Lose
\end{itemize}

\subsection{Mis\`ere Nim}
\begin{itemize}[left=0pt, itemsep=2pt]
    \item All piles size 1:
        even $\Rightarrow$ Win, odd $\Rightarrow$ Lose
    \item Else: normal Nim
\end{itemize}

\subsection{Bogus Nim}
\begin{itemize}[left=0pt, itemsep=2pt]
    \item Pockets are irrelevant. Solve using normal XOR.
\end{itemize}


\subsection{Sprague–Grundy}
\begin{itemize}[left=0pt, itemsep=2pt]
    \item $g(x) =$ MEX of reachable states
    \item Multiple games $\Rightarrow$ XOR of Grundy
    \item XOR $\neq 0$ $\Rightarrow$ Win
\end{itemize}


\subsection{Green Hackenbush}
Tree/graph game, players remove edges

\[
g(v)=\bigoplus_{u\in child(v)}(g(u)+1)
\]

Root Grundy $\neq 0$ $\Rightarrow$ Win


\subsection{Pile Splitting}
Split $n$ into two unequal piles
\[
g(n)=\text{MEX}\{g(i)\oplus g(n-i)\},\; 1\le i<\frac n2
\]

\subsection{Staircase Nim}
Only odd-indexed stairs matter → treat as Nim piles

\subsection{Wythoff Game}
Two piles, remove from one or both  
\textbf{Losing positions:}
\[
(\lfloor n\phi\rfloor,\;\lfloor n\phi^2\rfloor),\quad
\phi=\frac{1+\sqrt5}{2}
\]

\subsection{Useful Tips}
\begin{itemize}[left=0pt, itemsep=2pt]
    \item Small $n$ → brute Grundy → detect pattern
    \item Large $n$ → modulo / cycle
    \item Independent games → XOR
\end{itemize}

%------------------------------------------------














% \newpage
% Game Theory starts here
\section{Matrix Exponentiation}

\textbf{Idea:} Linear recurrence / transitions via
\[
F(n)=M^{k}\cdot F(0), \qquad O(\text{size}^3\log k)
\]

\textbf{Example (3-term):}
\[
\begin{pmatrix} f(n+1)\\ f(n)\\ f(n-1)\end{pmatrix}
=
\begin{pmatrix} a&b&c\\ d&e&f\\ g&h&i\end{pmatrix}
\begin{pmatrix} f(n)\\ f(n-1)\\ f(n-2)\end{pmatrix}
\]
\[
\Rightarrow
\begin{pmatrix} f(n+k)\\ f(n+k-1)\\ f(n+k-2)\end{pmatrix}
=
M^{k-1}
\begin{pmatrix} f(n)\\ f(n-1)\\ f(n-2)\end{pmatrix}
\]

\subsubsection{Template}
\begin{lstlisting}[language=C++]
// Matrix Multiplication Trick for Recurrence Relations
typedef vector<vector<ll>> matrix;

// Matrix multiplication
matrix mul(matrix &a, matrix &b, ll mod) {
    int size = a.size();
    matrix res(size, vector<ll>(size, 0));
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            for (int k = 0; k < size; ++k) {
                res[i][j] = (res[i][j] + a[i][k] * b[k][j]) % mod;
            }
        }
    }
    return res;
}

// Matrix exponentiation
matrix pow(matrix &m, ll p, ll mod) {
    int size = m.size();
    matrix res(size, vector<ll>(size, 0));
    // Initialize result matrix as identity matrix
    for (int i = 0; i < size; ++i) {
        res[i][i] = 1;
    }

    while (p > 0) {
        if (p % 2 == 1) {
            res = mul(res, m, mod); 
        }
        m = mul(m, m, mod);
        p /= 2;
    }

    return res;
}

// Function to compute nth term using matrix exponentiation
ll solveRecurrence(ll n, matrix &transformationMatrix, vector<ll> &initialValues, ll mod) {
    if (n < initialValues.size()) 
        return initialValues[n]; // Base case for small n

    // Get the matrix raised to the power (n - 2)
    matrix resultMatrix = pow(transformationMatrix, n - 2, mod);

    // The result is in the first row of the resultMatrix * initialValues
    ll result = 0;
    for (int i = 0; i < resultMatrix.size(); ++i) {
        result = (result + resultMatrix[0][i] * initialValues[i]) % mod;
    }
    return result;
}
\end{lstlisting}


\subsection{Path Count with k edges} $(AdjMatrix)^k$ finds count of path that has exactly k edges.
\begin{lstlisting}
matrix ansMat = pow(graph, k, mod);
ll ans = 0;
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= n; j++)
    {
        ans = add(ans, ansMat[i][j]);
    }
}
cout<<ans<<endl;
\end{lstlisting}
\textbf{Minimum Cost Path with Exactly k edges:} Instead of 0 set infinity everywhere, and in matrix multiplication instead of add-multiply method use min-add method.

















\section{Linear Recurrence \& Matrix Expo}

\begin{itemize}[left=0pt,itemsep=2pt]
\item \textbf{2-term:} $f_n = a f_{n-1} + b f_{n-2}$  \\
$\begin{pmatrix}f_n\\f_{n-1}\end{pmatrix}
=\begin{pmatrix}a&b\\1&0\end{pmatrix}
\begin{pmatrix}f_{n-1}\\f_{n-2}\end{pmatrix}$
$\Rightarrow f_n$ via $M^{\,n-1}$.

\item \textbf{+ constant:} $f_n = a f_{n-1} + b f_{n-2} + c$ \\ 
Augment state with 1 (or $c$):  
$\begin{pmatrix}f_n\\f_{n-1}\\1\end{pmatrix}
=\begin{pmatrix}a&b&c\\1&0&0\\0&0&1\end{pmatrix}
\begin{pmatrix}f_{n-1}\\f_{n-2}\\1\end{pmatrix}$.

\item \textbf{Coupled recurrences:} Make state = all needed terms, build transition matrix by dependencies. For a system of equations like:
\[
g(n) = a \cdot g(n-1) + b \cdot g(n-2) + c \cdot f(n)
\]
\[
f(n) = d \cdot f(n-1) + e \cdot f(n-2)
\]
\[
\begin{pmatrix} g(n) \\ g(n-1) \\ f(n) \\ f(n-1) \end{pmatrix}
=
\begin{pmatrix} a & b & d & e \\ 1 & 0 & 0 & 0 \\ 0 & 0 & d & e \\ 0 & 0 & 1 & 0 \end{pmatrix}^{1}
\begin{pmatrix} g(n-1) \\ g(n-2) \\ f(n-1) \\ f(n-2) \end{pmatrix}
\]

\item \textbf{K length Graph paths:} adjacency $A \Rightarrow (A^k)_{uv}$ = \#paths length exactly $k$.  Time: $O(n^3\log k)$.

\item \textbf{Markov chain:} 
For a system with two states, $H$ (Happy) and $S$ (Sad), the state at step $i+1$ can be found from the state at step $i$:
\[
\begin{pmatrix} H_{i+1} \\ S_{i+1} \end{pmatrix}
=
\begin{pmatrix} p_{HH} & p_{SH} \\ p_{HS} & p_{SS} \end{pmatrix}
\begin{pmatrix} H_i \\ S_i \end{pmatrix}
\]

Your notes have a specific example:
\[
\begin{pmatrix} H_{i+1} \\ S_{i+1} \end{pmatrix}
=
\begin{pmatrix} \tfrac{19}{26} & \tfrac{6}{26} \\[6pt] \tfrac{7}{26} & \tfrac{20}{26} \end{pmatrix}
\begin{pmatrix} H_i \\ S_i \end{pmatrix}
\]
\end{itemize}




\subsection{XOR Basis}

\begin{flushleft}
A linear basis is used to represent all numbers that can be formed by XORing any subset of given elements.  
\end{flushleft}

\begin{lstlisting}[language=C++, caption={}, label={code:insert_vector}]
int d = 20;
int sz; // Current size of the basis
int basis[20]; // Array to store basis vectors

void insertVector(int mask)
{
    for (int i = d - 1; i >= 0; i--)
    {
        if ((mask & (1 << i)) == 0)
            continue;

        if (!basis[i])
        {
            basis[i] = mask;
            ++sz;
            return;
        }

        mask ^= basis[i];
    }
}
\end{lstlisting}

\noindent
\textbf{Time Complexity:} $\mathcal{O}(d)$  
\noindent
\textbf{Space Complexity:} $\mathcal{O}(d)$ \\
\noindent
\textbf{Uses:}
\begin{itemize}
    \item Finding the maximum XOR subset of a given set of numbers.
    \item Counting distinct XOR values obtainable from subsets.
\end{itemize}













\section{Testing}
\subsection{Generate Random}
\begin{lstlisting}
static mt19937_64 rng( chrono::steady_clock::now().time_since_epoch().count()
);

double getDouble(double lb, double ub) {
uniform_real_distribution<double> dist(lb, ub);
    return dist(rng);
}

ll getInt(ll lb, ll rb) {
uniform_int_distribution<ll> dist(lb, rb);
    return dist(rng);
}
\end{lstlisting}

\subsection{Tree generator}
\begin{lstlisting}[language=Python]
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define pbds tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>

void treeTCgenerator()
{
    ll numberOfNodes = getInt(1, 30);
    cout << numberOfNodes << "\n";

    pbds includedInTree;
    pbds notIncludedInTree;

    ll root = 1;
    includedInTree.insert(root);

    for (ll i = 1; i <= numberOfNodes; i++)
    {
        if (i != root)
        {
            notIncludedInTree.insert(i);
        }
    }

    // Generate tree edges
    for (ll i = 0; i < numberOfNodes - 1; i++)
    {
        ll incSize = includedInTree.size();
        ll r = getInt(0, incSize - 1);
        auto itU = includedInTree.find_by_order(r);
        ll u = *itU;

        ll notIncSize = notIncludedInTree.size();
        r = getInt(0, notIncSize - 1);
        auto itV = notIncludedInTree.find_by_order(r);
        ll v = *itV;

        notIncludedInTree.erase(itV);
        includedInTree.insert(v);

        cout << u << " " << v << "\n";
    }
}

\end{lstlisting}

\subsection{Stress Testing Script}
\begin{lstlisting}[language=bash]
# stressTesting.sh

for ((testNum=1; ; testNum++)) 
do 
    echo "tc #$testNum"
    ./$3 > input 

    % For multiple solution checker
    %   ./$1 < input > outWrong 
    %   ./$2 < outWrong > outSlow 

    %   result=$(tr -d '\r' < outSlow | xargs)

    %   if [ "$result" != "Correct" ]
      
    ./$2 < input > outSlow 
    ./$1 < input > outWrong 

    if ! cmp -s "outWrong" "outSlow" 
    then 
        echo "Error found on test #$testNum"
        echo "Input:"
        cat input 
        echo "Wrong Output:"
        cat outWrong 
        echo "Correct Output:"
        cat outSlow 
        exit 1
    fi 
done 
\end{lstlisting}

\vspace{0.5em}

\begin{lstlisting}[language=bash]
# runStress file

g++ -o generator generator.cpp
g++ -o correctSolution correctSolution.cpp
g++ -o mySolution mySolution.cpp
chmod +x stressTesting.sh

./stressTesting.sh mySolution correctSolution generator
\end{lstlisting}


\small{
\textbf{Notes:}
\begin{itemize}[left=0pt, itemsep=0pt]
    \item Create three files: \texttt{generator.cpp}, \texttt{correctSolution.cpp}, and \texttt{mySolution.cpp}.
    \item To run the stress test with inf tests, use:
    \begin{verbatim}
    ./runStress
    \end{verbatim}
\end{itemize}
}

\subsection{Python Basic syntax}
\begin{lstlisting}[language=Python]
import sys
from collections import deque, defaultdict
import heapq
import time

# Uncomment to use file i/o for debugging
# sys.stdin = open("template/input.txt", "r")
# sys.stdout = open("template/output.txt", "w")
# sys.stderr = open("template/error.txt", "w")

x = int(input())
v = list(map(int, input().split()))

mn = v[0]

# Finding minimum value in list
for i in v:
    if mn > i:
        mn = i

# Sorting the list
v.sort()
print("Sorted list:", v)

# Delete entire list
del my_list
my_list.clear()

# Delete by index
del my_list[2]
my_list.pop(2)
my_list.pop() //last indx

# Delete first occured element
my_list.remove(3) 

# Using set to remove duplicates
unique_values = set(v)
print("Unique values in the list:", unique_values)

# Queue operations (using deque)
queue = deque(v)
print("Initial queue:", queue)
queue.append(10)  # Enqueue
print("Queue after enqueue:", queue)
queue.popleft()  # Dequeue
print("Queue after dequeue:", queue)

# Stack operations (using list)
stack = []
stack.append(5)  # Push
stack.append(10)
print("Stack after pushes:", stack)
stack.pop()  # Pop
print("Stack after pop:", stack)

# Using defaultdict for frequency count
freq = defaultdict(int)
for num in v:
    freq[num] += 1
print("Frequency of elements:", dict(freq))

# List comprehension to get even numbers
even_numbers = [x for x in v if x % 2 == 0]
print("Even numbers from the list:", even_numbers)

# Heap operations (using heapq)
heapq.heapify(v)
print("Min-heap:", v)
smallest = heapq.heappop(v)
print("Popped smallest element:", smallest)

# Lambda function for custom sorting
v.sort(key=lambda x: abs(x))
print("List sorted by absolute values:", v)

# Time taken for sorting
start_time = time.time()
v.sort()
end_time = time.time()
print(f"Time taken to sort the list: {end_time - start_time} seconds")

# Print minimum element
for i in range(0,x):
    print(f"here x : {x}",file=sys.stderr)

print(mn)



\end{lstlisting}



\end{multicols}






\end{document}