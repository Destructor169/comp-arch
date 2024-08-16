#include <iostream>
#include <time.h>

using namespace std;

long long fib_iterative(int n) {
    if (n <= 1)
        return n;
    long long a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    struct timespec s, e;
    clock_gettime(CLOCK_REALTIME, &s);

    for (int i = 0; i < 50; i++) {
        cout << fib_iterative(i) << " ";
    }
    cout << endl;

    clock_gettime(CLOCK_REALTIME, &e);
    double t = (e.tv_sec - s.tv_sec) + (e.tv_nsec - s.tv_nsec) / 1e9;
    cout << "Execution time (Iterative): " << t << " seconds" << endl;

    return 0;
}
