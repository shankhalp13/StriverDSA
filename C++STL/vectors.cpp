#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> v;
    v.push_back(1);
    v.emplace_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> v0(5, 100);

    vector<int> v3(5);

    vector<int> v1(5, 20);

    vector<int> v2(v1);
    cout << v[1] << endl;

    cout << vec[1].first << endl;

    vector<int>::iterator it = v1.begin();

    it++;
    cout << *(it) << " ";
    it = it + 2;
    cout << *(it) << " ";

    vector<int>::iterator it_end = v.end();
    cout << *(it_end) << endl; // will print the space after the last item
    it_end--;
    cout << *(it_end) << endl;

    // vector <int>::iterator it_rend = v.rend();
    // cout << *(it_rend) <<endl;
    // vector <int>::iterator it_rbegin = v.rbegin();
    // cout << *(it_rbegin) <<endl;
    // increment and decrement operation will move in reverse direction

    cout << v.back() << endl; // printing the last elemeny
    cout << "printing through the loop" << endl;

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << "hello" << endl;
        cout << *(it) << endl;
    }

    cout << "printing through the auto" << endl;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }

    cout << "printing through foreach" << endl;
    for (auto it : v)
    {
        cout << it << endl;
    }

    v.erase(v.begin() + 2);
    cout << "After erasing 3rd element" << endl;
    for (auto it : v)
    {
        cout << it << endl;
    }
    v.push_back(3);
    v.erase(v.begin(), v.begin() + 2);
    // in the above erase the deletion starts from the first parameter to the one element before the second parameter
    cout << "After erasing 1st and 2nd element" << endl;
    for (auto it : v)
    {
        cout << it << endl;
    }

    // Insert function
    vector<int> v5(2, 100);
    v5.insert(v5.begin(), 300);
    cout << "Printing through the new inserted vector" << endl;
    for (auto it : v5)
    {
        cout << it << endl;
    }

    v5.insert(v5.begin() + 1, 2, 10);
    // here the first param is the location
    // the second param is the number of numbers
    // third is the number that is to be inserted
    cout << "Printing through the new multiple element inserted vector" << endl;
    for (auto it : v5)
    {
        cout << it << endl;
    }

    vector<int> copy(2, 50);
    v5.insert(v5.begin() + 3, copy.begin(), copy.end());
    cout << "Printing after inserting vector inside another vector" << endl;
    for (auto it : v5)
    {
        cout << it << endl;
    }

    cout << v5.size();

    v5.pop_back();
    cout << "Printing after popping the last element" << endl;
    for (auto it : v5)
    {
        cout << it << endl;
    }

    v1.swap(v0);
    // swapping v1 and v0
    cout << "Printing 1 which had 20 previously" << endl;
    for (auto it : v1)
    {
        cout << it << endl;
    }
    cout << "Printing 1 which had 100 previously" << endl;
    for (auto it : v0)
    {
        cout << it << endl;
    }

    v0.clear();
    cout << "v0 is empty:" <<v0.empty()<<endl;
    cout << "v1 is empty:"<< v1.empty()<<endl;

    return 0;
}