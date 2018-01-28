#ifndef LISTELEMENT_H
#define LISTELEMENT_H

class ListElement {
private:
  int data;
  ListElement *next;
public:
  ListElement(int data = 0);
  virtual ~ListElement();
  void setData(int data);
  int getData() const;
  void setNext(ListElement *next);
  ListElement *getNext() const;
};

#endif

