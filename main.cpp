#include <iostream>
#include "Student.h"
using namespace std;

// Student struct with declaration and implementation
// struct Student
// {
//   string name;
//   Student(string _name)
//   {
//     name = _name;
//   }

//   void print()
//   {
//     cout << "Student name is: " << name << endl;
//   }
// };

// How to separate declaration and implementation
// [1] Declaration
// struct Student
// {
//   string name;

//   Student(string _name);
//   void print();
// };

// // [2] Implementation
// Student::Student(string _name)
// {
//   name = _name;
// }

// void Student::print()
// {
//   cout << "Student name is: " << name << endl;
// }

int main()
{
  Student s1("Medhat");
  s1.print();

  return 0;
}