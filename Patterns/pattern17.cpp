#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the size of the pyramid: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        char ch = 'A';
        for (int j = 1; j <= 2*n - 1; j++) {
            if(j <= n-i || j >= n + i){
                cout << " ";
            }else{
                cout << ch;
                if(j < n){
                    ch++;
                }else{
                    ch--;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
