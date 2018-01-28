#include <iostream>
using namespace std;

int power(double x, int n) {
  double result = 1;
  for (int i=0; i<n; i++) {
    result *= x;
  }
  return result;
}

int main(int argc, char **argv) {
  cout << power(2, 0) << endl; // 1
  cout << power(2, 1) << endl; // 2
  cout << power(2, 4) << endl; // 16
  return 0;
}