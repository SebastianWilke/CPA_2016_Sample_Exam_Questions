
# cpa_2016_example_questions

### This repository is intended to serve as a look-up for questions, solutions and explanations to the C++ Certified Associate Programmer - CPA example questions by [C++ Institude](https://cppinstitute.org/) from 2016.

### All questions can also be found in [this pdf](https://cppinstitute.org/wp-content/uploads/2016/07/CPA_sample_exam_questions.pdf).

#### *NOTES:*
* I do not own any rights on these questions.
* These are advanced questions and should not be used as starting point for learning C++.
* Feel free to report any mistake made in this document.

<br/>
<br/>

Question | Source Code | Solution and Explanation
---|---|---
[Question 1](#question-1) | [question_01.cpp](https://github.com/SebastianWilke/cpa_2016_example_questions/blob/master/source_code/question_01.cpp) | [Solution & Explanation](#solution--explanation-to-question-1)
[Question 2](#question-2) | [question_02.cpp](https://github.com/SebastianWilke/cpa_2016_example_questions/blob/master/source_code/question_02.cpp) | [Solution & Explanation](#solution--explanation-to-question-2)
[Question 3](#question-3) | [question_03.cpp](https://github.com/SebastianWilke/cpa_2016_example_questions/blob/master/source_code/question_03.cpp) | [Solution & Explanation](#solution--explanation-to-question-3)
[Question 4](#question-4) | [question_04.cpp](https://github.com/SebastianWilke/cpa_2016_example_questions/blob/master/source_code/question_04.cpp) | [Solution & Explanation](#solution--explanation-to-question-4)
[Question 5](#question-5) | [question_05.cpp](https://github.com/SebastianWilke/cpa_2016_example_questions/blob/master/source_code/question_05.cpp) | [Solution & Explanation](#solution--explanation-to-question-5)
[Question 6](#question-6) | [question_06.cpp](https://github.com/SebastianWilke/cpa_2016_example_questions/blob/master/source_code/question_06.cpp) | [Solution & Explanation](#solution--explanation-to-question-6)
[Question 7](#question-7) | [question_07.cpp](https://github.com/SebastianWilke/cpa_2016_example_questions/blob/master/source_code/question_07.cpp) | [Solution & Explanation](#solution--explanation-to-question-7)
[Question 8](#question-8) | [question_08.cpp](https://github.com/SebastianWilke/cpa_2016_example_questions/blob/master/source_code/question_08.cpp) | [Solution & Explanation](#solution--explanation-to-question-8)
[Question 9](#question-9) | [question_09.cpp](https://github.com/SebastianWilke/cpa_2016_example_questions/blob/master/source_code/question_09.cpp) | [Solution & Explanation](#solution--explanation-to-question-9)
[Question 10](#question-10) | [question_10.cpp](https://github.com/SebastianWilke/cpa_2016_example_questions/blob/master/source_code/question_10.cpp) | [Solution & Explanation](#solution--explanation-to-question-10)

<br/>

<!--------------------QUESTION 1-------------------->

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

## #Solution & Explanation To Question 1
#### The correct answer is _D_ (8):
* Logical and (```&&```) is true, if both sides are true. Logical or (```||```) is true if at least one side is true. 
* ```|``` and ```&``` are bitwise or / and respectively. They work on the binary representation of the numbers.
* Every value different from 0 is evaluated to true. This is why the last two if statements are executed (see comments).

<!--------------------QUESTION 2-------------------->

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

## #Solution & Explanation To Question 2
#### The correct answer is _C_ (10):
* Confusing member variable names. Not that difficult if you concentrate.
* Note that the initialization of struct c1/c2 first assigns the values to its first member, than the second, ...

<!--------------------QUESTION 3-------------------->

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

## #Solution & Explanation To Question 3
#### The correct answer is _B_ (-1):
* Note that in C++ array names (here ```t```) represent the address of its first element (```t[0]```). Therefore ```t + 2``` represents position 2 (zero-indexed) in the array ```t```.
* In C++ pointer simply represent memory addresses.
* ```p1 - 1``` represents the array position one before the one ```p1``` is currently pointing to.
* ```p1++``` advances the pointer by one position, letting it point to the next element after the one ```p1``` it is currently pointing to.
* ```p1 - p2``` operates on the addresses of the pointers. Since ```p1``` points to the third element (zero-indexed) of ```t```, and ```p2```  points to the first element (zero-indexed) of ```t```, there are two positions between them.
* ```int *p1 = t + 2``` declares and initializes a pointer to int. On the other hand ```*p1``` in ```*p1 - t[p1 - p2]``` dereferences the value (looks at what ```p1``` is pointing to / what value is at this memory address).

<!--------------------QUESTION 4-------------------->

## #Question 4
    What is the output of the following program?
    
        A.  4
        B.  6
        C.  8
        D. 10
        
```cpp
#include <iostream>
using namespace std;

int fun1(int p) {
  ++p;
  return p++;
}

int fun2(int &p) {
  ++p;
  return p++;
}

int main(void) {

  int a = 1, b, c;              // a = 1

  b = fun1(a);                  // b = 2
  c = fun2(b);                  // c = 3, b = 4

  cout << a + b + c << endl;    // 1 + 4 + 3 == 8

  return 0;
}
```

## #Solution & Explanation To Question 4
#### The correct answer is _C_ (8):
* ```b``` gets assigned the value returned by function ```fun1```. This function takes an int (per value), increments it and returns it. Note that ```return p++``` returns the value and then increments it. In this case we call ```fun1``` with a = 1, so it returns 2.
* ```c``` gets assigned the value returned by function ```fun2```. But this time we are passing it a reference to int (a reference to b = 2). Now the increment ```++p``` in ```fun2``` modifies the value of ```b``` (see comments)! Again we return it and increment it. Thus we return 3 but ```b``` gets post-incremented and now holds the value 4.

<!--------------------QUESTION 5-------------------->

## #Question 5
    What is the output of the following program?
    
        A. 1
        B. 2
        C. 3
        D. 4
        
```cpp
#include <iostream>
using namespace std;

int *fun(void) { return new int[2]; }

int fun(int *p) {
  delete[] p;
  return 0;
}

void fun(int *p, int q) { p[q] *= 2; }

void fun(int *p, int q, int r) { p[q] = r; }

int main(void) {

  int *v = fun();

  fun(v, 0, 1);                 // v[0] == 1
  fun(v, 1, 2);                 // v[1] == 2
  fun(v, 0);                    // v[0] == 2

  cout << v[1] + v[0] << endl;  // 2 + 2 == 4

  fun(v);

  return 0;
}
```

## #Solution & Explanation To Question 5
#### The correct answer is _D_ (4):
* In C++ you can overload functions. That means functions can have the same name but must have different [signatures](https://en.cppreference.com/w/cpp/language/function) (different parameters).
* ```v``` is a pointer to int and gets assigned the value returned by function ```fun``` which returns a pointer to the beginning (starting address) of an int array of size 2.
* Then follow two calls to function ```fun(int *, int, int)```. This function is pretty straight forward and sets the value at the passed int pointer at position of the second argument to the value of the third parameter (see comments).
* ```fun(int *, int)``` just doubles the value stored at the position of the second parameter where the first parameter points to.

<!--------------------QUESTION 6-------------------->

## #Question 6
    What is the output of the following program?
    
        A. XYZ
        B. xyz
        C. YZA
        D. yza
        
```cpp
#include <iostream>
using namespace std;

char f1(char c) { return c == 'z' ? 'a' : c + 1; }

char f2(char &c) {
  c = f1(c);
  return c;
}

int main(void) {

  char x = 'x';

  cout << f2(x);            // output: y, x = 'y'
  cout << f2(x);            // output: z, x = 'z'
  cout << f2(x) << endl;    // output: a, x = 'a'

  return 0;
}
```

## #Solution & Explanation To Question 6
#### The correct answer is _D_ (yza):
* ```f1``` uses the [ternary operator](https://en.cppreference.com/w/cpp/language/operator_other). It checks whether the passed char is equal to 'z'. If it is, the function returns 'a'. If it is not, the function returns the next char in the [ascii table](http://man7.org/linux/man-pages/man7/ascii.7.html) (```c + 1```).
* ```f2``` simply passes its only argument to ```f1``` and since it is passed by reference (```char &c```) ```c``` also gets set to this return value. In other words variable ```x``` in main gets set to this return value. Finally ```c``` is returned from the function.
* See the comments to understand how ```x``` is changing.

<!--------------------QUESTION 7-------------------->

## #Question 7
    What is the output of the following program?
    
        A. 1
        B. 2
        C. 3
        D. 4
        
```cpp
#include <iostream>
using namespace std;

int main(void) {

  int *t[2] = {new int[2], new int[2]};

  for (int i = 0; i < 4; i++)
    t[i % 2][i / 2] = i;

                                        // t = {{0, 2}, {1, 3}}

  cout << t[0][1] + t[1][0] << endl;    // 2 + 1 == 3

  delete[] t[0];
  delete[] t[1];

  return 0;
}
```

## #Solution & Explanation To Question 7
#### The correct answer is _C_ (3):
* First an array ```t``` of int is created: We get a pointer to int for two ints - and at both of these positions we store the address of another 2-element-array - giving us space to store 4 ints. We now have an array of array of int.
* We then loop through every element in ```t```. The following list shows the sequence in which the positions in ```t``` are assigned:
    ```
    i=0: t[0][0] = 0
    i=1: t[1][0] = 1
    i=2: t[0][1] = 2
    i=3: t[1][1] = 3
    ```
* Leaving ```t``` with elemets ```t = {{0, 2}, {1, 3}}```.
* Note that we call the ```delete[]``` ([like delete but for arrays](https://en.cppreference.com/w/cpp/language/delete)) to destroy both arrays in ```t``` created by our ```new int[]```-expression earlier.

<!--------------------QUESTION 8-------------------->

## #Question 8
    What is the output of the following program?
    
        A. 0
        B. 1
        C. 2
        D. 3
        
```cpp
#include <iostream>
#include <string>
using namespace std;

int main(void) {

  string s = "Abc", t = "A";

  s = s + t;                        // s = "AbcA"
  t = t + s;                        // t = "AAbcA"

  int i = s.compare(t) > 0;         // i == 1
  int j = s.length() < t.length();  // j == 1

  cout << i + j << endl;            // 1 + 1 == 2

  return 0;
}
```

## #Solution & Explanation To Question 8
#### The correct answer is _C_ (2):
* [+](https://en.cppreference.com/w/cpp/string/basic_string/operator%2B) as in ```s = s + t``` is the Non-member function of ```basic_string``` and just concatenates the strings ```s``` and ```t```.
* Operator [compare](https://en.cppreference.com/w/cpp/string/basic_string/compare) checks the lexicographical order of the two strings. ```s.compare(t)``` returns a negative value, 0 or a positive if ```s``` comes before ```t```, both are equivalent or ```s``` comes after ```t``` in the lexicographical order. Since the character b comes after the letter A in the ascii table, ```s``` appears after ```t``` in lexicographically order. Thus ```compare()``` returns a positive value. A positive value is not greater than 0 (```s.compare(t) > 0```) so ```i``` gets assigned the value 1.
* Since ```s``` has a shorter length than ```t``` the expression ```s.length() < t.length()``` evaluates to true and ```j``` gets assigned the value 1 as well.

<!--------------------QUESTION 9-------------------->

## #Question 9
    What is the output of the following program?
    
        A. 1
        B. 2
        C. 3
        D. 4
        
```cpp
#include <iostream>
using namespace std;

namespace alpha {
int var = 1;                // alpha::var == 1
}

namespace beta {
int var = alpha::var + 1;   // beta::var == 2
}

int main(void) {

  beta::var += alpha::var;  // beta::var == 3

  {
    using namespace beta;
    cout << var << endl;    // 3
  }

  return 0;
}
```

## #Solution & Explanation To Question 9
#### The correct answer is _C_ (3):
* This one is pretty straight forward. We have two named namespaces definitions namely ```alpha``` and  ```beta```.
* In main we than access ```beta::var``` and add to it the value of ```alpha::var```.
* We then define a new scope (block). With the using-directive ```using namespace beta;``` we make every name in the namespace ```beta``` visible (available) in this scope (area between ```{``` and ```}```). Therefore when we use ```var``` in this scope, ```var``` refers to ```beta::var``` and the output is 3.

<!--------------------QUESTION 10-------------------->

## #Question 10
    What is the output of the following program?
    
        A. The program will cause a compilation error
        B. 1
        C. 2
        D. 3
        
```cpp
#include <iostream>
using namespace std;

class A {
  int a;

public:
  A(void) { a = 1; }
  int b(void) { return ++a; }
};

int main(void) {

  A a;                      // A.a == 1
  a.b();                    // A.a == 2

  cout << a.b() << endl;    // 3

  return 0;
}
```

## #Solution & Explanation To Question 10
#### The correct answer is _D_ (3):
* Here we have a class ```A``` that has one private member ```a```, a constructor ```A()``` that initializes this ```a``` and a public member-function ```b()``` which pre-increments ```a``` and returns its value.
* In main we create an object of type ```A```. ```A.a``` gets initialized to 1 by the constructor.
* We then call the member-function ```b()``` which increments the member-variable ```a``` and therefore now stores the value 2. Here we just discard the return value of ```b()```.
* Finally we call ```b()``` once more, this time using (printing) its return value. ```a``` gets pre-incremented and returned and the output will be 3.