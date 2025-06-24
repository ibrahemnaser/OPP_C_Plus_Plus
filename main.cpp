#include <iostream>
#include <vector>
#include <map>
using namespace std;

int fun1(int x, int &y)
{
  cout << x << endl;
  cin >> y;
  cout << "Y: " << y << endl;

  return 0;
}

// ERROR: reference to a local variable, which will be destroyed
// string &getName(string &name)
// {
//   string str = "hello";
//   return str;
// }

int main()
{

  int x = 10;

  // cout << "VALUE::: " << x << endl;
  // cout << "REFERENCE::: " << &x << endl;

  // reference to the same location of x [alias]
  int &ref1 = x;
  // cout << "VALUE::: [ref1]:: " << ref1 << endl;
  // cout << "REFERENCE::: [ref1]:: " << &ref1 << endl;

  int &ref2 = x;
  // cout << "VALUE::: [ref2]:: " << ref2 << endl;
  // cout << "REFERENCE::: [ref2]:: " << &ref2 << endl;

  // changing any of them will change x and hence all of them will refere to the new value of x
  ref2 = 200;

  // cout << "VALUE::: " << x << endl;
  // cout << "REFERENCE::: " << &x << endl;

  // cout << "VALUE::: [ref1]:: " << ref1 << endl;
  // cout << "REFERENCE::: [ref1]:: " << &ref1 << endl;

  // cout << "VALUE::: [ref2]:: " << ref2 << endl;
  // cout << "REFERENCE::: [ref2]:: " << &ref2 << endl;

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

  ///////////////////////////////////////////////////

  // int a = 22;
  // int b = 3;

  // fun1(a, b);

  // cout << "B:: " << b << endl;

  // string nm = "hello";
  // string name = getName(nm);
  // cout << name << endl;

  // vector<int> vc1 = {1, 2, 3, 4};

  // for (auto &&v_item : vc1)
  // {
  //   cout << v_item << ' ';
  // }
  // cout << endl;

  // for (auto &&v_item : vc1)
  // {
  //   cout << v_item << ' ';
  // }
  // cout << endl;

  int val = 20;
  int &ref = val;

  cout << &val << endl;
  cout << &ref << endl; // two have same address
  cout << "*********************" << endl;
  int *ptr = &val;
  cout << ptr << endl;  // value is the referenced variable address
  cout << &ptr << endl; // it same a unique address
  cout << *ptr << endl; // value is the referenced variable value

  *ptr = 434; // changes the value of all referenced variables

  cout << val << ' ' << ref << ' ' << *ptr << endl;

  //
  int val2 = 234;
  ptr = &val2; // can change the referenced address with pointers
  cout << val << ' ' << ref << ' ' << *ptr << endl;

  // nullptr;
  ptr = nullptr; // *ptr >> ERROR
  if (!ptr)
    cout << "NOT::: " << endl;

  // initialization >> nullptr or 0  || NULL all are valid
  // otherwise will be garbage value <<  int *ptr;  >>

  return 0;
}