#include <iostream>
#include <vector>
using namespace std;

class Queue {
    vector<int> v;

public:
    void enqueue(int x) {
        v.push_back(x);
    }

    void dequeue() {
        if (v.empty()) {
            cout << "Queue is empty\n";
            return;
        }
        v.erase(v.begin());   // removes front element
    }

    int front() {
        if (v.empty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return v[0];
    }

    void display() {
        if (v.empty()) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Queue elements: ";
        for (int x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();

    q.display();

    cout << "Front element: " << q.front() << endl;

    return 0;
}