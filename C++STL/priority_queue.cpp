#include <bits/stdc++.h>

using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(5); //{5}
    pq.push(2);//{5,2}
    pq.push(8);//{8,5,2}
    pq.emplace(10);//{10,8,5,2}

    cout<< pq.top(); // 10

    pq.pop(); //{8,5,2}

    cout << pq.top() << endl;

    priority_queue <int, vector<int>, greater<int>> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    cout <<pq.top();
    return 0; 
}