
#include <iostream>
using namespace std;

class A {
public:
  static int a;
  A() { a++; }
};

int A::a = 1;

void f(void) {
  A a;
  throw string("?");
}

int main(void) {
  // A::a == 1
  A a; // A::a == 2

  try {
    f(); // A::a == 3
  } catch (string &s) {
  }

  cout << A::a << endl;

  return 0;
}
