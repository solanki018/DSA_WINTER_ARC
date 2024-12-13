#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr) {
    static int start = 0;               // Static variable to track the start index
    static int end = arr.size() - 1;    // Static variable to track the end index

    if (start >= end) { // Base case: Stop recursion when start >= end
        return;
    }

    swap(arr[start], arr[end]); // Swap the elements at start and end indices
    start++;
    end--;
    reverseArray(arr); // Recursive call
}

int main() {
    vector<int> arr = {4, 5,2};

    // Call the recursive function to reverse the array
    reverseArray(arr);

    // Output the reversed array
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
