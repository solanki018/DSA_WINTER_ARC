#include <bits/stdc++.h>
using namespace std;

//third pattern is 
//1
//12
//123

int pattern6(int N){
    for(int i=N;i>=0;i--){
            for(int j=1;j<=i;j++){
                cout<<j;
            }
            cout<<endl;
    }
}

int main(){
    int N = 5;
    pattern6(N);
}