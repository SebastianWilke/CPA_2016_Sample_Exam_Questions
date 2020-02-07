
#include <iostream>
using namespace std;

class A {
public:
  A() { a.a = a.b = 1; }

  struct {
    int a, b;
  } a;

  int b(void);
};

int A::b(void) {
  int x = a.a;
  a.a = a.b;
  a.b = x;
  return x;
};

int main(void) {

  A a;       // a.a.a == 1, a.a.b == 1
  a.a.a = 0; // a.a.a == 0, a.a.b == 1
  a.b();     // a.a.a == 1, a.a.b == 0

  cout << a.b() << a.a.b
       << endl; // output: 1, a.a.a == 0, a.a.b == 1, output: 1

  return 0;
}
