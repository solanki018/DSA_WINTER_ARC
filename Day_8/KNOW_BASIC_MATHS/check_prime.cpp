#include <bits/stdc++.h>
using namespace std;
bool count1(int n){
    //lets check a num is prime or not 
    if(n>2){
        for (int j=2;j<n;j++){
            if(n%j==0){
                return false;
            }
        }
    }
    else if(n=2){
            return true;
    }
    else{
        return true;
    }
}


int main(){
    int n=4;
     cout << (count1(n) ? "prime number" : "Not a Prime number") << endl;
    return 0;
}