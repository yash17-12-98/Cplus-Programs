#include <iostream>
using namespace std;

// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

// Input: x = 123
// Output: 321

int main(){

    int n;

    cout << "Enter the value of n: ";

    cin >> n;

    int ans = 0;

    while(n != 0){

        int digit = n % 10;

        //Edge Case
        if((ans > INT_MAX / 10) || (ans < INT_MIN / 10 )){
            return;
        }

        ans =  ans * 10 + digit;

        cout << ans << endl;

        n = n / 10;

    }

    cout << "Answer: " << ans << endl;
}