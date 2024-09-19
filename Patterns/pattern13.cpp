#include <iostream>

using namespace std;

int main(){
    int i,j;
    int n = 5;
    int flag = 1;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= i ; j++)
        {
            cout << flag <<" ";
            flag++;
        }
        cout <<endl;
    }
    
}