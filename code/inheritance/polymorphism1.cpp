class A {
public:
  void method() {cout << "Method class A" << endl;}
};

class B : public A {
public:
  void method() {cout << "Method class B" << endl;}
};

int main(int argc, char **argv) {
  // Pointer to base class points to object of derived class
  A *obj = new B();
  obj->method();
  return 0;
}