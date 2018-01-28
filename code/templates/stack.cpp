#include <iostream>
using namespace std;

template <class T>
class Container {
private:
  T data;
public:
  void setData(T data);
  T getData();
};

template <class T>
void Container<T>::setData(T data) {
  this->data = data;
}

template <class T>
T Container<T>::getData() {
  return data;
}

int main(int argc, char **argv) {
  Container<int>   c1;
  Container<float> c2;
  c1.setData(3);
  c2.setData(3.1415926);
  cout << c1.getData() << endl;
  cout << c2.getData() << endl;
  return 0;
}

