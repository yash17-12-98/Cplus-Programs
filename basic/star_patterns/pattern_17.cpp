#include <iostream>
using namespace std;

// * * * * 
// * * * 
// * * 
// * 

int main(){
    int n;

    cout << "Enter the value of n:";

    cin >> n;

    int i = 1;

    while(i <= n){
        int j = n;

        while(j >= i){
            j--;
            cout << "* ";
        }
        cout << endl;
        i++;
    
    }
}