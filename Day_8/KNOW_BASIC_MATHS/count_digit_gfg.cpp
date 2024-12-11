//Given a positive integer n, count the number of digits in n 
//that divide n evenly (i.e., without leaving a remainder). 
//Return the total number of such digits.

//A digit d of n divides n evenly 
//if the remainder when n is divided by d is 0 (n % d == 0).
//Digits of n should be checked individually.
 //If a digit is 0, it should be ignored because division by 0 is undefined.


#include <bits/stdc++.h>
using namespace std;
int count1(int n){
    int cnt=n;
    int sum=0;
    vector<int>i;
        while(n>0){
        int a=n %10;
        i.push_back(a);
        n=n/10;
    } 
    for (int digit : i) {
            if (digit != 0 && cnt % digit == 0) {
                sum++;
            }
        }
    return sum;
}


int main(){
    int n=12;
    cout <<count1(n)<<endl;
}