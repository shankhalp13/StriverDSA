#include <bits/stdc++.h>

using namespace std;

int main()
{

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1); // takes in all the 1's
    ms.insert(1);

    int cnt = ms.count(1);
    cout << cnt << endl; // prints 3

    ms.erase(1); // all 1's are erased
    cnt = ms.count(1);
    cout << cnt << endl; // prints 0

    ms.insert(1);
    ms.insert(1); // takes in all the 1's
    ms.insert(1);

    cnt = ms.count(1);
    cout << cnt << endl; // prints 3

    ms.erase(ms.find(1));//only a single 1 is erased
    cnt = ms.count(1);
    cout << cnt << endl; // prints 2

    ms.insert(1);
    ms.erase(ms.find(1),next(ms.find(1),2));
    cnt = ms.count(1);
    cout << cnt << endl; // prints 1

    return 0;
}