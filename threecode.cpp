#include <iostream>
using namespace std;

//Base class
class Student {
protected:
 int roll;

public:
 void getRoll() {
   cout <<"Enter Roll Number:";
   cin >>roll;
 }
};

//Derived class
class Result : public Student {
private:
 int marks;

public:
 void getMark() {
   cout <<"Enter Marks:";
   cin >>marks;
 }
 
 void display() {
   cout <<"\nRoll Number=" <<roll <<endl;
   cout <<"Marks= <<marks <<endl";
 }
};
 
int main() {
   Result r;

   r.getRoll();
   r.getMark();
   r.display();

   return 0;
}
