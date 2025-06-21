#include <iostream>
#include <cmath>

using namespace std;

int sum(int n)
{
  int res = 0;

  for (int i = 1; i <= n; i++)
    res += i;

  return res;
}

int main()
{
  cout << sqrt(25) << endl;
  cout << "Hello World" << endl;
  cout << sum(5) << endl;

  return 0;
}