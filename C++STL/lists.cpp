#include <bits/stdc++.h>

using namespace std;

int main(){

    list <int> ls;
    ls.push_back(2); 
    ls.emplace_back(4); 
    ls.push_front(1); 
    ls.emplace_front(4);
    //rest of the functions same as vector

    for (auto it = ls.begin(); it !=ls.end() ; it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for (auto it : ls )
    {
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}