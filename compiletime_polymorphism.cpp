#include<iostream>
using namespace std;    

class FunOverload {
public:
    // Same function name but different parameter types
    void overload(int x) { 
        cout << "Integer: " << x << endl; 
    }      
    void overload(string s) { 
        cout << "String: " << s << endl; 
    }
};

int main() {                             
    // Compile-time polymorphism works in two ways:
    // 1. Function overloading 
    // 2. Operator overloading 

    /*******Function overloading*****/
    FunOverload p;
    p.overload(10);       // calls int version
    p.overload("Hello");  // calls string version

    /*****Operator overloading (built-in)******/
    cout << 5 + 5 << endl;  

    string a = "Amrita";
    string b = "Sagar";
    cout << a + b << endl;  // concatenates strings

    return 0;
}
