 
#include <iostream>
#include <string>
using namespace std;

class A {
private:
    string name;

public:
    // Default constructor
    A() {
        name = "";
    }

    // Parameterized constructor
    A(string n) {
        name = n;
    }

    // Overloaded assignment operator
    A& operator=(const A& obj) {
        if (this != &obj) {     // Self-assignment check
            name = obj.name;
        }
        return *this;
    }

    void display() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    A obj1("abc def");
    A obj2("xyz pqr");

    cout << "Object 1 details: ";
    obj1.display();

    cout << "Object 2 details: ";
    obj2.display();

    cout << "obj1 to obj2 assign" << endl;
    obj2 = obj1;   // Assignment

    cout << "Object 2 details after assignment: ";
    obj2.display();

    cout << "Overloaded assignment operator works fine" << endl;
    obj2 = obj1;
    obj2.display();

    return 0;
}
/*Object 1 details: Name: abc def
Object 2 details: Name: xyz pqr
obj1 to obj2 assign
Object 2 details after assignment: Name: abc def
Overloaded assignment operator works fine       
Name: abc def*/