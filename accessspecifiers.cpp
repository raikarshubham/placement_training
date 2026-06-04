#include <iostream>
#include <string>
using namespace std;

class Person{
    string status;
};
class Admin:public Person{
    protected:
        string name;
        string password;
};
class Admin2:public Admin{

};
int main(){
    Admin2 obj;
    // obj.name="Admin"; // Error: 'name' is a protected member of 'Admin'
    // obj.password="admin123"; // Error: 'password' is a protected member of 'Admin'
    return 0;
}