#ifndef TELEMENT_H
#define TELEMENT_H

class TElement {
private:
  float data;
  TElement *left;
  TElement *right;
public:
  TElement(float data = 0.0);
  ~TElement();
  void setLeft(TElement *left);
  void setRight(TElement *right);
  void setData(float data);
  TElement* getLeft();
  TElement* getRight();
  float getData();
};

#endif

