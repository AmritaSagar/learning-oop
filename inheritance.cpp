#include<iostream>
using namespace std;

// Parent class
class Human {
public:
    void breathe() {
        cout << "I can breathe." << endl;
    }
    void walk() {
        cout << "I can walk." << endl;
    }
};

// Child class inheriting from Human
class Child : public Human {  // we use 'public' so that inherited members stay accessible
public:
    void play() {
        cout << "I can play." << endl;
    }
};

int main() {
    Child c;
    // Inherited traits
    c.breathe();
    c.walk();
    // Child's own function
    c.play();
    return 0;
}
