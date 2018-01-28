#include "binarytree.h"

#include "treeelement.h"

#include <iostream>
using namespace std;

BinaryTree::BinaryTree() : anchor(0) {
}

bool BinaryTree::add(int v) {
  int size1, size2;
  //size1 = getSize();
  if (anchor==0) {
    anchor = new TreeElement(v);
  }
  else {
    TreeElement *t = findNode(v, anchor);
    TreeElement *trel = new TreeElement(v);
    if (t->getData()<v) {  //go left
      t->setRight(trel);
    } else { //go right
      t->setLeft(trel);
    }
  }
  //size2 = getSize();
  //return (size1!=size2);
  return true;
}

TreeElement *BinaryTree::findNode(int value, TreeElement *root) {
    if (root->getData()>=value && root->getLeft()!=0) { //go left
        return findNode(value, root->getLeft());
    }
    else if (root->getData()<value && root->getRight()!=0) { //go right
        return findNode(value,root->getRight());
    }
    else
        return root;
}

bool BinaryTree::add(TreeContainer *c) {
}

bool BinaryTree::search(int v) {
}

void BinaryTree::remove(int v) {
}

void BinaryTree::clear() {
}

int BinaryTree::getSize() {
  sizeCounter=0;
  if (anchor==0) return 0;
  else {
    rekGetSize(anchor);
    return sizeCounter;
  }
}

void BinaryTree::rekGetSize(TreeElement *root) {
  ++sizeCounter;
  if (root->getLeft()!=0) {
    rekGetSize(root->getLeft());
  }
  if (root->getRight()!=0) {
    rekGetSize(root->getRight());
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

void BinaryTree::preOrder(TreeElement *node) {
  if (node == 0) return;
  cout << node->getData() << ", "; // wurzel
  preOrder(node->getLeft()); // links
  preOrder(node->getRight()); // rechts
}


void BinaryTree::inOrder() {
  inOrder(anchor);
  cout << endl;
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



