#include <iostream>
#include <time.h>
#include <vector>

using namespace std;

long long fib(int n, vector<long long>& memo) {
    if (memo[n] != -1)
        return memo[n];
    if (n <= 1)
        return n;
    memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
    return memo[n];
}

int main() {
    struct timespec s, e;
    clock_gettime(CLOCK_REALTIME, &s);

    vector<long long> memo(50, -1); // Initialize memoization vector with -1
    for (int i = 0; i < 50; i++) {
        cout << fib(i, memo) << " ";
    }
    cout << endl;

    clock_gettime(CLOCK_REALTIME, &e);
    double t = (e.tv_sec - s.tv_sec) + (e.tv_nsec - s.tv_nsec) / 1e9;
    cout << "Execution time: " << t << " seconds" << endl;

    return 0;
}
