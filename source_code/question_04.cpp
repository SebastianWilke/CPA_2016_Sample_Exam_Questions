
#include <iostream>
using namespace std;

int fun1(int p) {
  ++p;
  return p++;
}

int fun2(int &p) {
  ++p;
  return p++;
}

int main(void) {

  int a = 1, b, c; // a = 1

  b = fun1(a); // b = 2
  c = fun2(b); // c = 3, b = 4

  cout << a + b + c << endl; // 1 + 4 + 3 == 8

  return 0;
}
