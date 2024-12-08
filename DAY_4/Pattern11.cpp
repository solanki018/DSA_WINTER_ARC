#include <bits/stdc++.h>
using namespace std;

//11th pattern is 
//1
//01
//101
int pattern11(int N){
    int start=1;
        for (int i=1;i<=N;i++){
            if(i%2==0){
                start=0;
                for(int j=1;j<=i;j++){
                    cout<<start;
                    start=1-start;}
                    cout<<endl;}
            else{
                start=1;  
                for(int j=1;j<=i;j++){
                    cout<<start;
                    start=1-start;}
                    cout<<endl;
    }
            
     }
}
    

int main(){
    int N = 10;
    pattern11(N);
}