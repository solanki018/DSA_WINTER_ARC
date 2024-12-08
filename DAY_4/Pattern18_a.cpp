#include <bits/stdc++.h>
using namespace std;

//third pattern is 
//1
//12
//123

int pattern3(int N){
    int sum= N;
    for(int i=0;i<N;i++){
            for(int j=0;j<=i;j++){
                cout<<char('A'+sum-j-1);
                cout<<" ";
            }
    
            cout<<endl;
    }
}

int main(){
    int N = 5;
    pattern3(N);
}