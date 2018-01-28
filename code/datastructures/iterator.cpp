#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

class Data {
private:
  int value;
public:
  void setValue(int value) {this->value=value;}
  int getValue() {return value;}
};

int main(int argc, char **argv) {
  
  // create a vector with size 0
  vector<Data> container;
  
  // insert 10 random numbers at the end
  for (int i=0; i<10; i++) {
    Data obj;
    obj.setValue(rand() % 1000);
    container.push_back(obj);
  }

  // loop through all elements with a iterator
  vector<Data>::iterator it;
  for (it=container.begin(); it!=container.end(); it++) {
    cout << it->getValue() << endl;
  }
  
  return 0;
}
