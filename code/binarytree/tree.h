#ifndef TREE_H
#define TREE_H

class TElement;

class Tree {
private:
  TElement *root;

  void preOrder(TElement *t);
  void postOrder(TElement *t);
  void inOrder(TElement *t);
  void count(TElement *t, int & result);
  void depth(TElement *t);

  int dCounter, maxDepth;
public:
  Tree();
  bool add(float value);
  bool drop(float value);
  bool contains(float value);
  int count();
  void clear();
  float min(bool &ok);
  float max(bool &ok);
  bool isEmpty();
  int depth();
  void preOrder();
  void postOrder();
  void inOrder();
};

#endif

