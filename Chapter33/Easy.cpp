#include <iostream>
using namespace std;

class A{
    private:
    string name;
    public: 
    A(){
        name = " ";
    } // Default constructor

    A (string n){
        name = n;
    } // Parameterized constructor  

    /*A (string name){
        this.name = name;
        this -> name = name;
    } // Parameterized constructor  this*/

    void operator= (const A obj){
        name = obj.name;
    } // Overloaded assignment operator

    void display(){
        cout << "Name: " << name << endl;
    } // Display function
};

int main (){
    A obj1("abc def");
    A obj2("xyz pqr");
    cout << "Object 1 details: ";
    obj1.display();
    cout << "Object 2 details: ";
    obj2.display();
    cout << "ob1 to obj2 assign" << endl;
    obj2 = obj1; // Assignment
    cout << "Object 2 details after assignment: ";
    obj2.display();

    cout << "overloaded assignment operator works fine" << endl;
    obj2 =(obj1);
    obj2.display();

    return 0;
}

/*Object 1 details: Name: abc def
Object 2 details: Name: xyz pqr
ob1 to obj2 assign
Object 2 details after assignment: Name: abc def
overloaded assignment operator works fine
Name: abc def
*/