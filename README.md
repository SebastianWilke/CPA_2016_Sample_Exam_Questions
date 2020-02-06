
# cpa_2016_example_questions

### This repository is intended to serve as a look-up for questions, solutions and explanations to the C++ Certified Associate Programmer - CPA example questions from 2016.
<br/>
<br/>

Question | Source Code | Solution and Explanation
---|---|---
[Question 1](#question-1) | [question_01.cpp](https://github.com/SebastianWilke/cpa_2016_example_questions/blob/master/question_01.cpp) | [Solution & Explanation](#solution--explanation-question-1)



## #Question 1
    What is the output of the following program?
    
        A. 2
        B. 3
        C. 6
        D. 8

```cpp
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
```

## #Solution & Explanation Question 1
#### The correct answer is __**D. 8**__:
* Logical and is true, if both sides are true. Logical or is true if at least one side is true. 
* Every value different from 0 is evaluated to true. This is why the last two if statements are executed.