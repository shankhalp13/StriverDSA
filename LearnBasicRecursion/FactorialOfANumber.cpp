#include <bits/stdc++.h>

using namespace std;

//Parameterized Method
// void factorial(int n, int factorialNumber){
//     if(n == 1){
//         cout << "Factorial of " << n << " is " << factorialNumber<<endl;
//         return ;
//     }
//     factorialNumber = factorialNumber * n;
//     factorial(n-1,factorialNumber);
// }
// int main(){
//     int n;
//     cout << "Enter the number n:";
//     cin >> n;
//     factorial(n,1);
// }

//

int factorial(int n)
{
    if(n == 1){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int n;
    cout << "Enter the number n:";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}