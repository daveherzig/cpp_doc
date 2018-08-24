#include <iostream>
using namespace std;

int main(int argc, char **argv) {

  int sArray[10];
  int *dArray = new int[10];

  for (int i=0; i<10; i++) {
    sArray[i] = i;
    dArray[i] = i;
  }

  // range based for loop C++ 2011 (only sArray)
  for (int value : sArray) {
    cout << value << endl;
  }

  cout << "First Element at: " << sArray << endl;
  cout << "Last Element at: " << &sArray[9] << endl;

  return 0;
}
