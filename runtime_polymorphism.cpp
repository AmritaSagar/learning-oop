#include<iostream>
using namespace std;

// Parent class
class Human {
public:
    // Virtual function enables runtime polymorphism
    virtual void speak() {
        cout << "I am a human." << endl;
    }
};

// Child class inheriting from Human
class Child : public Human {
public:
    // Overriding the speak() function
    void speak() override {
        cout << "I am a child." << endl;
    }
};

int main() {
    Human* h;      // Parent pointer

    Human adult;   // Parent object
    Child kid;     // Child object

    h = &adult;
    h->speak();    // Prints: I am a human. (parent version)

    h = &kid;
    h->speak();    // Prints: I am a child. (child version at runtime)

    return 0;
}
