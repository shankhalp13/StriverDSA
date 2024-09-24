#include <bits/stdc++.h>

using namespace std;

void print(int n){
    if(n < 1) return ;
    cout << n << " ";
    print(n-1);
}
int main(){
    int n;
    cout<<"Enter the number n:";
    cin >> n;
    print(n);
    cout<<endl;
}