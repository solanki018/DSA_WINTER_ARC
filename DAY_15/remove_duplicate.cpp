#include <iostream>
#include <vector> // If you want to use vectors for the final result
using namespace std;

int main() {
    int nums[] = {1, 2, 2, 3, 4, 4, 5}; // Input array
    int n = sizeof(nums) / sizeof(nums[0]);

    // Create an array to hold unique elements (make sure it's large enough)
    int expectedNums[n];
    int k = 0;  // Index to store unique elements

    // Loop through the array and store unique elements in 'expectedNums'
    for (int i = 0; i < n; i++) {
        if (i == 0 || nums[i] != nums[i - 1]) { // Add the element if it's not a duplicate
            expectedNums[k++] = nums[i];
        }
    }

    // Output the result
    for (int i = 0; i < k; i++) {
        cout << expectedNums[i] << " ";
    }

    return 0;
}
