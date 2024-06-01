#include <iostream>

// Define a simple struct
struct SimpleStruct {
  int data;
  // Constructor
  SimpleStruct(int d) : data(d) {}
};

// Define a simple class
class SimpleClass {
private:
  int value;
  SimpleStruct structObj; // Composition: SimpleStruct object inside SimpleClass

public:
  // Constructor
  SimpleClass(int v, int sData) : value(v), structObj(sData) {}

  // Member function to set value
  void setValue(int v) { value = v; }

  // Member function to get value
  int getValue() { return value; }

  // Member function to get struct data
  int getStructData() { return structObj.data; }
};

int main() {
  // Create an object of SimpleClass
  SimpleClass obj(10, 20);

  // Access and modify class member
  std::cout << "Initial value: " << obj.getValue() << std::endl;
  obj.setValue(30);
  std::cout << "Updated value: " << obj.getValue() << std::endl;

  // Access struct member through class method
  std::cout << "Struct data: " << obj.getStructData() << std::endl;

  return 0;
}
