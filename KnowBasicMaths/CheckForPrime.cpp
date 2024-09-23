#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int n, lastNumber, i;
    cout << "Enter the number to be checked for prime:" << endl;
    cin >> n;
    // Brute Force Method
    //  for(i=2; i<=n/2;i++){
    //      if(n%i == 0){
    //          cout << n<<" is not a prime number. ";
    //          return 0;
    //      }
    //  }
    //  cout << n<<" is a prime number."<<endl;

    // return 0;

    //Optimized Approach
    for(i=2; i*i<=n;i++){
         if(n%i == 0){
             cout << n<<" is not a prime number. ";
             return 0;
         }
     }
     cout << n<<" is a prime number."<<endl;

    return 0;
}