#include <iostream> // this is a preprocessor directive

using namespace std; // this is a namespace declaration (std is the standard namespace) 

class Circle
{
private: // characteristics of the class
    /* data */
    double radius, area, circumference;

public:
    Circle(double r) // constructor
    {
        radius = r;
    }
    
    void calculateArea() // method used to calculate the area of the circle
    {
        area = 3.14 * radius * radius;
    }

    void calculateCircumference() // method used to calculate the circumference of the circle
    {
        circumference = 2 * 3.14 * radius;
    }

    void printArea() // method used to display the area of the circle
    {
        cout << "The area of the circle is " << area << endl;
    }

    void printCircumference() // method to display the circumference of the circle
    {
        cout << "The circumference of the circle is " << circumference << endl;
    }
};
    
int main() // main function
{
    
    // Circle firstCircle(5); // creating a new object with radius 5
    // firstCircle.calculateArea(); // calling the method to calculate the area    
    // firstCircle.calculateCircumference(); // calling the method to calculate the circumference
    // firstCircle.printArea(); // calling the method to display the area
    // firstCircle.printCircumference(); // calling the method to display the circumference

    double userRadius;
    cout << "Enter the radius of the circle: ";
    cin >> userRadius;
    cout << endl;

    Circle secondCircle(userRadius); // creating a new object with radius entered by the user
    secondCircle.calculateArea(); // calling the method to calculate the area
    secondCircle.calculateCircumference(); // calling the method to calculate the circumference
    secondCircle.printArea(); // calling the method to display the area
    secondCircle.printCircumference(); // calling the method to display the circumference
    
    return 0;
};


