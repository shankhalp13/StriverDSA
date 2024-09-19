#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the pattern: ";
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n; j++)
        {
            // cout << "*";
            if (i <= n)
            {
                if (j <= i || j > 2 * n - i)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            else
            {
                if (j <= 2 * n - i || j > i)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}