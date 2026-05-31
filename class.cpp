#include <iostream>
using namespace std;

class fruit{
    public:
    int apple,banana;
    // fruit(int value){
    //     apple=value;
    // } 
    fruit(int value):apple(value){
        
    }
    ~fruit(){

    }
};
int main(){
    fruit a(10);
    cout<<a.apple<<endl;
}