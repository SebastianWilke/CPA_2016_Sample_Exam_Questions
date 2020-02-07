
#include <exception>
#include <iostream>
using namespace std;

int i = 1;

void f(void) {
  throw 1;
  i++;
}

void g(void) {
  i++;
  try {
    f();
  } catch (int &i) {
    throw ++i;
  }
}

int main(void) {
  // i == 1
  try {
    g(); // i == 2
    i++;
  } catch (...) {
    i++; // i == 3
  }

  cout << i << endl; // output: 3

  return 0;
}
