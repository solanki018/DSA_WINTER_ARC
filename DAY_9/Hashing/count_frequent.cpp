#include <bits/stdc++.h>
using namespace std;

int frequencyCount(vector<int>& arr) {
    int n = arr.size();
    vector<int> hasharr(n, 0); // Initialize a vector of size n with 0s

    for (int i = 0; i < n; i++) {
        if (arr[i] >= 1 && arr[i] <= n) { // Ensure arr[i] is within bounds
            hasharr[arr[i] - 1]++; // Adjust for 0-based indexing
        }
    };
    int maxR = *max_element(hasharr.begin(), hasharr.end());
    //  auto it = find(hasharr.begin(), hasharr.end(), maxR);
    // cout<<it*<<endl;
    int minR = *min_element(hasharr.begin(), hasharr.end());
    return maxR ;
    return minR;  //we can return both teh values by using pair
}


int main() {
    vector<int> arr = {2, 3, 2, 3, 5};
    int result = frequencyCount(arr);

   cout<<result<<endl;

    return 0;
}
