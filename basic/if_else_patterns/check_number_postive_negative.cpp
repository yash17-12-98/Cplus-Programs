#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter the value: ";

    cin >> n;

    if(n < 0){
        cout << "Number is negative" << endl;
    }else{
        cout << "Number is positive" << endl;
    }

}