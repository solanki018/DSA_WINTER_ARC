#include <iostream>
#include <vector>
using namespace std;

bool isRotated(vector<int>& arr) {
    int n = arr.size();
    int count = 0; // Count the number of breaks in the sorted order

    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[(i + 1) % n]) { // Compare each element with the next (circular check)
            count++;
        }
    }

    if(count>1){
        return false;
    }
    return true;
}

int main() {
    vector<int> arr1 = {4, 5, 6, 1, 2, 3}; // Rotated
    vector<int> arr2 = {1, 2, 3, 4, 5, 6}; // Sorted but not rotated
    vector<int> arr3 = {2, 3, 4, 8, 6, 1}; // Rotated

    cout << (isRotated(arr1) ? "True" : "False") << endl; // Output: True
    cout << (isRotated(arr2) ? "True" : "False") << endl; // Output: False
    cout << (isRotated(arr3) ? "True" : "False") << endl; // Output: True

    return 0;
}
