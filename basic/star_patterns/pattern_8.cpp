#include <iostream>
using namespace std;

// 1
// 2 3
// 3 4 5
// 4 5 6 7

// int main(){

    // int n;

    // cout << "Enter the value of n: ";

    // cin >> n;

    // int i = 1;

   
    //    while(i <= n){
    //     int j = 1;

    //     int count = i;

    //     while(j <= i){
    //         cout << count << " ";
    //         count++;
    //         j++;
    //     }

    //     cout << endl;

    //     i++;
    // }


// }

// ===================== Another Solution =====================


int main(){

    int n;

    cout << "Enter the value of n: ";

    cin >> n;

    int i = 1;

   
       while(i <= n){
        int j = 1;

        while(j <= i){
            cout << i+j-1 << " ";
            
            j++;
        }

        cout << endl;

        i++;
    }


}
