#include <iostream>
#include <vector>
#include <map>
using namespace std;

struct ST
{
};

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

  int &ref3 = x;
  // cout << "VALUE::: [ref3]:: " << ref3 << endl;
  // cout << "REFERENCE::: [ref3]:: " << &ref3 << endl;

  int y = 2122;

  int &ref4 = y;

  int ref5 = y;

  ref3 = y; // update only the value of x
  ref3 = y; // update only the value of x

  // cout << "VALUE::: [ref4]:: " << ref4 << endl;
  // cout << "REFERENCE::: [ref4]:: " << &ref4 << endl;

  // cout << "VALUE::: [ref5]:: " << ref5 << endl;
  // cout << "REFERENCE::: [ref5]:: " << &ref5 << endl;

  // cout << "VALUE::: [ref3]:: y >>> " << ref3 << endl;      // updated value and hence x value will be updated
  // cout << "REFERENCE::: [ref3]:: y >>> " << &ref3 << endl; // old address of x

  // cout << "VALUE::: " << x << endl;
  // cout << "REFERENCE::: " << &x << endl;

  // cout << "VALUE::: [ref1]:: " << ref1 << endl;
  // cout << "REFERENCE::: [ref1]:: " << &ref1 << endl;

  // int ref6 = &y; // wrong:: normal variables cannot have reference as its value >> ONLY POINTERS CAN int *ref6 = &y;
  int *ref6 = &y;
  int z = 1222;

  // cout << "VALUE::: [ref6]:: " << ref6 << endl;
  // cout << "REFERENCE::: [ref6]:: " << &ref6 << endl;

  ref6 = &z; // reassigning the address to pointers

  // cout << "VALUE::: [ref6]:: z >>> " << ref6 << endl;
  // cout << "REFERENCE::: [ref6]:: z >>> " << &ref6 << endl;

  // reference constrains
  // 1. must be initialized
  // int &ref3;  WRONG
  // 2. cannot be reinitialized
  // int x = 10;
  // int y = 20;
  // int &ref3 = x;
  // ref3 = y; WRONG >> will take only the new value not the address
  // 3. same data type
  // double x2 = 10;
  // int &ref3 = x2;

  ///////////////////////////////////////////////////

  // int a = 22;
  // int b = 3;

  // fun1(a, b); // pass by reference [OK]

  // cout << "B:: " << b << endl;

  // string nm = "hello";
  // string &name = getName(nm); // NEVER return by reference with normal functions ONLY WITH STRUCTS
  // cout << name << endl;

  // ITERATION
  // vector<int> vc1 = {1, 2, 3, 4};

  // for (auto &v_item : vc1)
  // {
  //   cout << v_item << ' ';
  //   v_item = 20; // WARNING: will change the value of all elements
  //   // TO AVIOD: use const reference
  // }

  // for (const auto &v_item : vc1)
  // {
  //   cout << v_item << ' ';
  //   // v_item = 20; // CAN NOT CHANGE
  // }
  // cout << endl;

  // for (auto v_item : vc1)
  // {
  //   cout << v_item << ' ';
  //   v_item = 20; // no affect original vector >> it is a copy
  // }
  // cout << endl;

  // for (auto &v_item : vc1)
  // {
  //   cout << v_item << ' ';
  // }
  // cout << endl;

  // STRUCT

  ST st1;
  ST &st2 = st1;
  ST &st3 = st1;

  // cout << "STRUCT::: 1>>> " << &st1 << endl;
  // cout << "STRUCT::: 2>>> " << &st2 << endl;
  // cout << "STRUCT::: 3>>> " << &st3 << endl;
  // ALL SAME ADDRESS

  map<int, ST> mSt;

  mSt[1] = st1;
  mSt[2] = st2;
  mSt[3] = st3;

  // cout << "map [0]STRUCT::: 1>>> " << &mSt[1] << endl;
  // cout << "map [1]STRUCT::: 2>>> " << &mSt[2] << endl;
  // cout << "map [2]STRUCT::: 3>>> " << &mSt[3] << endl;
  // DIFFERENT ADDRESS

  ST &st4 = mSt[1];
  ST st5 = mSt[2];

  cout << "map STRUCT::: 1>>> " << &st1 << endl;
  cout << "map [0]STRUCT::: 1>>> " << &mSt[1] << endl; // NOT SAME AS &st1
  cout << "map [1]STRUCT::: 4>>> " << &st4 << endl;    // SAME ADDRESS AS mSt[1]
  cout << "map [2]STRUCT::: 5>>> " << &st5 << endl;    // DIFFERENT ADDRESS

  // *********************************************************************************************** //
  // POINTERS

  // int val = 20;
  // int &ref = val;

  // cout << &val << endl;
  // cout << &ref << endl; // two have same address
  // cout << "*********************" << endl;
  // int *ptr = &val;
  // cout << ptr << endl;  // value is the referenced variable address
  // cout << &ptr << endl; // it has a unique address
  // cout << *ptr << endl; // value is the referenced variable value

  // *ptr = 434; // changes the value of all referenced variables

  // cout << val << ' ' << ref << ' ' << *ptr << endl;

  // //
  // int val2 = 234;
  // ptr = &val2; // can change the referenced address with pointers
  // cout << val << ' ' << ref << ' ' << *ptr << endl;

  // // nullptr;
  // ptr = nullptr; // *ptr >> ERROR
  // if (!ptr)
  //   cout << "NOT::: " << endl;

  // initialization >> nullptr or 0  || NULL all are valid
  // otherwise will be garbage value <<  int *ptr;  >>

  // SO DIFFERENCES BETWEEN POINTERS AND REFERCE:
  // 1- pointers can be null                                                       || refernce always has a value
  // 2- pointers can be changed                                                    || refernce can not change its value
  // 3- pointers can be initialized with nullptr or not intialized [GARBAGE]       || refernce must be initialized

  // AND ALL OF THE ABOVE HELP US WITH DYNAMIC MEMORY ALLOCATION

  // *********************************************************************************************** //
  return 0;
}