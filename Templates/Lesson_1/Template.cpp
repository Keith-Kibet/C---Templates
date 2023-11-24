//USING TEMPLATES IN C++ = ADVANCED PROGRAMMING
#include <iostream>
using namespace std;
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

// int addition(int a, int b){
//     return(a + b);
// };


int main() {
  // Using the templated class
  //using integer template
  // MyContainer<int> myIntContainer(7);
  // cout << myIntContainer.increase() <<endl;
  // //using double template
  // MyContainer<double> myDoubleContainer(3.14);
  // cout << myDoubleContainer.increase() << endl;
  
  // Using the templated function
  cout << add<int>(1, 2) << endl;
  cout << add<double>(3, 2) << endl;
  
  // int num1, num2;
  // cout<<"Enter num 1 : ";
  // cin>>num1;
  // cout<<endl;
    
  // cout<<"Enter num 2 : ";
  // cin>>num2;
  // cout<<endl;

  //  cout<<"the sum of two numbers is :" <<addition(num1, num2)<< endl;

  return 0;
}
