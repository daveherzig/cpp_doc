#include "treeelement.h"

#include <iostream>

TreeElement::TreeElement(int data) : left(0), right(0), data(data) {
}

TreeElement::~TreeElement() {
  std::cout << "Delete Element " << data << std::endl;
  delete left;
  delete right;
}

int TreeElement::getData() const {
  return data;
}

TreeElement * TreeElement::getLeft() const {
  return left;
}

TreeElement * TreeElement::getRight() const {
  return right;
}

void TreeElement::setLeft(TreeElement* left) {
  this->left = left;
}

void TreeElement::setRight(TreeElement* right) {
  this->right = right;
}

