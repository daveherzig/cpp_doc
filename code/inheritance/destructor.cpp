class A {
public:
  ~A() {cout << "Destructor A" << endl;}
};

class B : public A {
public:
  ~B() {cout << "Destructor B" << endl;}
};

int main(int argc, char **argv) {
  B obj;
  return 0;
}