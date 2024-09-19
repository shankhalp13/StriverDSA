#include <bits/stdc++.h>

using namespace std;

int main(){

    deque <int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(3);

    dq.pop_back();
    dq.pop_front();

    //printing the last element 
    cout<< dq.back()<<endl;
    
    //printing the first element
    cout << dq.front()<<endl;

    for (auto it = dq.begin(); it !=dq.end() ; it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for (auto it : dq )
    {
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}