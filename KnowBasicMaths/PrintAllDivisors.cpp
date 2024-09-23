#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int number, lastNumber, i;
    cout << "Enter the number to be checked:" << endl;
    cin >> number;

    cout << "The divisors of " << number << " are ";
    // Brute Force Method
    //  for(i=1; i<=number/2;i++){
    //      if(number%i == 0){
    //          cout << i<<", ";
    //      }
    //  }
    //  cout << number<<"."<<endl;

    // Optimized Method
    vector <int> ls;
    for (i = 1; i <= i*i<= number; i++)
    {
        if (number % i == 0)
        {
            ls.push_back(i);
            if (number / i != i)
            {
                ls.push_back(number/i);
            }
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it : ls){
        cout << it<<" ";
    }
    return 0;
}