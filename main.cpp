#include <iostream>
using namespace std;

class Ty
{

private:
  int x;
  int *y;

public:
  Ty() : Ty(0, 0)
  {
    cout << "Default Constructor" << endl;
  }
  Ty(int x, int _y) : x(x)
  {
    cout << "Constructor" << endl;
    y = new int;
    *y = _y;
  }
  ~Ty()
  {
    cout << "Destructor" << endl;
    delete y; // memory leak
  }

  void setX(int x)
  {
    this->x = x;
  }

  int getX()
  {
    return x;
  }

  int getY()
  {
    return *y;
  }

  void setY(int _y)
  {
    *y = _y;
  }
};

int main()
{

  cout << "***********************************" << endl;
  cout << "************ OOP WORLD ************" << endl;
  cout << "***********************************" << endl;

  Ty t1(100, 88);
  cout << "x = " << t1.getX() << endl;

  Ty t2;
  t2.setX(10);
  t2.setY(20);
  cout << "x = " << t2.getX() << endl;
  cout << "y = " << t2.getY() << endl;

  Ty *t3 = new Ty(23, 21);
  cout << "x = " << t3->getX() << endl;

  delete t3; // memory leak

  return 0;
}