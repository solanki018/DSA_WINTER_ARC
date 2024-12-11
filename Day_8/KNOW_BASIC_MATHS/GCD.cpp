#include <bits/stdc++.h>
using namespace std;

int lcmAndGcd(int a ,int b){
   int gcd =1;
    for(int i=1;i< max(a,b);i++){
        if(a%i==0 && b%i==0){
                gcd=i;
        }
    }
    return gcd;
   
}

int main(){
    int a=14;
    int b=8;
    // lcmAndGcd(a,b);
    cout<<"gcd is"<<lcmAndGcd(a,b)<<endl;
    return 0; 
}

//only gcd is calculated here
/*
 int gcd =1;
    for(int i=1;i< max(a,b);i++){
        if(a%i==0 && b%i==0){
                gcd=i;
        }
    }
    return gcd;
*/

/*
lcm=(a*b)/gcd;
for gcd and lcm in vector form
int gcd =1;
        for(int i=1;i< max(a,b);i++){
            if(a%i==0 & b%i==0){
                gcd=i;
            }
        }
        int c = a*b;
        int lcm = c/gcd;
        vector<int> myList;
        myList.push_back(lcm);
        myList.push_back(gcd);
        return myList;
*/



/*
there is some other way also for finding lcm 
you can store all the multiple of a and b in a vector and
then find the common element in both the vector
by using iterative loop till the sizes of both the vector
*/