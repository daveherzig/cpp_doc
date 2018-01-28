#ifndef TREE_ELEMENT_H
#define TREE_ELEMENT_H

class TreeElement {
private:
  int data;
  TreeElement *left;
  TreeElement *right;
public:
  TreeElement(int data=0);
  int getData() const;
  TreeElement * getLeft() const;
  TreeElement * getRight() const;
  void setLeft(TreeElement*);
  void setRight(TreeElement*);
};

#endif
