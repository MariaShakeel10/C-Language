#include <iostream>
using namespace std;

class myClass {
    private:
    int id;
    string name;
    public:
    myClass() {
        cout << "\n Parameterless constructor called ...";
        id = 0;
        name = " ";
    }

    // extraction operator overloaded
    friend istream & operator >> (istream & in, myClass & obj);
    // insertion operator overloaded
    friend ostream & operator << (ostream & out, myClass obj);
};
// extraction operator overloaded
 istream & operator >> (istream & in, myClass & obj){
    cout << "Enter your id";
    in >> obj.id;
    cout << "\n\nEnter your name";
    in >> obj.name;
    return in;
    };

// insertion operator overloaded
 ostream & operator << (ostream & out, myClass obj){
     out << "\n\nId = " << obj.id;
     out << "\n\nName = " << obj.name;
     return out;
        };

int main() {
    myClass obj1;
    cin >> obj1; // extraction operator called
    cout << obj1; // insertion operator called
    return 0;
}

/*  Parameterless constructor called ...Enter your id34

Enter your namedfr


Id = 34

Name = dfr*/