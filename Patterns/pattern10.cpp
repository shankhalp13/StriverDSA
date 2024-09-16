#include <iostream>

using namespace std;

//my personal code
// int main(){
//     int i,j,k=1;
//     int n=5;
//     for(i = 0; i< 2*n-1; i++){
//         if (i < n){
//             for(j=0; j <= i; j++){
//                 cout << "*";
//             }
//             cout << endl;
//         }else{
//             for(j=0; j <= n-k-1; j++){
//                 cout << "*";
//             }
//             cout << endl;
//             k++;
//         }
//     }
//     return 0;
// }

//learned one
int main(){
    int i, j;
    int n = 5;
    for ( i = 1; i <= 2*n-1; i++)
    {
        int stars = i;
        if(i > n ){
            stars = 2*n-i;
        }
        for ( j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;      
    }
}