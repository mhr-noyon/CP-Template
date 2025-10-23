#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define inf 2e17
#define pll pair<ll, ll>

const int Zero = 0;
const int INF = INT_MAX;

// Problem Link: https://codeforces.com/gym/106059/problem/J

// Class for Bipartite Graph implementing Hopcroft–Karp Algorithm
class BipGraph
{
private:
    int leftSize, rightSize;
    vector<vector<int>> graph;
    vector<int> pairU, pairV, dist;

public:
    // BFS: checks if there exists an augmenting path
    bool bfs()
    {
        queue<int> q;
        for (int u = 1; u <= leftSize; u++)
        {
            if (pairU[u] == Zero)
            {
                dist[u] = 0;
                q.push(u);
            }
            else
            {
                dist[u] = INF;
            }
        }

        dist[Zero] = INF;

        while (!q.empty())
        {
            int u = q.front();
            q.pop();

            if (dist[u] < dist[Zero])
            {
                for (int v : graph[u])
                {
                    if (dist[pairV[v]] == INF)
                    {
                        dist[pairV[v]] = dist[u] + 1;
                        q.push(pairV[v]);
                    }
                }
            }
        }
        return dist[Zero] != INF;
    }

    // DFS: tries to find augmenting path starting from u
    bool dfs(int u)
    {
        if (u == Zero)
            return true;

        for (int v : graph[u])
        {
            if (dist[pairV[v]] == dist[u] + 1 && dfs(pairV[v]))
            {
                pairV[v] = u;
                pairU[u] = v;
                return true;
            }
        }

        dist[u] = INF;
        return false;
    }

    // Main function to find maximum matching
    int hopcroftKarp(int l, int r, vector<vector<int>> &adj)
    {
        leftSize = l;
        rightSize = r;
        pairU.assign(leftSize + 1, Zero);
        pairV.assign(rightSize + 1, Zero);
        dist.assign(leftSize + 1, INF);
        graph = adj;

        int matching = 0;

        // Keep updating while there is an augmenting path
        while (bfs())
        {
            for (int u = 1; u <= leftSize; u++)
            {
                if (pairU[u] == Zero && dfs(u))
                    matching++;
            }
        }

        return matching;
    }
};

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<vector<int>> graph(n + 1);
    for (int j = 0; j < n; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            ll x = v[j] + i;
            if ((ll)sqrt(x) * (ll)sqrt(x) == x)
            {
                graph[j + 1].push_back(i);
            }
        }
    }

    BipGraph g;
    if (g.hopcroftKarp(n, n, graph) == n)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // cout.tie(0);

    cout << fixed << setprecision(9);
    cerr << fixed << setprecision(9);

    ll _T = 1;
    // cin >> _T;
    for (ll i = 1; i <= _T; i++)
    {
        // cout << "Case " << i << ": ";
        // cerr << "\n\nCase " << i << ": \n";
        solve();
    }
    return 0;
}