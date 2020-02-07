
#include <iostream>
using namespace std;

class B;

class A {
  friend class B;
  int a;

public:
  A() : a(4) {}
  void f(B &b, A &a);
  int out(void) { return a; }
};

class B {
  friend class A;
  int b;

public:
  B() : b(2) {}
  void f(A &a) { a.a /= b; }
};

void A::f(B &b, A &a) { b.f(*this); }

int main(void) {

  A a; // a.a == 4
  B b; // b.b == 2

  a.f(b, a); // a.a == 2, b.b == 2

  cout << a.out() << endl; // output: 2

  return 0;
}
