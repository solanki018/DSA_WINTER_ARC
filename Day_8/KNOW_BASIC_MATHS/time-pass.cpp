#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) { // Complete your method here
        int ans = 0;

        while (x != 0) {
            int digit = x % 10;  //return the last digit of the number

            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > 7)) 
//digit>7 because the last digit of INT_MAX is 7

            return 0; 

            if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && digit < -8)) 


//digit<-8 because the last digit of INT_MIN is 8


               return 0; 

//the first iteration 

//The maximum value of an INT_MAX: 2147483647 //10
//The minimum value of an INT_MIN: -2147483648 //10

            ans = ans * 10 + digit;
            x = x / 10;

//the first iteration the code is 0*10+7=7
//the second iteration the code is 7*10+4=74
//the third iteration the code is 74*10+1=741
//and so on until the last iteration
//the last iteration the code is 214748364*10+7=2147483647
//it will check last digit of the number and return 0 if the last digit is greater than 7 
//or less than -8 beacuse the last digit of INT_MAX is 7 and the last digit of INT_MIN is 8
        }
        
        return ans;
    }
};

int main() {
    Solution sol;
    int x = 123;
    cout << sol.reverse(x) << endl;
    return 0;
}
