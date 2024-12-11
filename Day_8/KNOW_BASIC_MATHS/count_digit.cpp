#include <bits/stdc++.h>
using namespace std;

int count1(int n){
    int sum=0;
    while(n>0){
        sum=sum+1;
        n= n/10;
    }
    return sum;
}

int main(){
    int n=234245;
    cout <<count1(n)<<endl;
}



