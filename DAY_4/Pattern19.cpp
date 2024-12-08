#include <bits/stdc++.h>
using namespace std;

//second pattern is 
//*
//** 
//***
int pattern2(int N){
    for(int i=N;i>=1;i--){
            for(int j=0;j<i;j++){
                cout<<"*";
            }
            for(int j= 0 ;j<2*(N-i) ; j++){
                cout<<" ";
            }
            for(int j=0;j<i;j++){
                cout<<"*";
            }
            cout<<endl;
    }
   
    for(int i=1;i<=N;i++){
            for(int j=0;j<i;j++){
                cout<<"*";
            }
            for(int j= 0 ;j<2*(N-i) ; j++){
                cout<<" ";
            }
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