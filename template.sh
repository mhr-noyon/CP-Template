#!/bin/bash
# Usage command: ./template.sh fileName

# check if a filename was provided
if [ -z "$1" ]; then
    echo "Usage: ./temp.sh <fileName>"
    exit 1
fi

# file name with .cpp extension
file="$1.cpp"

# create the file and write the template into it
cat <<EOF > "$file"
/*
    author: mhr-noyon
    Time: $(date +"%H:%M:%S")
    Date: $(date +"%d-%m-%Y")
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\\n"
#define pll pair<ll, ll>
#define Graph vector<vector<ll>>

void solve()
{
     
}

int main()
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
        // cerr<<"\n\nCase #" << i << ": ";
        solve();
    }
    return 0;
}
EOF

echo "--File '$file' created successfully."
