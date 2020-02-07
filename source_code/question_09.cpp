
#include <iostream>
using namespace std;

namespace alpha {
int var = 1; // alpha::var == 1
}

namespace beta {
int var = alpha::var + 1; // beta::var == 2
}

int main(void) {

  beta::var += alpha::var; // beta::var == 3

  {
    using namespace beta;
    cout << var << endl; // 3
  }

  return 0;
}
