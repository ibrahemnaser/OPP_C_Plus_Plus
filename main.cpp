#include <iostream>
#include <cmath>
#include "divide.h"
#include "sum.h" // NO (< , >) for our made header file user (" , ")

// #include "sum.hpp" // can't douple include any header file | OR | an error of "redefinition of" will appear

/**
 * After adding "Include guards" inside header file >> "Error: redefinition of ... " will not appear
 */

using namespace std;

int main()
{
  cout << sqrt(25) << endl;
  cout << "Hello World" << endl;
  cout << sum_n(3) << endl;
  cout << sum_n(2) << endl;
  cout << sum_n(30) << endl;

  cout << "Total calls: " << total_calls << endl;

  cout << div(2, 1, 3) << endl;

  return 0;
}