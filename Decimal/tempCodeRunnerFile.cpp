#include<iostream>
#include<string>
using namespace std;
int main(){
    string accountHolder = "Yash Chaudhary";
    double accountBalance = 3741.01;
    long long accountNumber = 281412010001975;
    bool isActive = true;

    cout<<"The Account Holder is: Mr. "<<accountHolder<<endl;
    cout<<"The Account Number is: "<<accountNumber<<endl;
    cout<<"Balance for account number "<<accountNumber<<" is "<<accountBalance<<endl;
    cout<<"Account status: "<<(isActive? "Yes" : "No")<<endl;

    return 0;
}