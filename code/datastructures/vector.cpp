#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main(int argc, char **argv) {
  
  // create a vector with size 0
  vector<int> container1;
  
  // create a vector with size 10
  vector<int> container2(10);
  
  // insert 10 random numbers at the end
  for (int i=0; i<10; i++) {
    container1.push_back(rand() % 1000);
    container2.push_back(rand() % 1000);
  }
  // container1 has 10 elements, container2 has 20 elements
  
  // set element a specific position
  int index = 5, value = 223;
  container1[index] = value;
  
  // remove 5 numbers from the end
  for (int i=0; i<5; i++) {
    int valueOfLastElement = container1.back();
    container1.pop_back();
  }
  
  return 0;
}
