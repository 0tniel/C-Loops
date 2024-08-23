#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;

    int i, j;
    int k = n;

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            if(j >= k) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        k--;
        cout << "\n";
    }

    return 0;
}
/*
Output
Enter the number of lines: 5
    *
   **
  ***
 ****
*****
*/
