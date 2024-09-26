#include <bits/stdc++.h>

using namespace std;

//Normal Method
// bool isPalindrome(string str){
//     int left = 0;
//     int right = str.length() - 1;

//     while (left < right)
//     {
//         if(!isalnum(str[left])){
//             left++;
//         }
//         else if(!isalnum(str[right])){
//             right--;
//         }
//         else if(tolower(str[left]) != tolower(str[right])){
//             return false;
//         }
//         else{
//             left++;
//             right--;
//         }
//     }
//     return true;
// }

//Recursive Method 1
// bool ans = isPalindrome(str,0,str.length()-1);

// bool isPalindrome(string str, int start, int end)
// {
//     if (start >= end)
//         return true;
//     if (!isalnum(str[start]))
//     {
//         start++;
//         return isPalindrome(str, start, end);
//     }
//     else if (!isalnum(str[end]))
//     {
//         end--;
//         return isPalindrome(str, start, end);
//     }
//     else if (tolower(str[start]) != tolower(str[end]))
//     {
//         return false;
//     }else{
//         start++;
//         end--;
//         return isPalindrome(str, start, end);
//     }
// }

// Recursive Method 2
bool isPalindrome(int i, string str)
{
   if(i >= str.length()-1) return true;

   if(str[i]!=str[str.length()-1-i]) return false;
   
   return isPalindrome(i+1, str);
}

int main(){
    // string str = "A man, a plan, a canal: Panama";
    string str = "madam";

    bool ans = isPalindrome(0,str);

    if(ans == true){
        cout << "The string is a palindrome." << endl;
    }
    else{
        cout << "The string is not a palindrome." << endl;
    }
}