#include <bits/stdc++.h>
using namespace std;

//second pattern is 
//*
//** 
//***
int pattern5(int N){
    for(int i=N;i>=0;i--){
            for(int j=0;j<i;j++){
                cout<<"*";
            }
            cout<<endl;
    }
}

int main(){
    int N = 4;
    pattern5(N);
}