#include <bits/stdc++.h>
using namespace std;

//third pattern is 
//1
//23
//456

int pattern3(int N){
    int sum=1;
    for(int i=0;i<=N;i++){
            for(int j=1;j<=i;j++){
                cout<<sum;
                sum=sum+1;
                cout<<" ";
            }
            
            cout<<endl;
    }
}
int main(){
    int N = 5;
    pattern3(N);
}