
#include <iostream>
using namespace std;

int main(void) {

  int i = 1, j = 2;

  if (i > j && j > i)
    i++;
  if (i > j || j > i)
    j++; // j = 3

  if (i | j) // 1 | 3 == 3
    i++;     // i = 2

  if (i & j) // 2 & 3 == 2
    j++;     // j = 4

  cout << i * j << endl; // 2 * 4 = 8

  return 0;
}
