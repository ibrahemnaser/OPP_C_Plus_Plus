#include "Student.h"

Student::Student(string _name)
{
  name = _name;
}

void Student::print()
{
  cout << "Student name is: " << name << endl;
}