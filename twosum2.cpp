#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr={2,4,5,7,9};
    int target=7;
    int n=arr.size();
    int l=0,r=n-1;
    
    while(l<r){
        int sum=arr[l]+arr[r];
        if(sum<target){
            l++;
        }
        else if(sum>target){
            r--;
        }
        else{
            cout<<l+1<<","<<r+1;
            break;
        }
    }
    return 0;
}