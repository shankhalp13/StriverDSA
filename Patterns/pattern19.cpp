#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size : ";
    cin >> n;

    for (int i = 0; i < 2 * n; i++)
    {
        for (int j = 1; j <= 2 * n; j++)
        {
            if (i < n)
            {
                if (j > n - i && j <= n + i)
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
            else
            {
                if (j > i - n +1  && j < 2*n - (i-n))
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
        }
        cout << endl;
    }

    return 0;
}