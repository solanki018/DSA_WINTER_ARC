#include <bits/stdc++.h>
using namespace std;

//11th pattern is 
//1    1
//12  21
//123321
int pattern12(int N){
   for(int i=1;i<=N;i++){
            for(int j=1;j<=i;j++){
                cout<<j;
            }
            for(int j= 2*(N-i) ;j >0 ; j--){
                cout<<" ";
            }
            for(int j=i;j>0;j--){
                cout<<j;
            }
            cout<<endl;
    }
}

int main(){
    int N = 10;
    pattern12(N);
}