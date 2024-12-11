#include <bits/stdc++.h>
using namespace std;

void printNos(int n) {
    // Base Condition: If n is 0, stop the recursion
    if (n == 0) return;

    // Recursive call to print numbers from 1 to n-1 first
    printNos(n - 1);

    // Print the current number after recursive call
    cout << n << " ";
}

int main() {
    int n = 5;
    printNos(n);
    return 0;
}