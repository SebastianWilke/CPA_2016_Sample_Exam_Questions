
#include <iostream>
using namespace std;

class A {
public:
  int work(void) { return 4; }
};

class B : public A {
public:
  int relax(void) { return 2; }
};

class C : public A {
public:
  int relax(void) { return 1; }
};

int main(void) {
  A *a0 = new A, *a1 = new B, *a2 = new C;

  cout << a0->work() +                          // calls A.relax(), returns 4
              static_cast<C *>(a2)->relax() /   // calls C.relax(), returns 1
                  static_cast<B *>(a1)->relax() // calls B.relax(), returns 2
       << endl;                                 // output: (4 + (1 / 2)) == 4

  return 0;
}
