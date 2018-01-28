A::A(int value) {  // Constructor
  ptrToValue = new int;
  *ptrToValue = value;
};

A::A(const A & obj) {  // Copy constructor
  ptrToValue = new int;
  *ptrToValue = *(obj.ptrToValue);
}

A A::operator= (const A & obj) {  // Assignment operator
  delete ptrToValue;    // delete and recreate memory is not
  ptrToValue = new int; // needed if the memory has the same size
  *ptrToValue = *(obj.ptrToValue);
  return *this;
}

A::~A() {  // Destructor
  delete ptrToValue;
}
