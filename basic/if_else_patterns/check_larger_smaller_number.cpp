#include <iostream>
using namespace std;

int main(){
    int a, b;

    cout << "Enter 2 numbers: "<< endl;

    cin >> a >> b;

    if(a < b){
        cout << b << " is larger than " << a << endl;
    }else {
         cout << a << " is larger than " << b << endl;
    }
}