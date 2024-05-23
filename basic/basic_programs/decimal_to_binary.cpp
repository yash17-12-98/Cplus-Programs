#include<iostream>
using namespace std;

// Input: n = 12
// Output: 1100 

// Input: n = 0
// Output: 0

int main(){
    int n;

    cout << "Enter the value of n: ";

    cin >> n;

    int ans = 0;

    int i = 0;

    while(n != 0){
        int bit = n & 1;

     
        ans = (pow(10, i) * bit) + ans;
    

        n = n >> 1;

        i++;

    }

    cout << "Answer: " << ans << endl;

}