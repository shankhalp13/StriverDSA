#include <bits/stdc++.h>

using namespace std;

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);

    cout << st.top();
    st.pop();

    cout << st.top();

    cout << st.size();

    cout << st.empty();


    stack<int> st1,st2;
    st1.swap(st2);

    return 0; 
}