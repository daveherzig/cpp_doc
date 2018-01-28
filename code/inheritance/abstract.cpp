class A {
public:
  virtual void method() = 0; // pure virtual method
};

class B : public A {
public:
  void method() {
    // Implementation
  }
};