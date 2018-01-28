#include "listelement.h"

#include <iostream>

ListElement::ListElement(int data) : data(data), next(0) {
}

void ListElement::setData(int data) {
  this->data = data;
}

int ListElement::getData() const {
  return data;
}

void ListElement::setNext(ListElement *next) {
  this->next = next;
}

ListElement* ListElement::getNext() const {
  return next;
}

ListElement::~ListElement() {
  std::cout << "Element " << data << " deleted!" << std::endl;
}
