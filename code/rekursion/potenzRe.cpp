#include <iostream>
using namespace std;

int power(double x, int n) {
  if (n == 0) return 1;
  if (n == 1) return x;
  if (n % 2 == 0) {
    double result = power(x, n/2);
    return result * result;
  } else {
    double result = power(x, (n-1)/2);
    return result * result * x;
  }
}

int main(int argc, char **argv) {
  cout << power(2, 0) << endl; // 1
  cout << power(2, 1) << endl; // 2
  cout << power(2, 4) << endl; // 16
  return 0;
}