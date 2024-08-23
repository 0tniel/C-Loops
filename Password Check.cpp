// Otniel Jhirad
// 23070123069
// ENTC A3

#include<iostream>
using namespace std;

int main() {
    string pass = "sit";
    string input;

    cout << "Pls Enter Your Password: ";
    cin >> input;

    while(true) {
        if(pass == input) {
            cout << "System Unlocked";
            break;
        } else {
            cout << "Pls Enter Again: ";
            cin >> input;
        }
    }

    return 0;
}
/*
Output
Pls Enter Your Password: Hello
Pls Enter Again: sit
System Unlocked
*/
