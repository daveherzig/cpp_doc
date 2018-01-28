#ifndef CONTAINER_H
#define CONTAINER_H

template <class T>
class Container {
public:
  // Fuegt ein Element am Ende des Containers ein.
  // Verantwortlicher Student: Pistorius
  virtual bool add(T v) = 0;

  // Fuegt alle Elemente aus Container c am Ende des
  // Containers ein.
  // Verantwortlicher Student: Galvagno
  virtual bool add(Container *c) = 0;

  // Liefert das Element an Stelle index
  // Verantwortlicher Student: Dietrich
  virtual bool get(int index, T & v) = 0;

  // Loescht das Element an Stelle index
  // Verantwortlicher Student: Conrad
  virtual void remove(int index) = 0;

  // Fuegt ein Element an Stelle index ein
  // Verantwortlicher Student: Selva
  virtual bool insert(int index, T v) = 0;

  // Tauscht die Elemente an Stelle index1 und index2 aus
  // Verantwortlicher Student: Glaser
  virtual bool swap(int index1, int index2) = 0;

  // Editiert das Element an Stelle index
  // Verantwortlicher Student: Hochstrasser
  virtual bool edit(int index, T v) = 0;

  // Loescht alle Elemente im Container
  // Verantwortlicher Student: Schweizer
  virtual void clear() = 0;

  // Liefert die Anzahl Elemente im Container
  virtual int getSize() = 0;
};

#endif

