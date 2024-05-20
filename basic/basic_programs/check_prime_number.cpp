#include <iostream>
using namespace std;

int main(){
    int n;
    int i = 2;
    bool isPrime = true;

    cout << "Enter number: ";

    cin >> n;

    while(i < n){
        if(n % i == 0){
            isPrime = false;
            break;
        }
        i++;
    }

    if(isPrime){
        cout << n << " is Prime number" << endl; 
    }else{
        cout << n << " is not prime number" << endl;
    }
}