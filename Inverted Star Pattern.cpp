//Otniel Jhirad
//23070123069
//ENTC A3
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;

    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
/*
Output
Enter the number of lines: 5
*****
****
***
**
*

*/
