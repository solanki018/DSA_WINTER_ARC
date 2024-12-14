#include <bits/stdc++.h>
using namespace std;

vector<int> frequencyCount(vector<int>& arr) {
    int n = arr.size();
    vector<int> hasharr(n, 0); // Initialize a vector of size n with 0s

    for (int i = 0; i < n; i++) {
        if (arr[i] >= 1 && arr[i] <= n) { // Ensure arr[i] is within bounds
            hasharr[arr[i] - 1]++; // Adjust for 0-based indexing
        }
    }

    return hasharr; // Return the frequency vector
}


int main() {
    vector<int> arr = {2, 3, 2, 3, 5};
    vector<int> result = frequencyCount(arr);

    for (int freq : result) {
        cout << freq << " ";
    }

    return 0;
}
