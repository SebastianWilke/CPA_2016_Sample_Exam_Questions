
#include <iostream>
using namespace std;

int main(void) {

  int i = 1, j = 2;

  if (i > j && j > i)
    i++;
  if (i > j || j > i)
    j++; // j = 3

  /* 1_10 = 01_2
   * 3_10 = 11_2
   *
   *   01_2
   * | 11_2
   * ------
   *   11_2 = 3_10 */
  if (i | j)
    i++; // i = 2

  /* 2_10 = 10_2
   * 3_10 = 11_2
   *
   *   10_2
   * & 11_2
   * ------
   *   10_2 = 2_10 */
  if (i & j)
    j++; // j = 4

  cout << i * j << endl; // 2 * 4 = 8

  return 0;
}