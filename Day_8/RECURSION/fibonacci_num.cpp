#include <bits/stdc++.h>
using namespace std;

int fib(int n) {
    // Base case for n == 0 and n == 1
    if (n == 0) return 0;  // fib(0) = 0
    if (n == 1) return 1;  // fib(1) = 1

    // Recursive case for n > 1
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n = 5;
    fib(n);
    return 0;
}