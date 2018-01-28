#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
using namespace std;

int main(int argc, char **argv) {
  vector<int> container;
  for (int i=0; i<10; i++) {
    container.push_back(i);
  }
  unsigned seed =
    chrono::system_clock::now().time_since_epoch().count();
  shuffle(
    container.begin(), container.end(),
    default_random_engine(seed));
  vector<int>::iterator it;
  for (it=container.begin(); it!=container.end(); it++) {
    cout << *it << endl;
  }
  return 0;
}

