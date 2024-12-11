#include <bits/stdc++.h>
using namespace std;

bool count1(int x) {
    // Handle negative numbers
    if (x < 0) return false;

    vector<int> digits;
    int original = x;

    // Extract digits and store in vector
    while (x > 0) {
        digits.push_back(x % 10);
        x = x / 10;
    }

    // Check if the number is a palindrome
    for (int i = 0, j = digits.size() - 1; i < j; i++, j--) {
        if (digits[i] != digits[j]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n = 121;
    cout << (count1(n) ? "Palindrome" : "Not a Palindrome") << endl;
    return 0;
}
