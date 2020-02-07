
#include <iostream>
#include <string>
using namespace std;

int main(void) {

  string s = "Abc", t = "A";

  s = s + t; // s = "AbcA"
  t = t + s; // t = "AAbcA"

  int i = s.compare(t) > 0;        // i == 1
  int j = s.length() < t.length(); // j == 1

  cout << i + j << endl; // 1 + 1 == 2

  return 0;
}
