#include "linkedlist.h"

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char **argv) {

  LinkedList *list = new LinkedList();

  // insert 4 elements
  for (int i=0; i<4; i++) {
    list->add(rand() % 1000);
  }
  
  cout << *list << endl;
  delete list;
  
  return 0;
}
