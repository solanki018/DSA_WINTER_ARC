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
       
        for(int j=0;j< 2*i+1;j++){
            
            cout<<"*";
        }
        
         for (int j =0; j<N-i-1; j++)
        {
            cout <<" ";
        }
        
        // As soon as the stars for each iteration are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        cout << endl;
    }
}

int main(){
    int N = 4;
    pattern2(N);
}