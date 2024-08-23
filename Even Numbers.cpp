//Otniel Jhirad
//23070123069
//ENTC A3
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the upper limit: ";
    cin >> n;

    for(int a = 0; a <= n; a++) {
        if(a % 2 == 0) {
            cout << "Even number: " << a << endl;
        }
    }

    return 0;
}
/*
Output
Enter the upper limit: 5
Even number: 0
Even number: 2
Even number: 4
*/
