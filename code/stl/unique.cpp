#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char **argv) {
  vector<int> container;
  for (int i=0; i<10; i++) {
    container.push_back(i);
    container.push_back(i);
  }
  sort(container.begin(), container.end());
  vector<int>::iterator it = unique(
    container.begin(), container.end());
  container.resize(distance(container.begin(),it));

  // statt resize:
  //container.erase(it, container.end());

  for (it=container.begin(); it!=container.end(); it++) {
    cout << *it << endl;
  }
  return 0;
}

