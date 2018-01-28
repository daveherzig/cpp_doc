#include <iostream>
#include <cstdlib>
using namespace std;

class ArrayUtil {
public:
  static int* createRandomArray(int numberOfElements, unsigned int max);
  static int count(int* values, int size, int value);
};

int* ArrayUtil::createRandomArray(unsigned int numberOfElements, unsigned int max) {
  int* result = new int[numberOfElements];
}

int main(int argc, char **argv) {

  return 0;
}
