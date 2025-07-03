#ifndef STRUCT_POINTERS
#define STRUCT_POINTERS

#include <iostream>
#include <vector>
using namespace std;

struct Student
{

  int id;
  string name;
  int marks;

  Student(int id, string name, int marks)
  {
    this->id = id;
    this->name = name;
    this->marks = marks;
  }

  void print()
  {
    cout << "ID: " << id << endl;
    cout << "NAME: " << name << endl;
    cout << "MARKS: " << marks << endl;
  }
};

void learn_struct_pointer()
{
  cout << "***************************************************************" << endl;
  cout << "LEARNING STRUCT POINTERS" << endl;
  cout << "***************************************************************" << endl;

  Student st1(1, "Ahmed", 100); // normal variable

  Student *st2{new Student(2, "Ali", 200)}; // a pointer variable

  Student *st3{&st1}; // a pointer variable

  Student *st4{st2}; // initialization list

  st1.print();

  st2->print(); // access by -> arrow operator

  st3->print();

  st4->print();

  st2->marks = 123;

  st4->print();
  (*st4).print();

  vector<Student *> v_std;
  v_std.push_back(&st1);
  v_std.push_back(st2);
  v_std.push_back(st3);
  v_std.push_back(st4);

  cout << "///////******************************///////////////" << endl;
  for (auto &&vi : v_std)
  {
    vi->print();
    cout << "*************" << endl;
  }

  // delete only varaibles created by new keyword
  delete st2;
  st2 = nullptr; // to avoid memory leak
  delete st4;
  st4 = nullptr;

  delete st3;
  st3 = nullptr;
}

#endif