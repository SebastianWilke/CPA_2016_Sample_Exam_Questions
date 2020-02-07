
#include <iostream>
using namespace std;

int main(void) {

  int t[4] = {8, 4, 2, 1};

  int *p1 = t + 2, *p2 = p1 - 1; // p1 = t[2] = 2, p2 = t[2] - 1 = t[1] = 4

  p1++; // p1 = t[3] = 1

  cout << *p1 - t[p1 - p2] << endl; // *p1 - t[2] => 1 - 2 => -1

  return 0;
}
