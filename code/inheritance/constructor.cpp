class A {
public:
  A() {cout << "Constructor A" << endl;}
};

class B : public A {
public:
  B() {cout << "Constructor B" << endl;}
};

int main(int argc, char **argv) {
  B obj;
  return 0;
}