#include <bits/stdc++.h>
using namespace std;

// Function returns the second
    // largest elements
int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
    if (n == 0 || n == 1) {
        return -1; // Not enough elements for a second largest
    }

    // Sort the array
    sort(arr.begin(), arr.end());

    // Find the largest element
    int largest = arr[n - 1];

    // Find the second largest by traversing backwards
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] != largest) {
            return arr[i]; // Return the second largest element
        }
    }

    // If all elements are the same, return -1
    return -1;

       
        
 }

    int main(){
        vector<int> arr = {1, 2, 3, 4, 5};
        cout << getSecondLargest(arr) << endl;
        return 0;
    }