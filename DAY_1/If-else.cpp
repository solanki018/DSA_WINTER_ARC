#include <bits/stdc++.h>
using namespace std;

int main(){
    int a =13;
    
    if(a > 10){
        cout << "a is greater than 10" << "\n";
    }
    else if (a == 10){
        cout << "a is equal to 10" << "\n";
    }
    else{
        cout << "a is less than 10" << "\n";
    }
    return 0;
}

//now there is some interesting part in this code

int divby4(int a){
    if(a <100){
        if(a%4 == 0){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        return 0;
    }
}