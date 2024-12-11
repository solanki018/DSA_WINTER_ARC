#include <bits/stdc++.h>
using namespace std;

int pattern2(int N){
   for (int i = 0; i < N; i++)
    {
        for (int j =0; j<N-i-1; j++)
        {
            cout <<" ";
        }
       
        for(int j=0;j< 2*i+1;j++){
            
            cout<<"*";
        }
        
         for (int j =0; j<N-i-1; j++)
        {
            cout <<" ";
        }
        cout << endl;
    }
    for (int i = N-1; i >= 0; i--)
    {
        for (int j =0; j<N-i-1; j++)
        {
            cout <<" ";
        }
       
        for(int j=0;j< 2*i+1;j++){
            
            cout<<"*";
        }
        
         for (int j =0; j<N-i-1; j++)
        {
            cout <<" ";
        }
        cout << endl;
    }
}

int main(){
    int N = 4;
    pattern2(N);
}