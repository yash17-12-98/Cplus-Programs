#include <iostream>
using namespace std;

// D
// C D
// B C D
// A B C D

int main(){

    int n;

    cout << "Enter the value of n: ";

    cin >> n;

    int i = 1;

    while(i <= n){

        int j = 1;
        char ch = 'A' + n - i;
        
        while(j <= i){
            
            cout << ch <<  " ";

            ch++;
            j++;

        }

        cout << endl;
        i++; 
    }

}