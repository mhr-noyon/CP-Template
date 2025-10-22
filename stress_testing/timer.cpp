#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

// Stopwatch function
void timer()
{
    static auto start_time = high_resolution_clock::now(); // static: persists between calls
    static bool started = false;

    if (!started)
    {
        start_time = high_resolution_clock::now();
        started = true;
    }
    else
    {
        auto end_time = high_resolution_clock::now();
        auto duration = duration_cast<milliseconds>(end_time - start_time);
        cerr << "Time taken: " << duration.count() << " ms\n";
        started = false;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    timer(); // Start timer

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        // Your main logic here
    }

    timer(); // Stop timer and print elapsed time
    return 0;
}
