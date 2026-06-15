#include<iostream>
using namespace std;

class student {
public:
    int roll;
    float marks;
};

int main() {
    student S1;   // object
    S1.roll = 102;
    S1.marks = 89.9;

    cout << S1.roll << endl;
    cout << S1.marks << endl;

    return 0;
}