#include <iostream>
using namespace std;

int main(){
    int rev=0;
    int num;
    cout<<"Enter the Number: "<<endl;
    cin>>num;
    int temp=num;
    while(num>0){
        int digit=num % 10;
        rev=(rev*10)+digit;
        num=num/10;
    }
    cout<<rev<<endl;
    if(temp==rev){
        cout<<"The Number "<<temp<< " is Palindrome";
    }
    else{
        cout<<"The Number "<<temp<< " is not Palindrome";
    }
    return 0;
}