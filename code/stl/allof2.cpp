#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main(int argc, char **argv) {
  list<int> container;
  for (int i=0; i<10; i++) {
    container.push_back(i);
  }
  bool result = all_of(
    container.begin(), container.end(),
    [](int i){return i >= 0;});
  cout << result << endl;
  return 0;
}

