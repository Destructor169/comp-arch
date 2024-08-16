#include <iostream>
#include <time.h>
#include <vector>

using namespace std;

long long fib_memo(int n, vector<long long>& memo) {
    if (n <= 1)
        return n;
    if (memo[n] != -1)
        return memo[n];
    memo[n] = fib_memo(n - 1, memo) + fib_memo(n - 2, memo);
    return memo[n];
}

int main() {
    struct timespec s, e;
    clock_gettime(CLOCK_REALTIME, &s);

    int n = 50;
    vector<long long> memo(n + 1, -1);
    for (int i = 0; i < n; i++) {
        cout << fib_memo(i, memo) << " ";
    }
    cout << endl;

    clock_gettime(CLOCK_REALTIME, &e);
    double t = (e.tv_sec - s.tv_sec) + (e.tv_nsec - s.tv_nsec) / 1e9;
    cout << "Execution time (Memoization): " << t << " seconds" << endl;

    return 0;
}
