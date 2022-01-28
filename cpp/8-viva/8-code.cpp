#include<iostream>
using namespace std;

int main(){
    int ascii;

    cout << "Enter an ASCII value: ";
    cin >> ascii;

    if((ascii <= 10) && (ascii >= 0)){
        cout << "Ascii value is : " << ascii << endl;
    }
    else {
        cout << "Character at this ascii is : " << (char)ascii << endl;
    }

    return 0;
}
