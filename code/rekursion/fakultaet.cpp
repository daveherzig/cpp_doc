#include <iostream>
using namespace std;

unsigned int fak(unsigned int n) {
  if (n <= 1) return 1;
  return n * fak(n-1);
}

int main(int argc, char **argv) {
  // Fakultaet von 5 berechnen
  cout << fak(5) << endl;
  return 0;
}