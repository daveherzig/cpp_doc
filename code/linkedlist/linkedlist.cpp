#include "linkedlist.h"

#include "listelement.h"

LinkedList::LinkedList() : anchor(0) {
}

bool LinkedList::add(int v) {
  ListElement *le = new ListElement;
  le->setData(v);
  int size1, size2;
  size1 = getSize();
  ListElement *iterator=anchor;
  if (anchor==0) {
    anchor=le;
  } else {
    int counter=0;
    counter = this->getSize()-1;
    for (int i=0;i<counter;++i) {
      iterator = iterator->getNext();
    }
    iterator->setNext(le);
  }
  le->setNext(0);
  //Zum überprüfen ob das Hinzufügen klappte
  size2 = getSize();
  return size1!=size2;
}

bool LinkedList::add(Container *c) {
  int s = c->getSize();
  for (int i=0; i<s; i++) {
    int v;
    c->get(i, v);
    add(v);
  }
  return true;
}

bool LinkedList::get(int index, int & v) {
  if (index>=this->getSize() || anchor==0)
    return false;
  ListElement *iterator=anchor;
  for (int i = 0;i<index;++i) {
    iterator=iterator->getNext();
  }
  v =  iterator->getData();
  return true;
}

bool LinkedList::get(int index, ListElement & le) {
  if (index>=this->getSize() || anchor==0)
    return false;
  ListElement *iterator=anchor;
  for (int i = 0;i<index;++i) {
    iterator=iterator->getNext();
  }
  le =  *iterator;
  return true;
}

void LinkedList::remove(int index) {
  if(index < 0||index > this->getSize() -1 ) return;
  int coutner = 0;
  ListElement *toDel = 0;
  if (index == 0) {
    toDel = this->anchor;
    this->anchor = this->anchor->getNext();
    delete toDel;
    return;
  }
  ListElement *it = this->anchor;
  while (coutner != (index - 1)) {
    coutner++;
    it = it->getNext();
  }
  toDel = it->getNext();
  it->setNext(toDel->getNext());
  delete toDel;
}

bool LinkedList::insert(int index, int v) {
}

LinkedList::~LinkedList() {
  clear();
}

bool LinkedList::swap(int index1, int index2) {
  if(index1 == index2) return true;

  if (index1 < 0 || index1 > getSize()-1) return false;
  if (index2 < 0 || index2 > getSize()-1) return false;

  int smaller, bigger;
  if(index1 < index2){
    smaller = index1;
    bigger = index2;
  }
  else{
    smaller = index2;
    bigger = index1;
  }
  ListElement *iterator1 = anchor;
  int i;
  for(i=0; i<smaller; i++){
    iterator1 = iterator1->getNext();
  }
  ListElement *iterator2 = iterator1;
  for(int y=i; y<bigger; y++){
    iterator2 = iterator2->getNext();
  }
  int tmp = iterator1->getData();
  iterator1->setData(iterator2->getData());
  iterator2->setData(tmp);
  return true;
}

bool LinkedList::edit(int index, int v) {
  if (index < 0 || index > getSize()-1) return false;
  ListElement *iterator = anchor;
  for(int i=0; i<index; i++){
    iterator = iterator->getNext();
  }
  iterator->setData(v);
  return true;
}

void LinkedList::clear() {
  while (anchor != 0) {
    remove(0);
  }
}

int LinkedList::getSize() {
  int counter = 0;
  ListElement *iterator = anchor;
  while(iterator != 0) {
    counter++;
    iterator = iterator->getNext();
  }
  return counter;
}

std::ostream & operator << (std::ostream & out, LinkedList & obj) {
  ListElement *iterator = obj.anchor;
  out << "--------------------" << std::endl;
  out << "anchor (" << obj.anchor << ")" << std::endl;
  out << " | " << std::endl;
  out << " | " << std::endl;
  int counter = 0;
  while (iterator != 0) {
    out << "Element Address (" << iterator << ")" << std::endl;
    out << "Index (" << counter << ")" << std::endl;
    out << "Data (" << iterator->getData() << ")" << std::endl;
    out << "Next (" << iterator->getNext() << ")" << std::endl;
    out << " | " << std::endl;
    out << " | " << std::endl;
    iterator = iterator->getNext();
    counter++;
  }
  out << " 0 " << std::endl;
  out << "Counter (" << counter << ")" << std::endl;
  out << "--------------------" << std::endl;
}
