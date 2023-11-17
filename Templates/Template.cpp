
#include <iostream>

// Templated class
template <typename T>
class MyContainer {
  private:
    T element;

  public:
    MyContainer(T arg) {
      element = arg;
    }

    T increase() {
      return ++element;
    }
};

// Templated function
template <typename T>
T add(T a, T b) {
  return a + b;
}

int main() {
  // Using the templated class
  MyContainer<int> myIntContainer(7);
  std::cout << myIntContainer.increase() << std::endl;
  
  MyContainer<double> myDoubleContainer(3.14);
  std::cout << myDoubleContainer.increase() << std::endl;

  // Using the templated function
  std::cout << add<int>(1, 2) << std::endl;
  std::cout << add<double>(3.14, 2.71) << std::endl;

  return 0;
}
