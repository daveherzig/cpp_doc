#ifndef TREE_CONTAINER_H
#define TREE_CONTAINER_H

class TreeContainer {
public:
  // Fuegt ein Element am Ende des Containers ein.
  // Verantwortlicher Student: Pistorius
  virtual bool add(int v) = 0;

  // Fuegt alle Elemente aus Container c am Ende des
  // Containers ein.
  // Verantwortlicher Student: Galvagno
  virtual bool add(TreeContainer *c) = 0;

  // Suche nach Element v. True false Element vorhanden.
  // Verantwortlicher Student: Dietrich
  virtual bool search(int v) = 0;

  // Loescht das Element
  // Verantwortlicher Student: Conrad
  virtual void remove(int v) = 0;

  // Loescht alle Elemente im Container
  // Verantwortlicher Student: Schweizer
  virtual void clear() = 0;

  // Liefert die Anzahl Elemente im Container
  virtual int getSize() = 0;

  // Pre Order Traversierung
  // Verantwortlicher Student: Glaser
  virtual void preOrder() = 0;

  // Post Order Traversierung
  // Verantwortlicher Student: Hochstrasser
  virtual void postOrder() = 0;

  // In Order Traversierung
  // Verantwortlicher Student: Selva
  virtual void inOrder() = 0;
};

#endif

