
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
    j++;
  if (i | j)
    i++;
  if (i & j)
    j++;

  cout << i * j << endl;

  return 0;
}
```

## #Solution & Explanation Question 1
#### Add solution + explanation here