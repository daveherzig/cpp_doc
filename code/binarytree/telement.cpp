#include "telement.h"

TElement::TElement(float data) : data(data), left(0), right(0) {
}

TElement::~TElement() {
  delete left;
  delete right;
}

void TElement::setLeft(TElement *left) {
  this->left = left;
}

void TElement::setRight(TElement *right) {
  this->right = right;
}

void TElement::setData(float data) {
  this->data = data;
}

TElement* TElement::getLeft() {
  return left;
}

TElement* TElement::getRight() {
  return right;
}

float TElement::getData() {
  return data;
}
