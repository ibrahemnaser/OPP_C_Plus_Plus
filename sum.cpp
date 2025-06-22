#include "sum.h"
#include <iostream>
using namespace std;

static int var1 = 100; // add static operator if it is a global variable inside only this file

int total_calls = 0;

// Here we define the implementation of the inlcuded header interface
int sum_n(int n)
{
  cout << "VAR::: SUM" << var1 << endl;
  total_calls++;
  return n * (n + 1) / 2;
}