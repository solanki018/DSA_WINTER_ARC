#include <bits/stdc++.h>
using namespace std;

int count1(int n){
    int m=n;
    int sum=0;
    vector<int> armvec;

    //n = 133, 133 / 10 = 13
    //n = 133, 133 % 10 = 3

    while(n>0){
        sum=sum+1;
        int a = n%10;
        armvec.push_back(a);
        n= n/10;
    }

    int num=1;

    for (int i = 0; i < armvec.size(); i++)
    {
        // cout<<armvec[i]<<endl;
        num = num + pow(armvec[i],sum);
        // cout<<num<<endl;
    }
    cout<<num<<endl;
    if(num==m){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n=153;
    cout <<count1(n)<<endl;
}



