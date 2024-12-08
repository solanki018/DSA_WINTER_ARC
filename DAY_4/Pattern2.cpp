#include <bits/stdc++.h>
using namespace std;

//second pattern is 
//*
//** 
//***
int pattern2(int N){
    for(int i=0;i<=N;i++){
            for(int j=0;j<i;j++){
                cout<<"*";
            }
            cout<<endl;
    }
}

int main(){
    int N = 4;
    pattern2(N);
}