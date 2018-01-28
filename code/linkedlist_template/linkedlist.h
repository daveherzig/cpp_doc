#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "container.h"

#include <iostream>

class ListElement;

class LinkedList : public Container {
private:
  ListElement *anchor;
  virtual bool get(int index, ListElement & le);

public:

  LinkedList();
  virtual ~LinkedList();
  virtual bool add(int v);
  virtual bool add(Container *c);
  virtual bool get(int index, int & v);
  virtual void remove(int index);
  virtual bool insert(int index, int v);
  virtual bool swap(int index1, int index2);
  virtual bool edit(int index, int v);
  virtual void clear();
  virtual int getSize();

  friend std::ostream & operator << (std::ostream & stream, LinkedList & obj);
};



#endif
