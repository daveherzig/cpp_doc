#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char **argv) {
  vector<int> container1;
  vector<int> container2;
  for (int i=0; i<10; i++) {
    container1.push_back(i);
    container2.push_back(9-i);
  }
  bool result = is_permutation(
    container1.begin(), container1.end(), container2.begin());
  cout << result << endl;
  return 0;
}

