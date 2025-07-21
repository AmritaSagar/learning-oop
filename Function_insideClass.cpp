#include<iostream>
using namespace std;

class Student {
public:
    string name;
    int roll_no;
    float sgpa;

    // Constructor
    Student(string name, int roll_no, float sgpa) {
        this->name = name;
        this->roll_no = roll_no;
        this->sgpa = sgpa;
    }

    // Function defined inside the class
    void print() {
        cout << name << " " << roll_no << " " << sgpa << endl;
    }
};

int main() {
    Student s1("Amrita", 42, 9.17);
    s1.print();  // Calls the member function
    return 0;
}
