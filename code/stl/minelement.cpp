#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char **argv) {
  vector<int> container;
  for (int i=0; i<10; i++) {
    container.push_back(i);
  }
  vector<int>::iterator it =
    min_element(container.begin(), container.end());
  cout << *it << endl;
  return 0;
}

