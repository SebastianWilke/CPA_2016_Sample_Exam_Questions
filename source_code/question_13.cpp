
#include <iostream>
using namespace std;

class A {
public:
  int x;
  void d() { x /= 2; }
};

class B : public A {
public:
  int y;
  void d() { A::d(); }
};

int main(void) {

  B b;           // b.x == 0, b.y == (not sure if this behavior is defined)
  b.x = b.y = 4; // b.x == 4, b.y == 4
  b.d();         // b.x == 2, b.y == 4

  cout << b.y / b.x << endl; // output: 4 / 2 == 2

  return 0;
}
