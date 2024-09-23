#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, n1, n2,temp;
    vector<int> n1ls;
    vector<int> n2ls;

    cout << "Enter the two numbers to find the GDP for:" << endl;
    cin >> n1 >> n2;
    // BRUTE FORCE METHOD
    // int GCD = 0;
    // for ( i = 1; i <=min(n1,n2); i++)
    // {
    //     if(n1%i == 0 && n2%i == 0){
    //         if(i>GCD){
    //             GCD =i;
    //         }
    //     }
    // }
    // cout << "The GCD of " << n1 << " and " << n2 << " is: " << GCD << endl;
    // return 0; 
    
    //OPTIMIZED METHOD
    int a = n1;
    int b=n2;
    while(a!=0){
        temp = a;
        a = b%a;
        b = temp;
    }
    
    cout << "The GCD of " << n1 << " and " << n2 << " is: " << b << endl;
    return 0;
}