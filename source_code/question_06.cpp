
#include <iostream>
using namespace std;

char f1(char c) { return c == 'z' ? 'a' : c + 1; }

char f2(char &c) {
  c = f1(c);
  return c;
}

int main(void) {

  char x = 'x';

  cout << f2(x);         // output: y, x = 'y'
  cout << f2(x);         // output: z, x = 'z'
  cout << f2(x) << endl; // output: a, x = 'a'

  return 0;
}
