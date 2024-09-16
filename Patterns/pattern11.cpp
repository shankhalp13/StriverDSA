#include <iostream>

using namespace std;

// my personal code
// int main()
// {
//     int i, j, next;
//     int n = 5;
//     int flag = 1;
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             if (j == 1 && flag == 1)
//             {
//                 cout << "1";
//                 next = 0;
//             }
//             else if (j == 1 && flag == 0)
//             {
//                 cout << "0";
//                 next = 1;
//             }
//             else
//             {
//                 if (next == 0)
//                 {
//                     cout << "0";
//                     next = 1;
//                 }
//                 else
//                 {
//                     cout << "1";
//                     next = 0;
//                 }
//             }
//         }
//         cout << endl;
//         if (flag == 1)
//         {
//             flag = 0;
//         }
//         else
//         {
//             flag = 1;
//         }
//     }
//     return 0;
// }

int main()
{
    int i,j;
    int n = 5;
    int start = 1;

    for ( i = 0; i < n; i++)
    {
        if (i % 2 == 0) 
        {
            start = 1;
        }else{
            start = 0;
        }
        for ( j = 0; j <= i; j++)
        {
            cout << start;
            start =!start;
        }
        cout <<endl;
    }
    
}