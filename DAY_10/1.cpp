#include <iostream>
using namespace std;

int main() {
    // Read the number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--) {
        // Read the value of n for this test case
        int n;
        cin >> n;

        // The number of valid pairs (a, b) is simply n - 1
        cout << n - 1 << endl;
    }

    return 0;
}
