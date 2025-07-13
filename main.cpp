#include <iostream>
using namespace std;

// Class A
class ClassA
{
public:
  ClassA()
  {
    cout << "ClassA Constructor (Default)" << endl;
  }
  ClassA(int x)
  {
    cout << "ClassA Constructor (int):: " << x << endl;
  }

  // Add a destructor to observe object destruction
  ~ClassA()
  {
    cout << "ClassA Destructor" << endl;
  }
};

// Class B
class ClassB
{
private:
  ClassA aa; // Member of type ClassA >> constructor will be called
  int x;

public:
  ClassB()
  {
    cout << "ClassB Constructor (Default)" << endl;
  }
  ClassB(int val_x)
  {
    // This is a crucial line for the question. What happens here?
    cout << "ClassB Constructor (int) first" << endl;
    this->aa = ClassA(val_x); // Assignment, not initialization in member initializer list
    this->x = val_x;
    cout << "ClassB Constructor (int) second" << endl;
  }

  // Add a destructor for ClassB
  ~ClassB()
  {
    cout << "ClassB Destructor" << endl;
  }
};

// Class C
class ClassC
{
private:
  int &y;
  ClassB bb; // Member of type ClassB

public:
  // This is the constructor for ClassC.
  // Think about how you would finish this constructor using initializer lists or assignment.
  ClassC(int &ref_y, const ClassB ref_bb) : y(ref_y)
  {
    this->bb = ref_bb;
    cout << "ClassC Constructor" << endl;
  }

  // Add a destructor for ClassC
  ~ClassC()
  {
    cout << "ClassC Destructor" << endl;
  }
};

int main()
{

  cout << "***********************************" << endl;
  cout << "************ OOP WORLD ************" << endl;
  cout << "***********************************" << endl;

  int x = 10;
  ClassB objB(5);
  ClassC objC(x, objB);

  cout << "MyClass object going out of scope..." << endl;
  return 0;
}