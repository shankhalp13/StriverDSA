#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<int, int> mpp1;            // Key and value both are integers
    map<int, pair<int, int>> mpp2; // Key is int, value is a pair<int, int>
    map<pair<int, int>, int> mpp3; // Key is a pair<int, int>, value is an int

    // Storing values in the maps
    mpp1[1] = 2;
    mpp1.emplace(3, 1);
    mpp1.insert({2, 4});

    mpp2[2] = {3, 10};
    mpp3[{2, 3}] = 10;

    // Printing mpp1
    cout << "mpp1:" << endl;
    for (auto it : mpp1)
    {
        cout << it.first << " " << it.second << endl;
    }

    // Printing mpp2
    cout << "mpp2:" << endl;
    for (auto it : mpp2)
    {
        cout << it.first << " -> (" << it.second.first << ", " << it.second.second << ")" << endl;
    }

    // Printing mpp3
    cout << "mpp3:" << endl;
    for (auto it : mpp3)
    {
        cout << "(" << it.first.first << ", " << it.first.second << ") -> " << it.second << endl;
    }

    auto it = mpp1.find(3);
    cout << it->second << endl;

    auto it_lower = mpp1.lower_bound(2); // lowerbound means the value passed is the minimum threshold 
    auto it_upper = mpp1.upper_bound(2); // upperbound means the value passed is the maximum threshold 

    // Print lower_bound
    cout << "Lower bound for key 2: ";
    if (it_lower != mpp1.end())
    {
        cout << "(" << it_lower->first << ", " << it_lower->second << ")" << endl;
    }
    else
    {
        cout << "Key not found" << endl;
    }

    // Print upper_bound
    cout << "Upper bound for key 2: ";
    if (it_upper != mpp1.end())
    {
        cout << "(" << it_upper->first << ", " << it_upper->second << ")" << endl;
    }
    else
    {
        cout << "Key not found" << endl;
    }

    return 0;
}
