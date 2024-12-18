#include <bits/stdc++.h>
using namespace std;

int evenlyDivides(int n) {
    int a=n;
    int cnt=0;
       
        int m;
    while(n>0){
            m=n%10;
            cnt = cnt*10+m;
              if (cnt > INT_MAX / 10 || (cnt == INT_MAX / 10 && m > 7))  //2147483647 
                return 0; 
            if (cnt < INT_MIN / 10 || (cnt == INT_MIN / 10 && m < -8))  //-2147483648
               return 0;

            n=n/10;
    }
    return cnt;
}
int main(){
   int n=206;
        cout << evenlyDivides(n) << endl;
    
}