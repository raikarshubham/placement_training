#include <iostream>
using namespace std;

// auto sum(auto a, auto b){
//     return a+b;
// }

int main(){
    // cout<<sum(3,45.5);
    // return 0;
    int arr[3] = {11,12,13};
    for(int i=0; i<2; i++){
        if(arr[i] == 12){
            cout<<"Found at index: "<<i<<" (position: "<<i+1<<")"<<endl;
        }
    }
}
