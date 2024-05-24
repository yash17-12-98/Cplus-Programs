#include <iostream>
using namespace std;

// Input: n = 5
// Output: 2
// Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.

// Input: n = 7
// Output: 0
// Explanation: 7 is "111" in binary, with complement "000" in binary, which is 0 in base-10.

// int main(){
//     int n;
//     cout << "Enter the value of n: ";

//     cin >> n;

//     int m = n;

//     int mask = 0;

//     while(m != 0){
//         mask = (mask << 1) | 1;
//         m = m >> 1;
//     }

//     int ans = (~n) & mask;

//     cout << "Answer: " << ans << endl;
// }

int main(){
    int n;

    cout << "Enter the value of n: ";

    cin >> n;

    if(n == 0){
          cout << "Answer: " << 1 << endl;
          return 1;
    }

    int x = 1;

    while(x <= n){
        n = n ^ x;
        x = x << 1;
    }

    cout << "Answer: " << n << endl;
}