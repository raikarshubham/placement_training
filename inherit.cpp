#include <iostream>
using namespace std;

class Animal{
    public:
    virtual void sound(){
        cout<<"General animal sound..."<<endl;
    }
};

class Dog: public Animal{
    public:
    void sound(){
        cout<<"Woof! Woof!"<<endl;
    }
};

int main(){
    // Animal a;
    // a.sound();
    Dog d;
    d.sound();
    Animal* a=new Dog();
    a->sound();
    return 0;
}