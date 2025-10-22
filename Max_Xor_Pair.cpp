#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

// Problem link: https://leetcode.com/problems/maximum-xor-of-two-numbers-in-an-array/description/

class Trie
{
	static const int mxN = 6e6;
	int nxt[mxN][2];
	int nodeCnt;

public:
	Trie(int n)
	{
		memset(nxt, -1, sizeof(nxt));
		nodeCnt = 1;
	}

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
	int search(int &target)
	{
		int node = 0;
		int ans = 0;
		for (int b = 30; b >= 0; b--)
		{
			int bit = (target >> b) & 1;
			if (nxt[node][bit ^ 1] != -1)
			{
				ans <<= 1;
				ans |= 1;
				node = nxt[node][bit ^ 1];
			}
			else if (nxt[node][bit] != -1)
			{
				ans <<= 1;
				node = nxt[node][bit];
			}
			else
			{
				return 0;
			}
		}
		return ans;
	}
};

class Solution
{
public:
	int findMaximumXOR(vector<int> &nums)
	{
		int ans = 0;
		Trie t(nums.size());
		for (auto &it : nums)
		{
			t.insert(it);
		}

		for (auto &it : nums)
		{
			ans = max(ans, t.search(it));
		}
		return ans;
	}
};

void solve()
{
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt = 1;
	// cin >> tt;
	while (tt--)
	{
		solve();
	}
}
