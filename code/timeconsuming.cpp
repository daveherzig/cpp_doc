#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  int n;
  for (int i=0; i<100000; i++) {
    for (int j=0; j<i; j++) {
      if (j != 0) {
        // useless mathematical operation
        n += i % j;
      }
    }
  }
  return 0;
}
