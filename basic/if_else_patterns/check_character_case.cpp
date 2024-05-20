#include <iostream>
using namespace std;

int main(){
    char ch;

    cout << "Enter any character: ";

    cin >> ch;

    if(ch >= 'a' && ch <= 'z'){
        cout << "This is Lowercase" << endl;
    }else if (ch >= 'A' && ch <= 'Z'){
        cout << "This is Uppercase" << endl;
    }else if (ch >= '1' & ch <= '9'){
        cout << "This is Numeric" << endl;
    }
}