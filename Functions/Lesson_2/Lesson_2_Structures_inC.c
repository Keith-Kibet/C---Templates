#include <stdio.h>

// Define a structure to represent a person
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Declare and initialize a structure variable
    struct Person person1 = {"John Doe", 25, 1.75};

    // Access and modify structure members
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);

    return 0;
}
