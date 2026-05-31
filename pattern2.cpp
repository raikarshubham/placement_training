#include <iostream>
using namespace std;

void printfull(int n){
    for(int i=1;i<=n;i++){
        cout<<"*";
    }
}
void printhalf(int n){
    for(int i=1;i<=n;i++){
        if(i==1 || i==n){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
}

int main() {
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i==1||i==n){
            printfull(n);
            cout<<endl;
        }
        else{
            printhalf(n);
            cout<<endl;
        }
    }


    //int sp=3;
    
// void full(){
//     for(int i=1; i<=1; i++){
//         for(int j=n;j<=n; j++){
//             cout<<"*";
//         }
//         for(int j=1;j<=sp; j++){
//             cout<<" ";
//         }
//         for(int j=n;j<=n; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
}