
#include <iostream>
using namespace std;

class A {
  int a;

public:
  A(void) { a = 1; }
  int b(void) { return ++a; }
};

int main(void) {

  A a;   // A.a == 1
  a.b(); // A.a == 2

  cout << a.b() << endl; // 3

  return 0;
}
