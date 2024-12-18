#include <bits/stdc++.h>
using namespace std;

int largest(vector<int> &arr) {
    int n = arr.size();
    int ans = arr[0]; // Assume the first element is the largest
    for (int i = 1; i < n; i++) { // Start from the second element
        if (arr[i] > ans) {
            ans = arr[i]; // Update the largest element
        }
    }
    return ans; // Return the largest element
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << largest(arr) << endl;
    return 0;
}