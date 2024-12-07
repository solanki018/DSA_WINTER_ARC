#include <bits/stdc++.h>
using namespace std;
// In c++ we use "\n" for new line instead of endl

//Data types 
// int, long long, float, double, char, string, 
//these are the basic data types in c++


// int is used for integer values
// long long is used for large integer values
// float is used for decimal values
// double is used for large decimal values
// char is used for single character
// string is used for multiple characters

int main(){
    //int data type
    int a = 10;
    cout << a << "\n";
    //long long data type
    long long b = 1000000000000000000;
    cout << b << "\n";
    //float data type
    float c = 10.5;
    cout << c << "\n";
    //double data type
    double d = 1000000000000000000.5;
    cout << d << "\n";

//there is difference between float and double is that float is 4 bytes and double is 8 bytes


    //char data type
    char e = 'a';
    cout << e << "\n";
    //string data type
    string f = "Hello World";
    cout << f << "\n";
    return 0;
}

//size of all data types
// int = 4 bytes
// long long = 8 bytes
// float = 4 bytes
// double = 8 bytes
// char = 1 byte
// string = depends on the size of string
//Now we have to find out the way for finding teh size of any data type
// we can use sizeof() function to find out the size of any data type
int size(){
    cout << sizeof(int) << "\n";
    cout << sizeof(long long) << "\n";
    cout<< sizeof(float) << "\n";
    cout << sizeof(double) << "\n";
    cout << sizeof(char) << "\n";
    cout << sizeof(string) << "\n";
    return 0;    
    }
