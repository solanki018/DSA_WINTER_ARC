#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 2;
    switch(a){
        case 1:
            cout << "a is 1" << "\n";
            break;
        case 2:
            cout << "a is 2" << "\n";
            break;
        case 3:
            cout << "a is 3" << "\n";
            break;
        default:
            cout << "a is not 1, 2 or 3" << "\n";
    }
    return 0;
}


//In this code we have used switch case statement
//now we have to implement this in a differnt problem
//Problem: Given a number n, print the day of the week for the given number

int day(){
    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "Monday" << "\n";
        break;
    case 2:
        cout << "Tuesday" << "\n";
        break; 
    case 3:
        cout << "Wednesday" << "\n";
        break;
    case 4:
        cout << "Thursday" << "\n";
        break;
    case 5:
        cout << "Friday" << "\n";
        break;
    case 6:
        cout << "Saturday" << "\n";
        break;
    case 7:
        cout << "Sunday" << "\n";
        break;
    default:
        break;
    }
}