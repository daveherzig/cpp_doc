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
  move(
    sourceContainer.begin(), sourceContainer.end(),
    targetContainer.begin());
  cout << "Size source: " << sourceContainer.size() << endl;
  cout << "Size target: " << targetContainer.size() << endl;
  for (int i=0; i<targetContainer.size(); i++) {
    cout << sourceContainer.at(i) << " - "
         << targetContainer.at(i) << endl;
  }
  return 0;
}

