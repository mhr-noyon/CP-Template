#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int getInt(int lb, int ub)
{
    return (rand() % (ub - lb + 1)) + lb;
}

double getDouble(double lb, double ub)
{
    return ((double)rand() / RAND_MAX) * (ub - lb) + lb;
}

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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cout << fixed << setprecision(8);

    srand(time(0)); // Initialize random seed once

    int _T = 1;
    // cin >> _T;  // Uncomment if you want multiple test cases
    for (int i = 1; i <= _T; i++)
    {
        treeTCgenerator();
    }
    return 0;
}
