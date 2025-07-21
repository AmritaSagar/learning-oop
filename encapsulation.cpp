#include<iostream>
using namespace std;

class Student {
private:  
    string name;  
    int roll_no;
    float sgpa;

public:  
    void setData(string name, int roll_no, float sgpa) {
        this->name = name;
        this->roll_no = roll_no;
        this->sgpa = sgpa;
    }

    void getData() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_no << endl;
        cout << "SGPA: " << sgpa << endl;
    }
};

int main() {
    Student s1;
    s1.setData("Amrita", 42, 9.17);
    s1.getData();
    return 0;
}
