#include <iostream>
using namespace std;

// A B C
// A B C
// A B C

int main(){
    int n;

    cout << "Enter the value of n: ";   

    cin >> n;

    int i = 1;

    while(i <= n){

        int j = 1;
        while(j <= n){
            char ch = 'A' + j - 1;
            cout << ch << " ";
            j++;
        } 
        cout << endl;

        i++;
    }

}