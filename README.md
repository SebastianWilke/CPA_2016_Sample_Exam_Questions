
# CPA_2016_Sample_Exam_Questions - <br/> Solutions and Explanations

### This repository is intended to serve as a look-up for questions, solutions and explanations to the 2016 C++ Certified Associate Programmer - CPA example questions by [C++ Institute](https://cppinstitute.org/).

### All questions can also be found in [this PDF](https://cppinstitute.org/wp-content/uploads/2016/07/CPA_sample_exam_questions.pdf).

#### *NOTES:*
* I do not own any rights on these questions.
* These are advanced questions and should not be used as starting point for learning C++.
* Feel free to report any mistakes made in this document.

<br/>
<br/>

Question | Source Code | Solution And Explanation
---:|---|:---:
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
[Question 11](#question-11) | [question_11.cpp](https://github.com/SebastianWilke/cpa_2016_example_questions/blob/master/source_code/question_11.cpp) | [Solution & Explanation](#solution--explanation-to-question-11)
[Question 12](#question-12) | [question_12.cpp](https://github.com/SebastianWilke/cpa_2016_example_questions/blob/master/source_code/question_12.cpp) | [Solution & Explanation](#solution--explanation-to-question-12)
[Question 13](#question-13) | [question_13.cpp](https://github.com/SebastianWilke/cpa_2016_example_questions/blob/master/source_code/question_13.cpp) | [Solution & Explanation](#solution--explanation-to-question-13)
[Question 14](#question-14) | [question_14.cpp](https://github.com/SebastianWilke/cpa_2016_example_questions/blob/master/source_code/question_14.cpp) | [Solution & Explanation](#solution--explanation-to-question-14)
[Question 15](#question-15) | [question_15.cpp](https://github.com/SebastianWilke/cpa_2016_example_questions/blob/master/source_code/question_15.cpp) | [Solution & Explanation](#solution--explanation-to-question-15)
[Question 16](#question-16) | [question_16.cpp](https://github.com/SebastianWilke/cpa_2016_example_questions/blob/master/source_code/question_16.cpp) | [Solution & Explanation](#solution--explanation-to-question-16)
[Question 17](#question-17) | [question_17.cpp](https://github.com/SebastianWilke/cpa_2016_example_questions/blob/master/source_code/question_17.cpp) | [Solution & Explanation](#solution--explanation-to-question-17)
[Question 18](#question-18) | [question_18.cpp](https://github.com/SebastianWilke/cpa_2016_example_questions/blob/master/source_code/question_18.cpp) | [Solution & Explanation](#solution--explanation-to-question-18)
[Question 19](#question-19) | [question_19.cpp](https://github.com/SebastianWilke/cpa_2016_example_questions/blob/master/source_code/question_19.cpp) | [Solution & Explanation](#solution--explanation-to-question-19)
[Question 20](#question-20) | [question_20.cpp](https://github.com/SebastianWilke/cpa_2016_example_questions/blob/master/source_code/question_20.cpp) | [Solution & Explanation](#solution--explanation-to-question-20)
[Question 21](#question-21) | [question_21.cpp](https://github.com/SebastianWilke/cpa_2016_example_questions/blob/master/source_code/question_21.cpp) | [Solution & Explanation](#solution--explanation-to-question-21)
[Question 22](#question-22) | [question_22.cpp](https://github.com/SebastianWilke/cpa_2016_example_questions/blob/master/source_code/question_22.cpp) | [Solution & Explanation](#solution--explanation-to-question-22)

<br/>

<!--------------------QUESTION 1-------------------->

# #Question 1
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

# #Question 2
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

# #Question 3
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

# #Question 4
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
* ```b``` gets assigned the value returned by function ```fun1()```. This function takes an int (per value), increments it and returns it. Note that ```return p++``` returns the value and then increments it. In this case we call ```fun1()``` with a = 1, so it returns 2.
* ```c``` gets assigned the value returned by function ```fun2()```. But this time we are passing it a reference to int (a reference to b = 2). Now the increment ```++p``` in ```fun2()``` modifies the value of ```b``` (see comments)! Again we return it and increment it. Thus we return 3 but ```b``` gets post-incremented and now holds the value 4.

<!--------------------QUESTION 5-------------------->

# #Question 5
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
* In C++ you can _overload_ functions. That means functions can have the same name but must have different [signatures](https://en.cppreference.com/w/cpp/language/function) (different parameter types). [See also](https://en.cppreference.com/w/cpp/language/overload_resolution). <br/> In this question function ```fun()``` is _overloaded_.
* ```v *``` is a pointer to int and gets assigned the value returned by function ```fun()``` which returns a pointer to the beginning (starting address) of an int array of size 2.
* Both functions ```fun(int *, int, int)``` ```fun(int *, int)``` expect the first parameter to be an array. <br/> The first one assigns the value of the third parameter to position of the second parameter (see comments). <br/> The second one just doubles the value stored at position of the second parameter.

<!--------------------QUESTION 6-------------------->

# #Question 6
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
* ```f1()``` uses the [ternary operator](https://en.cppreference.com/w/cpp/language/operator_other). It checks whether the passed char is equal to 'z'. If it is, the function returns 'a'. If it is not, the function returns the next char in the [ascii table](http://man7.org/linux/man-pages/man7/ascii.7.html) (```c + 1```).
* ```f2()``` simply passes its argument to ```f1()``` and - since it is passed by reference (```char &c```) - ```c``` also gets set to this return value. In other words variable ```x``` in main gets set to this return value. Finally ```c``` is returned from the function.
* See the comments in above code to understand how ```x``` is changing.

<!--------------------QUESTION 7-------------------->

# #Question 7
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
* First an array ```t``` of type ```int *``` is created. We get a pointer to int - and at both of these addresses we store yet another 2-element-array - giving us space to store 4 integers. We now have an array of array of int.
* We then loop through every element in ```t```. The following list shows the sequence in which the positions in ```t``` are assigned in the for loop:
    ```
    i=0: t[0][0] = 0
    i=1: t[1][0] = 1
    i=2: t[0][1] = 2
    i=3: t[1][1] = 3
    ```
* Leaving ```t``` with elemets ```t = {{0, 2}, {1, 3}}```.
* Note that we call the ```delete[]``` ([like delete but for arrays](https://en.cppreference.com/w/cpp/language/delete)) to destroy both arrays in ```t``` created by our ```new int[]```-expression earlier.

<!--------------------QUESTION 8-------------------->

# #Question 8
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
* [+](https://en.cppreference.com/w/cpp/string/basic_string/operator%2B) as in ```s = s + t``` is the non-member function of ```basic_string``` and just concatenates the strings ```s``` and ```t```.
* Operator [compare](https://en.cppreference.com/w/cpp/string/basic_string/compare) checks the lexicographical order of the two strings. ```s.compare(t)``` returns a negative value, 0 or a positive if ```s``` comes before ```t```, both are equivalent or ```s``` comes after ```t``` in the lexicographical order respectively. Since the character _b_ comes after the letter _A_ in the ascii table, ```s``` appears _after_ ```t``` in lexicographically order. Thus ```compare()``` returns a positive value. A positive value is not greater than 0 (```s.compare(t) > 0```) so ```i``` gets assigned the value 1.
* Since ```s``` has a shorter length than ```t``` the expression ```s.length() < t.length()``` evaluates to true and ```j``` gets assigned the value 1 as well.

<!--------------------QUESTION 9-------------------->

# #Question 9
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
* This one is pretty straight forward. We have two named namespace definitions, namely ```alpha``` and  ```beta```.
* In main we than access ```beta::var``` and add to it the value of ```alpha::var```.
* We then define a new scope (block / area between ```{``` and ```}```). With the using-directive ```using namespace beta;``` we make every name in the namespace ```beta``` visible (available) in this scope. Therefore when we use ```var``` in this scope, ```var``` refers to ```beta::var``` and the output is 3.

<!--------------------QUESTION 10-------------------->

# #Question 10
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

<!--------------------QUESTION 11-------------------->

# #Question 11
    What is the output of the following program?
    
        A. The program will cause a compilation error
        B. 10
        C. 01
        D. 11
        
```cpp
#include <iostream>
using namespace std;

class A {
public:
  A() { a.a = a.b = 1; }

  struct {
    int a, b;
  } a;

  int b(void);
};

int A::b(void) {
  int x = a.a;
  a.a = a.b;
  a.b = x;
  return x;
};

int main(void) {

  A a;                              // a.a.a == 1, a.a.b == 1
  a.a.a = 0;                        // a.a.a == 0, a.a.b == 1
  a.b();                            // a.a.a == 1, a.a.b == 0

  cout << a.b() << a.a.b << endl;   // output: 1, a.a.a == 0, a.a.b == 1, output: 1

  return 0;
}
```

## #Solution & Explanation To Question 11
#### The correct answer is _D_ (11): (Note that the document suggest B as answer, which is wrong imo)
* We have a class ```A``` that has a constructor which initializes the public member ```struct a```. It also has a public member-function ```b()``` which is only declared in the class but later defined.
* The member-function ```b()``` essentially swaps the values of the members ```a``` and ```b``` in the ```struct a``` and returns ```a.a```'s old value.
* In main we create an object of type ```A``` called ```a```. Both ```a.a.a``` and ```a.a.b``` get initialized to 1 by the constructor.
* We than set ```a.a.a``` to 0 before calling ```a.b()```. Here we are ignoring the return value of ```b()```.
* Finally we call ```b()``` again this time using (printing) its return value. This is the value of the struct field ```a.a``` before the swap - here 1. Be careful! ```a.a.b``` got swapped with ```a.a.a``` by the previous call to ```b()``` and now holds the value 1 - giving us a result of 11.


<!--------------------QUESTION 12-------------------->

# #Question 12
    What is the output of the following program?
    
        A. The program will cause a compilation error
        B. 1
        C. 3
        D. 5
        
```cpp
#include <iostream>
using namespace std;

class A {
public:
  int a;

  A() { a = 0; }

  A(int b) { a = b + 1; }
};

class B {
public:
  A a;

  B() : a(0) {}
};

int main(void) {

  B *b = new B();               // b.a.a == 1

  cout << b->a.a << endl;

  return 0;
}
```

## #Solution & Explanation To Question 12
#### The correct answer is _B_ (1):
* This time starting in main we create an object of type ```B *``` called ```b``` assigning it the pointer returned by the new operator call ```new B()```.
* Thus the constructor of class ```B``` is called. This in turn calls the constructor ```A(int)``` of its member ```a```. ```B```'s ```a.a``` is set by ```A```'s constructor to the parameter passed + 1 => 0 + 1 => 1.
* This value (1) is printed using the member access operator ```->``` to access members of a pointer.

<!--------------------QUESTION 13-------------------->

# #Question 13
    What is the output of the following program?
    
        A. The program will cause a compilation error
        B. 1
        C. 2
        D. 4
        
```cpp
#include <iostream>
using namespace std;

class A {
public:
  int x;
  void d() { x /= 2; }
};

class B : public A {
public:
  int y;
  void d() { A::d(); }
};

int main(void) {

  B b;                          // b.x == 0, b.y == (not sure if this behavior is defined)
  b.x = b.y = 4;                // b.x == 4, b.y == 4
  b.d();                        // b.x == 2, b.y == 4

  cout << b.y / b.x << endl;    // output: 4 / 2 == 2

  return 0;
}
```

## #Solution & Explanation To Question 13
#### The correct answer is _C_ (2):
* This example code uses [inheritance](https://en.cppreference.com/book/intro/inheritance). Since B inherits from ```A``` publicly, ```B``` inherits all public members of ```A```. You can think of it like ```B``` having an anonymous/invisible reference of A thus also having all members of A.
* Some terminology: ```A``` is ```superclass``` of ```B```. ```B``` is ```subclass``` of ```A```.
* Class ```B``` defines a function, namely ```d()``` that has the same name as a function in its superclass. This is called ```function overriding```. B _redefines_ function ```b()```. Note that since ```B``` inherits from ```A```, we could call ```b.d()``` even if had not defined the function ```d()``` in ```B```! It would just call the function ```d()``` of its superclass ```A``` in that case.
* The call to ```b.d()``` calls the overridden function instead of the one defined in ```A```. Here ```B.d()``` calls ```A.d()``` and ```b.x``` gets divided by 2.
* Rest: see comments in above code.

<!--------------------QUESTION 14-------------------->

# #Question 14
    What is the output of the following program?
    
        A. The program will cause a compilation error
        B. 1
        C. 2
        D. 4
        
```cpp
#include <iostream>
using namespace std;

class A {
public:
  int work(void) { return 4; }
};

class B : public A {
public:
  int relax(void) { return 2; }
};

class C : public A {
public:
  int relax(void) { return 1; }
};

int main(void) {
  A *a0 = new A, *a1 = new B, *a2 = new C;

  cout << a0->work() +                              // calls A.relax(), returns 4
              static_cast<C *>(a2)->relax() /       // calls C.relax(), returns 1
                  static_cast<B *>(a1)->relax()     // calls B.relax(), returns 2
       << endl;                                     // output: (4 + (1 / 2)) == 4

  return 0;
}
```

## #Solution & Explanation To Question 14
#### The correct answer is _D_ (4):
* We have ```A``` as a base class of class ```B``` and class ```C``` inherent publicly. Both of theses classes add their own ```relax()```-function.
* In main we create three objects of type ```A *```, assigning them an object of type ```A```, ```B``` and ```C``` respectively using the new-expressions. This is possible since class ```B``` and class ```C``` can be thought of as extensions of class ```A``` (having a anonymous/invisible reference of ```A``` in them).
* We then first call ```a0->work()``` which calls ```A```'s ```work()```-function as expected.
* After that we [static_cast](https://en.cppreference.com/w/cpp/language/static_cast) ```a2``` which is of base type ```A *``` to type ```C *```. When now calling the ```relax()```-function we are calling ```C.relax()```.
* We do the same thing with ```a1``` but this time static_cast it to type ```B *```. When now calling the ```relax()```-function we are calling ```B.relax()```.
* For the output we have to follow the [operator precedence](https://en.cppreference.com/w/cpp/language/operator_precedence) so we print (4 + (1 / 2)) which is 4.

<!--------------------QUESTION 15-------------------->

# #Question 15
    What is the output of the following program?
    
        A. The program will cause a compilation error (or warning in some compilers)
        B. 1
        C. 2
        D. 4
        
```cpp
#include <iostream>
using namespace std;

class B;

class A {
  friend class B;
  int a;

public:
  A() : a(4) {}
  void f(B &b, A &a);
  int out(void) { return a; }
};

class B {
  friend class A;
  int b;

public:
  B() : b(2) {}
  void f(A &a) { a.a /= b; }
};

void A::f(B &b, A &a) { b.f(*this); }

int main(void) {

  A a;                          // a.a == 4
  B b;                          // b.b == 2

  a.f(b, a);                    // a.a == 2, b.b == 2

  cout << a.out() << endl;      // output: 2

  return 0;
}
```

## #Solution & Explanation To Question 15
#### The correct answer is _C_ (2):
* At the beginning we are ```forward declaring``` ```class B```. This is done so we are able to use this name before having it defined below. It allows use to use it in the class ```A```.
* We are also seeing [friend declarations](https://en.cppreference.com/w/cpp/language/friend) both in class ```A``` and in class ```B```. This declaration grants a function or another class access to private and protected members of the class where the friend declaration appears.<br/>
In other words: when we add the friend declaration ```friend class B;``` in class ```A```, we give class ```A``` access to private and protected members of class ```B```.
* In main we first create an object of type ```A``` called ```a``` and another object of type ```B``` called ```b```.
* We then call ```a.f()``` with reference to these objects ```b``` and ```a```. This function in turn calls ```b.f()``` with the [*this pointer](https://en.cppreference.com/w/cpp/language/this) whose value is the address of the object, on which the member function is being called (hence the address of object ```a```). We enter ```B.f()``` with a reference to the object ```a```. ```a.a``` gets divided by ```b```, which still has value 2 - thus leaving ```a.a``` with value (4 / 2) == 2.
* Finally we are calling ```a.out()``` returning the value of ```a.a``` which is 2.

<!--------------------QUESTION 16-------------------->

# #Question 16
    What is the output of the following program?
    
        A. The program will cause a compilation error
        B. 3
        C. 4
        D. 5
        
```cpp
#include <iostream>
using namespace std;

class A {
public:
  static int a;
  A() { a++; }
};

int A::a = 1;

void f(void) {
  A a;
  throw string("?");
}

int main(void) {
                                // A::a == 1
  A a;                          // A::a == 2

  try {
    f();                        // A::a == 3
  } catch (string &s) {
  }

  cout << A::a << endl;

  return 0;
}
```

## #Solution & Explanation To Question 16
#### The correct answer is _B_ (3):
* Class ```A``` has a [static member](https://en.cppreference.com/w/cpp/language/static) ```a```. This means that ```a``` is not bound to this specific class instance.
* In main we create an object of type ```A``` called ```a```. Then a [try-catch-block](https://en.cppreference.com/w/cpp/language/try_catch) follows. The formal parameter of the catch clause (here simply string &) determines which types of exceptions cause this catch clause to be entered.
* In the try block we are calling function ```f()```. This function just creates another object of type ```A``` called ```a```. This ```a``` does not interfere with the a in main because they are in different _scopes_. The constructor of class ```A``` post-increments ```a```. Again ```a``` is not bound to any specific instance (is shared between all instances of class ```A```) thus was holding the value 2 and got incremented to 3 now. ```f()``` then trows a string, namely "?".
* This string ("?") gets caught in main although nothing is done in the _catch clause_. We print the value of the static variable using the scope resolution operator ```::``` ([see](https://en.cppreference.com/w/cpp/language/qualified_lookup)) giving us a value of 3.

<!--------------------QUESTION 17-------------------->

# #Question 17
    What is the output of the following program?
    
        A. The program will cause a compilation error
        B. 3
        C. 4
        D. 5
        
```cpp
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

void f(void) { throw domain_error("err"); }

int main(void) {

  int a = 4;

  try {
    f();
  } catch (runtime_error &e) {
    a--;
  } catch (...) {
    a++;
  }

  cout << a << endl;                            // a == 5

  return 0;
}
```

## #Solution & Explanation To Question 17
#### The correct answer is _D_ (5):
* First of all: what is a [domain_error](https://en.cppreference.com/w/cpp/error/domain_error)? It is a situation where the inputs are outside of the domain on which an operation is defined.
* In main we have a try-catch-block which catches a [runtime_error](https://en.cppreference.com/w/cpp/error/runtime_error) -exception in its first catch-clause and catches any exception in its second catch-clause. Because the function ```f()``` does not throw a runtime_error we enter the second catch-clause and ```a``` gets post-incremented.
* Therefore the output is 5.

<!--------------------QUESTION 18-------------------->

# #Question 18
    What is the output of the following program?
    
        A. The program will cause a compilation error
        B. 3
        C. 4
        D. 5
        
```cpp
#include <iostream>
#include <exception>
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
    g();                    // i == 2
    i++;
  } catch (...) {
    i++;                    // i == 3
  }

  cout << i << endl;        // output: 3

  return 0;
}
```

## #Solution & Explanation To Question 18
#### The correct answer is _B_ (3):
* Two small things: Since ```i``` is declared outside of any scope it is a _global variable_. the ```i++;``` in the function ```f()``` after the trow instruction is essentially dead code - it cannot be reached.
* Starting in main we call the function ```g()``` in the try-catch-clause. In the function ```g()``` we post-increment i (now holds value 2) and call ```f()``` inside yet another try-catch-clause. Inside ```f()``` we just throw 1 (which btw is a bad practice since the type _int_ is not derived from _std::exception_) - As mentioned before the ```i++```-instruction is unreachable. Back in ```g()``` we catch the 1 thus enter the catch-clause in function ```g()```. Note that the ```i``` in ```throw ++i;``` refers to the parameter of the catch-clause and _not_ to the global variable ```i```.
* Back in main. Since there was something (an int) thrown and we are catching any exception the ```i++``` after the ```g();``` call is _not_ being executed! we catch the thrown 1 and post-increment ```i```. Therefore the output will be 3. See comments in above code to see when ```i``` actually changes.

<!--------------------QUESTION 19-------------------->

# #Question 19
    What is the output of the following program?
    
        A. The program will cause a compilation error
        B. 3
        C. 4
        D. 5
        
```cpp
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

int i = 3;

class A : public runtime_error {
public:
  A() : runtime_error("?") {}
};

class B : public logic_error {
public:
  B() : logic_error("!") {}
};

void f(void) {
  i++;
  throw B();
  i++;
}

void g(void) {
  try {
    f();
  } catch (A &a) {
    throw A();
  }
}

int main(void) {
                                                    // i == 3
  try {
    g();                                            // i == 4
    i++;
  } catch (logic_error &l) {
    i++;                                            // i == 5
  } catch (...) {
    i++;
  }
  cout << i << endl;                                // output: 5
  return 0;
}
```

## #Solution & Explanation To Question 19
#### The correct answer is _X_ (Y):
* Since ```i``` is defined outside of any scope it is a _global variable_.
* Class ```A``` und class ```B``` inherit from runtime_error and logic_error respectively. Their constructors just call these class'es constructor with a _"?"_ and _"!"_ respectively. You can think of it as ```A``` now being a runtime_error and ```B``` now being an logic_error. (If A inherits from B, A is B but B is not necessarily A).
* In main we call function ```g()```. From there we are calling function ```f()```. In ```f()``` we are post-incrementing ```i``` (now holds value 4) and throw ```B()```. Again: the ```i++;``` after the throw instruction is _dead code_. Since we are only catching exceptions of type ```A &``` we do not enter the catch-clause back in ```g()```. Back in main however we are catching the ```B()``` which acts like a logic_error thereby skipping the ```i++;```instruction after the call to ```g();```. The body of the catch-clause (```catch (logic_error &l)```) is executed and i gets post-incremented again - now storing the value 5.
* See comments in above code to see when ```i``` actually changes.

<!--------------------QUESTION 20-------------------->

# #Question 20
    What is the output of the following program?
    
        A. The program will cause a compilation error
        B. 1
        C. 2
        D. 4
        
```cpp
#include <iostream>
using namespace std;

class A {
public:
  int v;

  A() : v(1) {}

  A(int i) : v(i) {}

  void operator&&(int a) { v = -v; }
};

int main(void) {

  A i = 2;

  i && 2;

  cout << i << endl;

  return 0;
}
```

## #Solution & Explanation To Question 20
#### The correct answer is _A_ (compilation error):
* We get ```error: no match for ‘operator<<’ (operand types are ‘std::ostream’ {aka ‘std::basic_ostream<char>’} and ‘A’)```.
* The ```&&```-operator overload is perfectly valid. For the code to work we would have to define a ```<<```-operator overload for our class ```A``` as well. This could look something like this:
```cpp
ostream &operator<<(ostream &os, A &a) {
  os << a.v;
  return os;
}
```
We then could add this function as a friend to our class:
```cpp
  ...

  void operator&&(int a) { v = -v; }
 
  friend ostream &operator<<(ostream &os, A &a);         // new!
};
```
and everything would work.


<!--------------------QUESTION 21-------------------->

# #Question 21
    What is the output of the following program?
    
        A. The program will cause a compilation error
        B. 1
        C. 2
        D. 4
        
```cpp
#include <iostream>
using namespace std;

class A {
public:
  int v;

  A() : v(1) {}

  A(int i) : v(i) {}

  void operator**(int a) { v *= a; }
};

int main(void) {

  A i = 2;
  i ** 2;

  cout << i.v << endl;

  return 0;
}
```

## #Solution & Explanation To Question 21
#### The correct answer is _A_ (compilation error):
* We are trying to overload an operator which cannot be overloaded. See [this](https://en.cppreference.com/w/cpp/language/operators) for a list of operators that can be overloaded.

<!--------------------QUESTION 22-------------------->

# #Question 22
    What is the output of the following program?
    
        A. The program will cause a compilation error (or warning in some compilers)
        B. 1
        C. 3
        D. 4
        
```cpp
#include <iostream>
using namespace std;

enum e { a = 1, b, c, d };

e &operator--(e &x) {
  x = b;
  return x;
}

int main(void) {

  e f = c;

  cout << int(f--) << endl;

  return 0;
}
```

## #Solution & Explanation To Question 22
#### The correct answer is _A_ (compilation error):
* We get ```error: no ‘operator--(int)’ declared for postfix ‘--’```.
* Note that it is possible to overload operators for enums in C++. What went wrong here is we defined a prefix-increment operator but try to use a postfix-increment operator. To fix this we would have to add an additional int parameter (a dummy is sufficient) like this <br/>
```cpp
e &operator--(e &x, int) {
  x = b;
  return x;
}
```
to distinguish post / pre-increment. Then the code would compile.