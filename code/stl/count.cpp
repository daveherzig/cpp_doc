#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char **argv) {
  vector<int> container;
  for (int i=0; i<10; i++) {
    container.push_back(i);
  }
  int n = count(container.begin(), container.end(), 5);
  cout << n << endl;
  return 0;
}

