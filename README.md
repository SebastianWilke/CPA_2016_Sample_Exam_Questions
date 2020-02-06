
# cpa_2016_example_questions

### This repository is intended to serve as a look-up for questions, solutions and explanations to the C++ Certified Associate Programmer - CPA example questions from 2016.
<br/>
<br/>

Question | Source Code | Solution and Explanation
---|---|---
[Question 1](#question-1) | [question_01.cpp](https://github.com/SebastianWilke/cpa_2016_example_questions/blob/master/question_01.cpp) | [Solution & Explanation](#solution--explanation-question-1)
[Question 2](#question-2) | [question_02.cpp](https://github.com/SebastianWilke/cpa_2016_example_questions/blob/master/question_02.cpp) | [Solution & Explanation](#solution--explanation-question-2)
[Question 3](#question-3) | [question_03.cpp](https://github.com/SebastianWilke/cpa_2016_example_questions/blob/master/question_03.cpp) | [Solution & Explanation](#solution--explanation-question-3)

<br/>

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
    j++;                    // j = 3

  if (i | j)                // 1 | 3 == 3
    i++;                    // i = 2

  if (i & j)                // 2 & 3 == 2
    j++;                    // j = 4

  cout << i * j << endl;    // 2 * 4 == 8

  return 0;
}
```

## #Solution & Explanation Question 1
#### The correct answer is _D_:
* Logical and (```&&```) is true, if both sides are true. Logical or (```||```) is true if at least one side is true. 
* ```|``` and ```&``` are bitwise or / and respectively. They work on the binary representation of the numbers.
* Every value different from 0 is evaluated to true. This is why the last two if statements are executed (see comments).

## #Question 2
    What is the output of the following program?
    
        A.  6
        B.  8
        C. 10
        D. 12

```cpp
#include <iostream>
using namespace std;

struct A {
  int a;
  float b;
};

struct B {
  int b;
  float a;
};

struct C {
  A a;
  B b;
};

int main(void) {

  C c1 = {1, 2, 3, 4}, c2 = {5, 6, 7, 8};

  cout << c1.b.a + c2.a.b << endl;              // 4 + 6 == 10

  return 0;
}
```

## #Solution & Explanation Question 3
#### The correct answer is _C_:
* Confusing member variable names. Not that difficult if you concentrate.
* Note that the initialization of struct c1/c2 first assigns the values to its first member, than the second, ...

## #Question 3
    What is the output of the following program?
    
        A. -2
        B. -1
        C.  1
        D.  2
        
```cpp
#include <iostream>
using namespace std;

int main(void) {

  int t[4] = {8, 4, 2, 1};

  int *p1 = t + 2, *p2 = p1 - 1;        // p1 = t[2] == 2, p2 = t[2] - 1 == t[1] == 4

  p1++;                                 // p1 = t[3] == 1

  cout << *p1 - t[p1 - p2] << endl;     // *p1 - t[2] == 1 - 2 == -1

  return 0;
}
```

## #Solution & Explanation Question 3
#### The correct answer is _B_:
* Note that in C++ array names (here ```t```) represent the address of its first element (```t[0]```). Therefore ```t + 2``` represents position 2 (zero-indexed) in the array ```t```.
* In C++ pointer simply represent memory addresses.
* ```p1 - 1``` represents the array position one before the one ```p1``` is currently pointing to.
* ```p1++``` advances the pointer by one position, letting it point to the next element after the one ```p1``` it is currently pointing to.
* ```p1 - p2``` operates on the addresses of the pointers. Since ```p1``` points to the third element (zero-indexed) of ```t```, and ```p2```  points to the first element (zero-indexed) of ```t```, there are two positions between them.
* ```int *p1 = t + 2``` declares and initializes a pointer to int. On the other hand ```*p1``` in ```*p1 - t[p1 - p2]``` dereferences the value (looks at what ```p1``` is pointing to / what value is at this memory address).