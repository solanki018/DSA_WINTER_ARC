#include <bits/stdc++.h>
using namespace std;

//first pattern is 
//***
//***
//***
int pattern1(int N){
    for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cout<<"*";
            }
            cout<<endl;
    }
}

int main(){
    int N = 5;
    pattern1(N);
}