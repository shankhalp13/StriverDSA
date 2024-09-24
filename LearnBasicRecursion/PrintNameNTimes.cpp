#include <bits/stdc++.h>

using namespace std;
int counter = 0;
int print(string name, int n){
    if(counter == n) return 0;
    cout << name << endl;
    counter++;
    print(name,n);
    return 0;
}
int main(){
    string name;
    int n;
    cout << "Enter the name:";
    cin >> name;
    cout << "Enter the number of times to print:";
    cin >> n;
    print(name,n);
}