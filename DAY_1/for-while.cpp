#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cout << i << "\n";
    }
    return 0;

    while(n > 0){
        cout << n << "\n";
        n--;
    }
}

//now we have to implement this in a different problem
//fiboncci series
//Problem: Given a number n, print the first n numbers of the fibonacci series
int fib(){
    int n;
    cin >> n;
    int a = 0;
    int b = 1;
    cout << a << "\n";
    cout << b << "\n";
    for(int i = 2; i < n; i++){
        int c = a + b;
        cout << c << "\n";
        a = b;
        b = c;
    }
    return 0;
}

//now with while loop
int fib1(){
    int n;
    cin >> n;
    int a = 0;
    int b = 1;
    cout << a << "\n";
    cout << b << "\n";
    int i = 2;
    while(i < n){
        int c = a + b;
        cout << c << "\n";
        a = b;
        b = c;
        i++;
    }
    return 0;
}