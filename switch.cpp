#include <iostream>
using namespace std;

int main() {
    int com;
    cout<<"enter case: \n1. Register\n2. Login\n3. Admin Login\n4. Logout\n5. Exit\n";
    cin>>com;
    string username,password,email;
    switch (com)
    {
    case 1:
        cout<<"REGISTER"<<endl;
        cout<<"enter username: ";
        cin>>username;
        cout<<"enter email: ";
        cin>>email;
        cout<<"enter password: ";
        cin>>password;
        cout<<"Registration Successful";
        break;
    
    case 2:
        cout<<"LOGIN"<<endl;
        cout<<"enter username: ";
        cin>>username;
        cout<<"enter password: ";
        cin>>password;
        cout<<"Login Successful";
        break;
        
    case 3:
        cout<<"ADMIN LOGIN"<<endl;
        cout<<"enter username: ";
        cin>>username;
        cout<<"enter password: ";
        cin>>password;
        cout<<"Admin Login Successful";
        break;

    case 4:
        cout<<"LOGOUT"<<endl;
        cout<<"Logout Successful";
        break;
    
    case 5:
        exit;
    default:
        break;
    }
    return 0;
}

