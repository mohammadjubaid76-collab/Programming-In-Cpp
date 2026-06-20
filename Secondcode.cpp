#include <iostream>
using namespace std;

class Student
{
public:
  int rollNo;
  string name;

  void getData()
  {
    cout << "Enter Roll Number and Name :";
    cin >> rollNo >> name;
  }

  void displayData()
  {
    cout << "Roll Number =" << rollNo << endl;
    cout << "Name=" << name << endl;
  }
};

int main()
{
  Student s; // Object creation

  s.getData();
  s.displayData();

  return 0;
}