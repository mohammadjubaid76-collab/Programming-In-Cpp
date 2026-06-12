#include<iostream>
using namespace std;

int main() {
    int maths;
    int chemistry;
    int physics;

    cout<<"Enter a maths marks: ";
    cin>>maths;

    cout<<"Enter a chemistry marks: ";
    cin>>chemistry;

    cout<<"Enter a physics marks: ";
    cin>>physics;

    int avg = (maths+chemistry+physics)/3;
    cout<<"Avg marks = "<<avg<<endl;
    return 0;
}