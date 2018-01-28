#ifndef CONTAINER_H
#define CONTAINER_H

class Container {
public:
  // Fuegt ein Element am Ende des Containers ein.
  virtual bool add(int v) = 0;

  // Fuegt alle Elemente aus Container c am Ende des
  // Containers ein.
  virtual bool add(Container *c) = 0;

  // Liefert das Element an Stelle index
  virtual bool get(int index, int & v) = 0;

  // Loescht das Element an Stelle index
  virtual void remove(int index) = 0;

  // Fuegt ein Element an Stelle index ein
  virtual bool insert(int index, int v) = 0;

  // Tauscht die Elemente an Stelle index1 und index2 aus
  virtual bool swap(int index1, int index2) = 0;

  // Editiert das Element an Stelle index
  virtual bool edit(int index, int v) = 0;

  // Loescht alle Elemente im Container
  virtual void clear() = 0;

  // Liefert die Anzahl Elemente im Container
  virtual int getSize() = 0;
};

#endif

