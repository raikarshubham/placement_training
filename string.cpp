#include <iostream>
using namespace std;

int finds(string str, char l){
    int val;
    for(int i=0;i<str.size();i++){
        if(str[i]==l){
            val=i;
            break;
        }
    }
    return val;
}

string sub_str(string str, int start, int end)
{
    string result = "";
    for (int i = start; i < end; i++)
    {
        result += str[i];
    }
    return result;
}

string appends(string str1,string str2){
    string new1=str1+str2;
    return new1;
}
int main()
{
    string name,dept,classr;
    cout<<"Enter your name, department and class room: ";
    getline(cin,name);
    getline(cin,dept);
    getline(cin,classr);
    cout<<"Your name is "<<name<<endl;
    cout<<"Your department is "<<dept<<endl;
    cout<<"Your class room is "<<classr<<endl;
    string name_substring=sub_str(name,0,3);
    cout<<"First three characters of your name is "<<name_substring<<endl;
    int name_finds=finds(name,'h');
    cout<<"First occurance of letter h in your name is at index "<<name_finds<<endl;
    string appended_string=appends(name,dept);
    cout<<"Appended string of name and department is "<<appended_string<<endl;
}