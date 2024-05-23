#include<iostream>
using namespace std;

// Input: n = 234
// Output: 15 
// Explanation: 
// Product of digits = 2 * 3 * 4 = 24 
// Sum of digits = 2 + 3 + 4 = 9 
// Result = 24 - 9 = 15

int main(){
    int n;

    cout << "Enter the value of n: ";

    cin >> n;

    int sum = 0;
    int prod = 1;

    while(n != 0){
        int digit = n % 10;

        sum = sum + digit;
        prod = prod * digit;

        n = n/10;
    }

    int answer = prod - sum;

    cout << "Answer: " << answer << endl;

}