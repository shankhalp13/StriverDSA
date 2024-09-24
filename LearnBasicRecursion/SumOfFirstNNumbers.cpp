#include <bits/stdc++.h>

using namespace std;
// int sum = 0;
// void print(int n){
//     if(n < 1) return ;
//     sum = sum+n;
//     print(n-1);
//     return;
// }
// int main(){
//     int n;
//     cout<<"Enter the number n:";
//     cin >> n;
//     print(n);
//     cout<<"Sum is "<<sum <<endl;
// }


//Another Method I though which I learned using Prolog
int sum(int n){
    if(n==1) return 1;
    return (sum(n-1)+n);
}

int main(){
    int n,total;
    cout<<"Enter the number n:";
    cin >> n;
    total = sum(n);
    cout<<"Sum is "<<total <<endl;
}