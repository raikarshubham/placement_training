
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    for (int i = 0; i < 11; i++) {
        int randomNumber = rand()% 100 + 1;  // Random number from 1 to 100
        cout << randomNumber << endl;
    }
    return 0;
}
