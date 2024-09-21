#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int,int> p1,pair<int,int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    if(p1.first>=p2.first) return true;
    return false;
}
int main(){
    int a[]={1,43,2,3,1,2};
    int i;
    int n = sizeof(a) / sizeof(a[0]); // Get the number of elements
    sort(a, a+n);
    for ( i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }

    //sort(v.begin(),v.end());  //for vectors

    //{1,3,5,2}
    //sort(a+2,a+4); //If i wanter to sort just 5 and 2

    //to sort in descending order

    sort(a,a+n, greater<int>());
    for ( i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }

    pair <int,int> arr[] = {{1,2},{2,1},{4,1}};
    //sort it according to the second element
    //if second element is same then sort
    //according to the first element but in descending

    sort(arr,arr+3,comp);

    int num1 = 7;
    int cnt1 = __builtin_popcount(num1); // return number of set bits or 1's in dec num
    cout << cnt1 <<endl;

    long long num2 = 29834722893;
    int cnt2 = __builtin_popcountll(num2);
    cout << cnt2 <<endl;

    string s = "123";

    do{
        cout << s << endl;
    }while(next_permutation(s.begin(),s.end()));//gives next arrangement of chars
    //123 will have 6 arrangements but 231 willl have only 3
    // the permutation works in a certain order so the input should be in sorted before passing it
    int maxi = *max_element(a,a+n); 
    cout << maxi<<endl;

}
