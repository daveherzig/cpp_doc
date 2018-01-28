int main(int argc, char **argv) {
  int a[2000];
  
  // default for loop
  for (int i=0; i<2000; i++) {
    a[i] = rand();
  }
  // range based for loop C++ 11
  for (int n : a) {
    cout << n << endl;
  }
  return 0;
}