class A {
public:
  A() {cout << "Constructor A" << endl;}
  A(int a) {cout << "Constructor A with arg" << endl;}
};

class B : public A {
public:
  B(int a) {cout << "Constructor B with arg" << endl;}
};

int main(int argc, char **argv) {
  B obj(10);
  return 0;
}
