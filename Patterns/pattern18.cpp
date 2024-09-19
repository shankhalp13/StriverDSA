#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the size of the pyramid: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        // for (int j = 1; j <= i; j++) {
        //     char print = 'A' + n - (i-j) - 1;
        //     cout << print;
        // }

        for (char ch = 'E'- i ; ch <= 'E'; ch++)
        {
            cout << ch;
        }
        
        cout << endl;
    }
    return 0;
}