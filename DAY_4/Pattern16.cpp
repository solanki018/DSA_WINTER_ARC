#include <bits/stdc++.h>
using namespace std;

//third pattern is 
//1
//12
//123

int sum=0;
int pattern4(int N){
    for(int i=0;i<N;i++){
            for(int j=0;j<=i;j++){
                cout<<char('A'+sum);
            }
            sum=sum+1;
            cout<<endl;
    }
}

int main(){
    int N = 5;
    pattern4(N);
}