#include <bits/stdc++.h>
using namespace std;

//second pattern is 
//*
//** 
//***
int pattern2(int N){
   for (int i = 0; i < N; i++)
    {
        for (int j =0; j<N-i-1; j++)
        {
            cout <<" ";
        }     
        for(int j=0;j<=i;j++){
                cout<<char('A'+j);
                cout << " ";
            }

        for(int j=i;j>0;j--){
                cout<<char('A'+j-1);
                cout << " ";
            } 
         for (int j =0; j<N-i-1; j++)
        {
            cout <<" ";
        }
        cout << endl;
    }
}

int main(){
    int N = 5;
    pattern2(N);
}

