#include <bits/stdc++.h>
using namespace std;

int count1(int n){
    vector <int> v;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            if(i%j==0){
                v.push_back(j) ;
            }
        }
    }

    int sum=0;
     for (int i = 0; i < v.size(); i++)
    {
        // cout<<v[i]<<" ";
        sum=sum+v[i];
    }
    return sum;
}

int main(){
    int n=4;
    cout <<count1(n)<<endl;
}



