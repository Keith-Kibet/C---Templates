#include <iostream>

// Define a class named MyClass
class MyClass {
private:
    int privateVar; // Private member variable

protected:
    int protectedVar; // Protected member variable

public:
    int publicVar; // Public member variable
    
    // Constructor
    MyClass() {
        privateVar = 10;
        protectedVar = 20;
        publicVar = 30;
    }

    // Member function to display the values of the member variables
    void display() {
        std::cout << "Private variable: " << privateVar << std::endl;
        std::cout << "Protected variable: " << protectedVar << std::endl;
        std::cout << "Public variable: " << publicVar << std::endl;
    }

    // Declare friend function
    friend void friendFunction(MyClass obj);
};

// Friend function to access the private, protected, and public member variables of MyClass
void friendFunction(MyClass obj) {
    std::cout << "Accessing private variable from friend function: " << obj.privateVar << std::endl;
    std::cout << "Accessing protected variable from friend function: " << obj.protectedVar << std::endl;
    std::cout << "Accessing public variable from friend function: " << obj.publicVar << std::endl;
}

// Main function
int main() {
    MyClass obj; // Create an object of MyClass
    obj.display(); // Call the display function to print the member variable values
    
    friendFunction(obj); // Call the friend function to access the member variables
    
    return 0;
}
