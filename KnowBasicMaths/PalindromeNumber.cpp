#include <bits/stdc++.h>

using namespace std;

int main()
{
    long x, revNumber=0, actualNumber;
    cout << "Enter the number:" << endl;
    cin >> x;
    actualNumber = x;
    if (x < 0)
    {
        cout << "Number " << x << " is not a palindrome." << endl;
    }
    else
    {
        while (x != 0)
        {
            revNumber = (revNumber * 10) + (x % 10);
            x = x / 10;
        }
        if (actualNumber == revNumber)
        {
            cout << "Number " << actualNumber << " is a palindrome." << endl;
        }
        else
        {
            cout << "Number " << actualNumber << " is not a palindrome." << endl;
        }
    }

    return 0;
}