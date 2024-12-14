#include <bits/stdc++.h>
using namespace std;

void insertion_Sort(vector<int>& arr) {
         int n = arr.size();
    for (int i = 1; i < n; i++) {  // Outer loop starts from 1
        for (int j = i; j > 0; j--) {
            if (arr[j - 1] > arr[j]) {
                // Swap adjacent elements
                int temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    cout << "Original array: ";
    
    for (int num : arr) cout << num << " ";
    cout << "\n";

    insertion_Sort(arr);

    cout << "Sorted array: ";
    for (int num : arr) cout << num << " ";
    cout << "\n";

    return 0;
}