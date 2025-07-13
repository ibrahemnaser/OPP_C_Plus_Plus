#include <iostream>
using namespace std;

class Small
{
private:
  int a;

public:
  Small()
  {
    this->a = 0;
  }
  Small(int a, string const &msg)
  {
    this->a = a;
    cout << msg << endl;
  }

  ~Small()
  {
    cout << "destructor called >>> " << this->a << endl;
  }
};

class Big
{
private:
  Small s1;
  Small s2;
  Small s3;

public:
  Big() : s2(2, "s2"), s1(1, "s1"), s3(3, "s3")
  {
  }
};

int main()
{

  cout << "***********************************" << endl;
  cout << "************ OOP WORLD ************" << endl;
  cout << "***********************************" << endl;

  Big b;

  cout << "MyClass object going out of scope..." << endl;
  return 0;
}