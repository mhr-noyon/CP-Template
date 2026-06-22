#!/bin/bash

# check if a filename was provided
if [ -z "$1" ]; then
    echo "Usage: ./template.sh <fileName>"
    exit 1
fi

# file name with .cpp extension
file="$1.cpp"

# create the file and write the template into it
cat <<EOF > "$file"
/*
    author: lostBit
    Time: $(date +"%H:%M:%S")
    Date: $(date +"%d-%m-%Y")
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define bigInt __int128
#define endl "\\n"
#define pll pair<ll, ll>
#define pii pair<int, int>
#define Graph vector<vector<ll>>
#define inf 1e18
#define mod 1000000007
#define PIE acos(-1)
#define vi vector<int>
#define vl vector<ll>
#define vpll vector<pll>
#define vpii vector<pii>
#define fori(n) for(int i=0; i<n; i++)
#define fori1(n) for(int i=1; i<=n; i++)
#define forj(n) for(int j=0; j<n; j++)
#define forj1(n) for(int j=1; j<=n; j++)
#define rfori(n) for(int i=n-1; i>=0; i--)
#define rfori1(n) for(int i=n; i>=1; i--)
#define rforj(n) for(int j=n-1; j>=0; j--) 
#define rforj1(n) for(int j=n; j>=1; j--)

void solve()
{
     
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cout << fixed << setprecision(6);
    cerr << fixed << setprecision(6);
    
    int _t = 1;
    cin >> _t;
    for (int i = 1; i <= _t; i++)
    {
        // cout<<"Case #" << i << ": ";
        // cerr<<"\n\n------------------------Case #" << i << ": \n";
        solve();
    }
    return 0;
}
EOF

echo "--File '$file' created successfully."
