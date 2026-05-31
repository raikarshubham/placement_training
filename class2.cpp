#include <iostream>
using namespace std;    

class Complex{
    public:
    int real;
    float img;
    Complex(int r,float i){
        real=r;
        img=i;
    }
    Complex& operator+(Complex& rhs){
    this->real=this->real+rhs.real;
    this->img=this->img+rhs.img;
    return *this;
    }
    void print() const {
        cout << real << " + " << img << "i" << endl;
    }
};


int main(){
    Complex num1(15,13.1);
    Complex num2(12,10.1);
    Complex num3=num1+num2;
    num3.print();
    return 0;
}