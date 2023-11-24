
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating..." << endl;
    }
};

// Single inheritance
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking..." << endl;
    }
};

// Multilevel inheritance
class GermanShepherd : public Dog {
public:
    void guard() {
        cout << "German Shepherd is guarding..." << endl;
    }
};

// Multiple inheritance
class Bird {
public:
    void fly() {
        cout << "Bird is flying..." << endl;
    }
};

class FlyingDog : public Dog, public Bird {
public:
    void fetch() {
        cout << "Flying Dog is fetching..." << endl;
    }
};

// Hierarchical inheritance
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat is meowing..." << endl;
    }
};

// Hybrid inheritance
class Tiger : public Animal {
public:
    void jump() {
        cout << "Tiger is jumping..." << endl;
    }
};

class Lion : public Animal {
public:
    void roar() {
        cout << "Lion is roaring..." << endl;
    }
};

class Liger : public Lion, public Tiger {
public:
    void hunt() {
        cout << "Liger is hunting..." << endl;
    }
};

int main() {
    // Single inheritance
    Dog dog;
    cout<<"Dog section"<<endl; 
    dog.eat();
    dog.bark();
    cout<<"Dog section"<<endl<<endl;

    // Multilevel inheritance
    GermanShepherd gs;
    cout<<"German Shepherd section"<<endl;
    gs.eat();
    gs.bark();
    gs.guard();
    cout<<"German Shepherd section"<<endl<<endl;

    // Multiple inheritance
    FlyingDog fd;
    cout<<"Flying Dog section"<<endl;
    fd.eat();
    fd.bark();
    fd.fly();
    fd.fetch();
    cout<<"Flying Dog section"<<endl<<endl;

    // Hierarchical inheritance
    Cat cat;
    cout<<"Cat section"<<endl;
    cat.eat();
    cat.meow();
cout<<"Cat section"<<endl<<endl;
    
    // Hybrid inheritance
    Liger liger;
    cout<<"Liger section"<<endl;
    liger.Tiger::eat(); // Specify Animal's eat function
    liger.Lion::roar(); // Specify Lion's roar function
    liger.hunt();
    cout<<"Liger section"<<endl<< endl;
    
    return 0;
}
