
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int getInt(int lb, int ub) {
    return (rand() % (ub - lb + 1)) + lb;
}
double getDouble(double lb, double ub) {
    return ((double)rand() / RAND_MAX) * (ub - lb) + lb;
}
void generate()
{
    int n = getInt(1, 100);
    cout << n << endl;
    double x1 = getDouble(-1000, 1000);
    cout << x1 << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cout << fixed << setprecision(8);

    srand(time(0));
    
    int _T = 1;
    // cin>>_T;
    for(int i=1;i<=_T;i++){
        generate();
    }
    return 0;
}