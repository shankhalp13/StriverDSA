#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            char print = 'A' + (i-1);
            cout << print << " ";
        }
        cout << endl;
    }
    return 0;
}