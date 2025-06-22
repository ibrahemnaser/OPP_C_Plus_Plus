#include "divide.h"
#include <iostream>
using namespace std;

static int var1 = 100; // add static operator if it is a global variable inside only this file

int div(int x, int y, int z = 10)
{
  cout << "VAR::: " << var1 << endl;
  return x / y;
}