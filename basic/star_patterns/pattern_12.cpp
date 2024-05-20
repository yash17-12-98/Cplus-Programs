#include <iostream>
using namespace std;

// A B C
// D E F
// F G H 

int main(){
    int n;

    cout << "Enter the value of n:";

    cin >> n;

    int i = 1;

    char ch = 'A';

    while(i <= n){
        int j = 1;

        while(j <= n){
            cout << ch << " ";
            ch++;
            j++;
        }

        cout << endl;
        i++;
    }
}