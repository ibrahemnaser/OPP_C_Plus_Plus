#ifndef FUNCTIONS_POINTERS
#define FUNCTIONS_POINTERS

#include <iostream>
using namespace std;

// pass by reference
void d_m(int &x)
{
  x++;
  x *= 3;
  x /= 2;
}

// pass by reference pointer
void d_m(int *x)
{
  if (x == nullptr)
    return;

  d_m(*x); // by reference
  // *(x++);
  // *x *= 3;
  // *x /= 2;
}

void learn_fun_pointers()
{
  cout << "***************************************************************" << endl;
  cout << "Pointers With Functions" << endl;
  cout << "***************************************************************" << endl;

  int num1 = 10;

  d_m(num1); // by reference
  cout << "VALUE::: " << num1 << endl;

  int num2 = 3;
  d_m(&num2); // by reference pointer >> reference to pointer
  cout << "VALUE 2::: " << num2 << endl;
  num2 = 3;
  int *ptr_num2 = &num2;
  d_m(*ptr_num2); // by reference >> pointer to reference
  cout << "VALUE 3::: " << *ptr_num2 << endl;

  int x = 120;
  int *ptr_x = &x;
  int *ptr_x2 = ptr_x; // pointer to pointer
  cout << "VALUE 4::: " << *ptr_x2 << endl;
  cout << "VALUE 5::: " << *ptr_x << endl;

  // int *ptr_n = nullptr;
  // // int &ref_n = *ptr_n; // run time error
  // // cout << "VALUE 6::: " << ref_n << endl;

  // FINAL TIPS
  // 1. pass by reference is more safe
  // 2. pointers not directly used in production code INSTEAD [STL]
  // 3. use reference with heavy data type like string or struct
}

#endif