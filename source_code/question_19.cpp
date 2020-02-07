
#include <exception>
#include <iostream>
#include <stdexcept>
using namespace std;

int i = 3;

class A : public runtime_error {
public:
  A() : runtime_error("?") {}
};

class B : public logic_error {
public:
  B() : logic_error("!") {}
};

void f(void) {
  i++;
  throw B();
  i++;
}

void g(void) {
  try {
    f();
  } catch (A &a) {
    throw A();
  }
}

int main(void) {
  // i == 3
  try {
    g(); // i == 4
    i++;
  } catch (logic_error &l) {
    i++; // i == 5
  } catch (...) {
    i++;
  }
  cout << i << endl; // output: 5
  return 0;
}
