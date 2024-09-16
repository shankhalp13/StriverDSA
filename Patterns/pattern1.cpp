#include <iostream>  // Include the input-output stream library
using namespace std;
int main() {
    int i,j;
    int n=5;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cout << "*";
        }
        cout << endl;  // Add a new line after each row
    }
    return 0; 
}
