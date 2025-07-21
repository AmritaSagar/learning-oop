#include<iostream>
using namespace std;

class Student {   // Class is just a blueprint
public:
    string name;
    int roll_no;
    float sgpa;
};

int main() {
    Student s1;   // s1 is an object (a real thing)
    s1.name = "Amrita Sagar";
    s1.roll_no = 42;
    s1.sgpa = 9.17;

    cout << s1.name << endl;
    cout << s1.roll_no << endl;
    cout << s1.sgpa << endl;

    return 0;
}
