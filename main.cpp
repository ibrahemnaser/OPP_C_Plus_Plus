#include <iostream>
using namespace std;

int main()
{

  int x = 10;

  cout << "VALUE::: " << x << endl;
  cout << "REFERENCE::: " << &x << endl;

  // reference to the same location of x [alias]
  int &ref1 = x;
  cout << "VALUE::: [ref1]:: " << ref1 << endl;
  cout << "REFERENCE::: [ref1]:: " << &ref1 << endl;

  int &ref2 = x;
  cout << "VALUE::: [ref2]:: " << ref2 << endl;
  cout << "REFERENCE::: [ref2]:: " << &ref2 << endl;

  // changing any of them will change x and hence all of them will refere to the new value of x
  ref2 = 200;

  cout << "VALUE::: " << x << endl;
  cout << "REFERENCE::: " << &x << endl;

  cout << "VALUE::: [ref1]:: " << ref1 << endl;
  cout << "REFERENCE::: [ref1]:: " << &ref1 << endl;

  cout << "VALUE::: [ref2]:: " << ref2 << endl;
  cout << "REFERENCE::: [ref2]:: " << &ref2 << endl;

  // reference constrains
  // 1. must be initialized
  // int &ref3;  WRONG
  // 2. cannot be reinitialized
  // int x = 10;
  // int y = 20;
  // int &ref3 = x;
  // ref3 = y; WRONG
  // 3. same data type
  // double x2 = 10;
  // int &ref3 = x2;

  return 0;
}