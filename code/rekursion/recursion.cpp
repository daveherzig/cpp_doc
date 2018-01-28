#include <iostream>
using namespace std;

int fak(int n) {
  int result = 1;
  for (int i=2; i<=n; i++) {
    result = result*i;
  }
  return result;
}

long long fakRe(int n) {
  if (n <= 1) return 1;
  return n * fakRe(n-1);
}

int main(int argc, char **argv) {
 
  cout << fakRe(1) << endl;
  cout << fakRe(4) << endl;
 
  
  return 0;
}