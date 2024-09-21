#include <bits/stdc++.h>

using namespace std;

int main(){
    //set is unique and sorted
    set<int> st;
    st.insert(1);
    st.emplace(2);

    st.insert(2);
    st.insert(4);
    st.insert(3);

    // auto it = st.find(3); //returns the location

    auto it = st.find(6); //returns the end

    st.erase(5); //erases 5

    int cnt = st.count(1); // either 0 or 1

    auto it0 = st.find(3);
    st.erase(it);

    //{1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2);

    auto it3 = st.lower_bound(2);//need to check the video
    auto it4 = st.upper_bound(3);

    return 0; 
}