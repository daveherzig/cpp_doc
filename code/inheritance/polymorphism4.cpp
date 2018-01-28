class A {
public:
  virtual ~A() {cout << "Destructor class A" << endl;}
};

class B : public A {
public:
  ~B() {cout << "Destructor class B" << endl;}
};

int main(int argc, char **argv) {
  // Pointer to base class points to object of derived class
  A *obj = new B();
  delete obj;
  return 0;
}