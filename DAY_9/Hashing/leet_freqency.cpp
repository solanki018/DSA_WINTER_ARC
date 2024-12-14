// problem
/*The frequency of an element is the number of times it occurs in an array.

You are given an integer array nums and an integer k. 
In one operation, you can choose an index of nums and increment the element at that index by 1.

Return the maximum possible frequency of an element after performing at most k operations.*/

// Example 1:
// Input: nums = [3,9,6], k = 2
// Output: 1

//Not solved by myself
#include <bits/stdc++.h>
using namespace std;

int maxFrequency(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    long long sum = 0;
    int l = 0;
    int res = 1;
    for (int r = 1; r < n; r++) {
        sum += (long long)(r - l) * (nums[r] - nums[r - 1]);
        while (sum > k) {
            sum -= nums[r] - nums[l];
            l++;
        }
        res = max(res, r - l + 1);
    }
    return res;
}

int main() {
    vector<int> nums = {3, 9, 6};
    int k = 2;
    cout << maxFrequency(nums, k) << endl;
    return 0;
}