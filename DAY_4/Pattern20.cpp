#include <bits/stdc++.h>
using namespace std;

//second pattern is 
//*
//** 
//***
int pattern2(int N){
   for(int i=0;i<=N-1;i++){
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
   
    for(int i=N;i>=0;i--){
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