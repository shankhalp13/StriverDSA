#include <bits/stdc++.h>

using namespace std;

int counter = 0;
int print(){
    if(counter == 3) return 0;
    cout << counter+1<<endl;
    counter++;
    print();
    return 0;

}
int main(){
    print();
}