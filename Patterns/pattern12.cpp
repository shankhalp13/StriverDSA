#include <iostream>

using namespace std;

int main(){
    int i,j;
    int n = 5;

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < 2*n; j++)
        {
            if(j>i && j< 2*n - (i+1)){
                cout << " ";
            }
            else{
                if(j<n){
                    cout << j+1;
                }
                else{
                    cout << 2*n - (j);
                }
            }
        }
        cout << endl;
    }
}