#include <iostream>
using namespace std;

// Pass by value
void passByValue(int num) {
    num = 10;
    cout << "Inside passByValue: " << num << endl;
}

// Pass by reference example one 
void passByReference(int& num) {
    num = 20;
    cout << "Inside passByReference: " << num << endl;
}

// Pass by reference example two 
void foo(int& num2){
    cout<< "Inside foo before changing its value, num = " << num2 << endl;
    num2 = 5; // changing the value of num2
    cout<< "Inside foo,the new num = " << num2 << endl;
}

// Pass by pointer
void passByPointer(int* num) {
    *num = 30;
    cout << "Inside passByPointer: " << *num << endl;
}

int main() {
    int num = 0;
    
    cout << "Before function calls: " << num << endl;

    // passByValue(num);
    // cout << "After passByValue: " << num << endl;
    
    // passByReference(num);
    // cout << "After passByReference: " << num << endl;
    
    //passByReference(num); example two
    foo(num); // calling foo
    cout<< "After foo, num = " << num << endl;
    
    // passByPointer(&num);
    // cout << "After passByPointer: " << num << endl;

    return 0;
}
