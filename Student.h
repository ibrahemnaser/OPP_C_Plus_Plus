#ifndef _H_STUDENT_
#define _H_STUDENT_

#include <iostream>
using namespace std;

struct Student
{
  string name;
  Student(string _name);
  void print();
};

#endif