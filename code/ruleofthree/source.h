class A {
private:
  int *ptrToValue; // pointer to dynamic memory
public:
  A(int value); // Constructor
  A(const A & obj); // Copy constructor
  A operator= (const A & obj); // Assignment operator
  virtual ~A(); // Destructor
};