#ifndef LISTELEMENT_H
#define LISTELEMENT_H

#include <iostream>
using namespace std;

template <class T>
class ListElement {
private:
  T data;
  ListElement<T> *next;
public:
  ListElement(T data = 0);
  virtual ~ListElement();
  void setData(T data);
  T getData() const;
  void setNext(ListElement<T> *next);
  ListElement<T> *getNext() const;
};

template <class T>
ListElement<T>::ListElement(T data) : data(data), next(0) {
}

template <class T>
void ListElement<T>::setData(T data) {
  this->data = data;
}

template <class T>
T ListElement<T>::getData() const {
  return data;
}

template <class T>
void ListElement<T>::setNext(ListElement<T> *next) {
  this->next = next;
}

template <class T>
ListElement<T>* ListElement<T>::getNext() const {
  return next;
}

template <class T>
ListElement<T>::~ListElement() {
  // debug purposes
  // std::cout << "Element " << data << " deleted!" << std::endl;
}

#endif

