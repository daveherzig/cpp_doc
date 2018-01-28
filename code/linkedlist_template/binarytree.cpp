#include "binarytree.h"

#include "treeelement.h"
#include <iostream>
using namespace std;

BinaryTree::BinaryTree() : anchor(0) {
}

BinaryTree::~BinaryTree() {
  delete anchor;
}

bool BinaryTree::add(int v) {
  TreeElement *iterator = anchor;

  TreeElement *te = new TreeElement(v);
  bool elementInserted = false;

  while (!elementInserted && iterator != 0) {
    if (iterator->getData() > v) {
      if (iterator->getLeft() != 0) {
        iterator = iterator->getLeft();
      } else {
        iterator->setLeft(te);
        elementInserted = true;
      }
    } else if (iterator->getData() < v) {
      if (iterator->getRight() != 0) {
        iterator = iterator->getRight();
      } else {
        iterator->setRight(te);
        elementInserted = true;
      }
    } else {
      // Element already exist
      return false;
    }
  }

  if (!elementInserted) {
    anchor = te;
  }

  return true;
}

bool BinaryTree::add(TreeContainer *c) {
}

bool BinaryTree::search(int v) {
  TreeElement *iterator = anchor;
  while (iterator != 0) {
    if (iterator->getData() == v) return true;
    if (iterator->getData() > v) {
      iterator = iterator->getLeft();
    } else {
      iterator = iterator->getRight();
    }
  }
  return false;
}

void BinaryTree::remove(int v) {
  this->internalRemove(this->anchor, 0, v);
}

void BinaryTree::internalRemove(TreeElement* node, TreeElement* parent, int v){
  if(node->getData() == v){
    cout << "Found ";
    int childs = 0;
    TreeElement *tmp = 0;
    if(node->getLeft() != 0){
      childs++;
      tmp = node->getLeft();
    }
    if(node->getRight() != 0){
      childs++;
      tmp = node->getRight();
    }
    cout << "Number of Childs: " << childs << endl;
    if(childs <= 1){
      if(parent->getLeft() == node){
        parent->setLeft(tmp);
      } else {
        parent->setRight(tmp);
      }
      node->setLeft(0);
      node->setRight(0);
      delete node;
    } else {
      TreeElement *sibling = node->getRight();
      TreeElement *parrentOfSibling = node;
      while(sibling->getLeft() != 0){
        parrentOfSibling = sibling;
        sibling = sibling->getLeft();
      }
      sibling->setLeft(node->getLeft());
      parrentOfSibling->setLeft(sibling->getRight());
      sibling->setRight(node->getRight());
      if(parent == 0){
        this->anchor = sibling;
      } else {
        parent->setLeft(sibling);
      }
      node->setLeft(0);
      node->setRight(0);
      delete node;
    }
  } else {
    if(v>node->getData())
      this->internalRemove(node->getRight(), node, v);
    else
      this->internalRemove(node->getLeft(), node, v);
  }
}

void BinaryTree::clear() {
  delete anchor;
  anchor = 0;
}

int BinaryTree::getSize() {
  sizeCounter=0;
  if (anchor==0) return 0;
  else {
    getSize(anchor);
    return sizeCounter;
  }
}

void BinaryTree::getSize(TreeElement *node) {
  ++sizeCounter;
  if (node->getLeft()!=0) {
    getSize(node->getLeft());
  }
  if (node->getRight()!=0) {
    getSize(node->getRight());
  }
}

void BinaryTree::postOrder() {
  postOrder(anchor);
  cout << endl;
}

void BinaryTree::preOrder() {
  preOrder(anchor);
  cout << endl;
}

void BinaryTree::inOrder() {
  inOrder(anchor);
  cout << endl;
}

void BinaryTree::preOrder(TreeElement *node) {
  if (node == 0) return;
  cout << node->getData() << ", "; // wurzel
  preOrder(node->getLeft()); // links
  preOrder(node->getRight()); // rechts
}

void BinaryTree::inOrder(TreeElement *node) {
  if (node == 0) return;
  inOrder(node->getLeft()); // links
  cout << node->getData() << ", "; // wurzel
  inOrder(node->getRight()); // rechts
}

void BinaryTree::postOrder(TreeElement *node) {
  if (node == 0) return;
  postOrder(node->getLeft()); // links
  postOrder(node->getRight()); // rechts
  cout << node->getData() << ", "; // wurzel
}

