#include <bits/stdc++.h>

using namespace std;

int main(){
    int number,lastNumber;
    cout << "Enter the number to be checked for armstrong number:" << endl;
    cin >> number;
    int numberofDigits = log10(number)+1;
    int originalNumber = number;
    int armstrongSum = 0;
    while(number > 0){
        lastNumber = number%10;
        armstrongSum += pow(lastNumber, numberofDigits);
        number/=10;
    }
    if(originalNumber == armstrongSum){
        cout << originalNumber << " is an Armstrong number." << endl;
    }else{
        cout << originalNumber << "is not an Armstrong Number" <<endl;
    }
    return 0;
}