#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char **argv) {
  vector<int> sourceContainer;
  for (int i=0; i<10; i++) {
    sourceContainer.push_back(i);
  }
  vector<int> targetContainer(10);
  copy(
    sourceContainer.begin(), sourceContainer.end(),
    targetContainer.begin());
  for (int i=0; i<targetContainer.size(); i++) {
    cout << targetContainer.at(i) << endl;
  }
  return 0;
}

