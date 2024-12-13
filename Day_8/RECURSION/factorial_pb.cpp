#include <bits/stdc++.h>
using namespace std;


vector<long long> factorialNumbers(long long n,long long current = 1, long long fact = 1) {
          // Base case: Stop when factorial exceeds n
            if (fact > n) {
                    return {}; // Return an empty vector
            }
            // Recursive call to calculate the remaining factorial numbers
            vector<long long> result = factorialNumbers(n, current + 1, fact * (current + 1));

            // Add the current factorial to the result
            result.insert(result.begin(), fact);
            return result;
        
    }


int main() {
    long long n = 120; // Example input
    vector<long long> result = factorialNumbers(n);

    // Print the factorial numbers
    cout << "Factorial numbers <= " << n << " are:" << endl;
    for (long long num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}



//for the factorial problem by recursion, the code should be like this:
/*
int factorial(n)
{
   if(n == 0)
   {
     return 1;
   }

return n * factorial(n-1);

}

main()
{
   input(n);
   factorial(n);

}
*/