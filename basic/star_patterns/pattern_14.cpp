#include <iostream>
using namespace std;

// 4
// 3 4
// 2 3 4
// 1 2 3 4

int main(){

    int n;

    cout << "Enter the value of n: ";

    cin >> n;

    int i = 1;

    while(i <= n){
        int j = 1;
        int start = n - i + 1; 

        while(j <= i){
            cout << start << " ";
            start++;
            j++; 
        }
        cout << endl;
        i++;
    } 

}