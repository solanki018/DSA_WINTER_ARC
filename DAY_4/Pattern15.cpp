#include <bits/stdc++.h>
using namespace std;

//third pattern is 
//1
//12
//123

int pattern3(int N){
   
        for(int i=N;i>=0;i--){
            for(int j=0;j<i;j++){
                cout<<char('A'+j);
            }
            cout<<endl;
    }

}

int main(){
    int N = 5;
    pattern3(N);
}