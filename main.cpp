#include <iostream>
#include <cmath>

#include "sum.hpp" // NO (< , >) for our made header file user (" , ")

// #include "sum.hpp" // can't douple include any header file | OR | an error of "redefinition of" will appear

using namespace std;

int main()
{
  cout << sqrt(25) << endl;
  cout << "Hello World" << endl;
  cout << sum(5) << endl;
  cout << sum(3) << endl;

  return 0;
}