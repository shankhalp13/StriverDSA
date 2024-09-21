#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,count;
    
    cout << "Enter the digit:" <<endl;
    cin >> n ; 
    count = (int)(log10(n)+1); 
    // for ( count = 0; n!=0; count++)
    // {
    //     n = n / 10;
    // }
    cout<< count <<endl;
}

//another method
// int count = (int)(log10(n)+1); 