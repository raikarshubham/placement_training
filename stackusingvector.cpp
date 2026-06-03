#include <iostream>
#include <vector>
using namespace std;

class Stack {
    vector<int> v;

public:
    void push(int data) {
        v.push_back(data);
    }

    void pop() {
        if (!v.empty())
            v.pop_back();
    }

    int top() {
        if (!v.empty())
            return v.back();
        return -1; 
    }

    bool empty() {
        return v.empty();
    }

    void display() {
        for (int i = v.size() - 1; i >= 0; i--) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl;
    
    cout << "Stack elements: ";

    s.display();

    s.pop();

    cout << "Top element after pop: " << s.top() << endl;

    cout << "Stack elements: ";

    s.display();

    return 0;
}