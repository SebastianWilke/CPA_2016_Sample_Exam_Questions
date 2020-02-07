
#include <exception>
#include <iostream>
#include <stdexcept>
using namespace std;

void f(void) { throw domain_error("err"); }

int main(void) {

  int a = 4;

  try {
    f();
  } catch (runtime_error &e) {
    a--;
  } catch (...) {
    a++;
  }

  cout << a << endl; // a == 5

  return 0;
}
