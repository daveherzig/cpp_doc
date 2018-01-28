#include <iostream>
using namespace std;

void binaryRecursive(unsigned int n) {
  if (n>0) {
    binaryRecursive(n/2);
    cout << (n%2);
  }
}

void binary(unsigned int n) {
  binaryRecursive(n);
  cout << endl;
}

int main(int argc, char **argv) {
  binary(8); // 1000
  binary(24); // 11000
  return 0;
}