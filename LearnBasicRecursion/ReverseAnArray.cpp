#include <bits/stdc++.h>

using namespace std;

// Solution 1 TC & SC both O(n)
//  int main(){
//      int n,i;
//      cout << "Enter the number of elements:";
//      cin >> n;
//      int arr[n];
//      int aux[n];
//      for (i = 0; i < n; i++)
//      {
//          cout << "Enter element " << i + 1 << ": ";
//          cin >> arr[i];
//      }
//      i=0;
//      for (int j = n-1; j >= 0; j--)
//      {
//          aux[i] = arr[j];
//          i++;
//      }

//     cout << "Reversed array is: ";
//     for (i = 0; i < n; i++)
//     {
//         cout << aux[i] << " ";
//     }
//     cout <<endl;
//     return 0;
// }

// Solution 2 TC - O(n) & SC - O(1)
// int main()
// {
//     int n, i;
//     cout << "Enter the number of elements:";
//     cin >> n;
//     int arr[n];
//     int front = 0;
//     int back = n - 1;
//     for (i = 0; i < n; i++)
//     {
//         cout << "Enter element " << i + 1 << ": ";
//         cin >> arr[i];
//     }

//     for (int i = 0; i < n / 2; i++)
//     {
//         // int temp = arr[front];
//         // arr[front] =arr[back];
//         // arr[back] = temp;
//         swap(arr[front],arr[back]);
//         front++;
//         back--;
//     }

//     cout << "Reversed array is: ";
//     for (i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// Solution 3 Recursive method
// void reverse(int arr[], int start, int end)
// {
//     if (start < end)
//     {
//         swap(arr[start], arr[end]);
//         reverse(arr, start + 1, end - 1);
//     }
// }
// int main()
// {
//     int n, i;
//     cout << "Enter the number of elements:";
//     cin >> n;
//     int arr[n];
//     int front = 0;
//     int back = n - 1;
//     for (i = 0; i < n; i++)
//     {
//         cout << "Enter element " << i + 1 << ": ";
//         cin >> arr[i];
//     }

//     reverse(arr, front, back);
//     cout << "Reversed array is: ";
//     for (i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

//Solution 4 
int main()
{
    int n, i;
    cout << "Enter the number of elements:";
    cin >> n;
    int arr[n];
    int front = 0;
    int back = n - 1;
    for (i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    reverse(arr, arr+n); //  predefined function of c++
    cout << "Reversed array is: ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
