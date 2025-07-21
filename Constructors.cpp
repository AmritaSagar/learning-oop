#include<iostream>
using namespace std;

class Student {
public:
    string name;
    int roll_no;
    float sgpa;

    // Constructor
    Student(string s, int r, float g) {
        name = s;
        roll_no = r;
        sgpa = g;
    }
};

int main() {
    Student s1("Amrita", 42, 9.17);

    cout << s1.name << endl;
    cout << s1.roll_no << endl;
    cout << s1.sgpa << endl;

    return 0;
}
