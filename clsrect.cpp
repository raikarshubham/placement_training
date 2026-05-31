#include <iostream>
using namespace std;

class Rectangle{
    public:
    float length;
    float breadth;
    Rectangle(float l, float b){
        length=l;
        breadth=b;
    }
    Rectangle& operator+(Rectangle& rhs){
    this->length=this->length+rhs.length;
    this->breadth=this->breadth+rhs.breadth;
    return *this;
    }

    Rectangle operator-(const Rectangle& rhs) const {
        return Rectangle(this->length - rhs.length, this->breadth - rhs.breadth); 
    } 

    void print() const {
        cout << "Length: " << length << ", Breadth: " << breadth << endl;
    }
};

int main() {
    Rectangle r1(10.5, 5.2);
    Rectangle r2(7.8, 3.4);
    Rectangle r3=r1+r2;
    Rectangle r4=r1-r2;
    cout<<"New Length and Breadth after adding r1 and r2: "<<endl;
    r3.print();
    cout<<"New Length and Breadth after subtracting r1 and r2: "<<endl;
    r4.print();
    return 0;
}