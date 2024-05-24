#include <iostream>
using namespace std;

int main(){
    int a, b;
    char operation;

    cout << "Enter first value: ";

    cin >> a;

    cout << "Enter second value: ";

    cin >> b;

    cout << "Enter your operation: ";

    cin >> operation;

    switch (operation){

        case '+' : cout << "Answer: " << (a + b) << endl;
                    break;

        case '-' : cout << "Answer: " << (a - b) << endl;
                    break;

        case '/' : cout << "Answer: " << (a / b) << endl;
                    break;

        case '*' : cout << "Answer: " << (a * b) << endl;
                    break;
       
                    
        default : cout << "Enter valid operation" << endl;

    }

}