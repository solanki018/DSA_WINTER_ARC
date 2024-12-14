#include <bits/stdc++.h>
using namespace std;

int bubble_sort(vector<int> &arr){
     int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++){
                if(arr[j]>arr[j+1]){
                    int temp = arr[j + 1];
                    arr[j + 1] = arr[j];
                    arr[j] = temp;
                 }
                else{
                    continue;
                }
                 }
    }
}







int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    cout << "Original array: ";
    
    for (int num : arr) cout << num << " ";
    cout << "\n";

    bubble_sort(arr);

    cout << "Sorted array: ";
    for (int num : arr) cout << num << " ";
    cout << "\n";

    return 0;
}