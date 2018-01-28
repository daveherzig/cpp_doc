#include <iostream>
using namespace std;

int fibonacci(unsigned int n) {
  if (n == 0 || n == 1) return n;
  return fibonacci(n-1) + fibonacci(n-2);
}

int main(int argc, char **argv) {
  cout << fibonacci(6) << endl; // 8
  cout << fibonacci(12) << endl; // 144
  return 0;
}