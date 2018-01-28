#include "binarytree.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char **argv) {
  BinaryTree *obj = new BinaryTree();

  for (int i=0; i<12; i++) {
    int n = rand() % 100;
    cout << n << ", ";
    obj->add(n);
  }
  cout << endl;

  cout << obj->getSize() << endl;

  obj->preOrder();
  obj->inOrder();
  obj->postOrder();

  obj->remove(83);
  obj->inOrder();

  return 0;
}

