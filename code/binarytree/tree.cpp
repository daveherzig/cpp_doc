#include "tree.h"

#include "telement.h"

#include <iostream>
using namespace std;

Tree::Tree() : root(0) {
}

bool Tree::add(float value) {
  if (root == 0) {
    root = new TElement(value);
    return true;
  }
  TElement *it = root;
  while (it != 0) {
    if (it->getData() == value) return false;
    if (it->getData() > value && it->getLeft() == 0) {
      TElement *t = new TElement(value);
      it->setLeft(t);
      return true;
    }
    if (it->getData() < value && it->getRight() == 0) {
      TElement *t = new TElement(value);
      it->setRight(t);
      return true;
    }
    if (it->getData() > value) it = it->getLeft();
    else it = it->getRight();
  }
}

bool Tree::drop(float value) {
}

bool Tree::contains(float value) {
}

int Tree::count() {
  int result = 0;
  count(root, result);
  return result;
}

void Tree::count(TElement *t, int & result) {
  if (t != 0) {
    result++;
    count(t->getLeft(), result);
    count(t->getRight(), result);
  }
}

void Tree::clear() {
  delete root;
  root = 0;
}

float Tree::min(bool & ok) {
  if (root == 0) {
    ok = false;
    return -1;
  }
  ok = true;
  TElement *it = root;
  while (it->getLeft() != 0) {
    it = it->getLeft();
  }
  return it->getData();
}

float Tree::max(bool & ok) {
  if (root == 0) {
    ok = false;
    return -1;
  }
  ok = true;
  TElement *it = root;
  while (it->getRight() != 0) {
    it = it->getRight();
  }
  return it->getData();
}

void Tree::preOrder() {
  preOrder(root);
  cout << endl;
}

void Tree::postOrder() {
  postOrder(root);
  cout << endl;
}

void Tree::inOrder() {
  inOrder(root);
  cout << endl;
}

void Tree::preOrder(TElement *t) {
  if (t != 0) {
    cout << t->getData() << " ";
    preOrder(t->getLeft());
    preOrder(t->getRight());
  } 
}

void Tree::postOrder(TElement *t) {
  if (t != 0) {
    postOrder(t->getLeft());
    postOrder(t->getRight());
    cout << t->getData() << " ";
  }
}

void Tree::inOrder(TElement *t) {
  if (t != 0) {
    inOrder(t->getLeft());
    cout << t->getData() << " ";
    inOrder(t->getRight());
  }
}

bool Tree::isEmpty() {
  return root == 0;
}

int Tree::depth() {
  dCounter = 0;
  maxDepth = 0;
  depth(root);
  return maxDepth;
}

void Tree::depth(TElement *t) {
  dCounter++;
  if (t != 0) {
    if (t->getLeft() == 0 && t->getRight() == 0) {
      if (maxDepth < dCounter) {
        maxDepth = dCounter;
      }
    } else {
      depth(t->getLeft());
      depth(t->getRight());
    }
  }
  dCounter--;
}

