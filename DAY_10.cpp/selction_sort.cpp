#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        auto minIt = min_element(arr.begin() + i, arr.end());
        // swap(arr[i], *minIt);
        int temp = arr[i];
        arr[i] = *minIt;
        *minIt = temp;
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    cout << "Original array: ";

    for (int num : arr) cout << num << " ";
    cout << "\n";

    selectionSort(arr);

    cout << "Sorted array: ";
    for (int num : arr) cout << num << " ";
    cout << "\n";

    return 0;
}
