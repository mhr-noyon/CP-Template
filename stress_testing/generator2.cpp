
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

static mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

double getDouble(double lb, double ub)
{
    uniform_real_distribution<double> dist(lb, ub);
    return dist(rng);
}

ll getInt(ll lb, ll rb)
{
    uniform_int_distribution<ll> dist(lb, rb);
    return dist(rng);
}

// int getInt(int lb, int ub)
// {
//     return (rand() % (ub - lb + 1)) + lb;
// }
// double getDouble(double lb, double ub)
// {
//     return ((double)rand() / RAND_MAX) * (ub - lb) + lb;
// }
void generate()
{
    ll n = getInt(1, 8);
    cout << n << endl;
    for (int i = 0; i < n; i++)
    {
        ll x = getInt(0, 2);
        if (x == 2)
        {
            cout << '?';
        }
        else
            cout << char('a' + x);
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cout << fixed << setprecision(8);

    srand(time(0));

    int _T = 1;
    cout << _T << endl;

    for (int i = 1; i <= _T; i++)
    {
        generate();
    }
    return 0;
}
