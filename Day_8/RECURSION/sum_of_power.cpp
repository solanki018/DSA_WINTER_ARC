#include <bits/stdc++.h>
using namespace std;

int sumOfSeries(int n) {

    // Base condition: If n is 0, return 0
    if (n == 0) return 0;
    // Recursive call and compute the sum
    return pow(n, 3) + sumOfSeries(n - 1);
}

int main() {
    int n = 5;
     cout << "Sum of series (1^3 + 2^3 + ... + " << n << "^3) is: " << sumOfSeries(n) << endl;
    return 0;
}