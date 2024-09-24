#include <bits/stdc++.h>

using namespace std;
int print(int i,int n)
{
    if (i > n)
    {
        cout << endl;
        return 0;
    }
    cout << i << " ";
    print(i+1,n);
    return 0;
}
int main()
{
    int n;
    cout << "Enter the number n:";
    cin >> n;
    print(1,n);
}