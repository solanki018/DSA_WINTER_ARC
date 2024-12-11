#include <bits/stdc++.h>
using namespace std;


int minJumps(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();){
            for (int j=0;j<=i;){
                // int m=i;
                 if(i==arr.size()-1){
                        break;
                }
                    sum=sum+1;
                    if(arr[j]==0){
                        i=j;
                        break;
                        if(arr[i]==0){
                            return -1;
                        }       
                    }   
            }
            i=i+arr[i];
        return sum;
    };
}

int main(){
    vector<int> arr = {9 , 10 , 1 , 2 , 3 , 4 , 8 , 0 , 0, 0 , 0 , 0 , 0 , 0 , 1};
    cout <<minJumps(arr)<<endl;
}


