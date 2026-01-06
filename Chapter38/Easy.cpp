#include <iostream>
#include <stdlib.h>
using namespace std;

ostream& newLine(ostream& out) // Manipulator
{
    return out << '\n' ;
}
ostream& Tab(ostream& out) // Manipulator
{
    return out << '\t' ;
}
ostream& backSpace(ostream& out) // Manipulator
{
    return out << '\b' ;
}
ostream& beep(ostream& out) // Manipulator
{
    return out << '\a' ;
}
int main () {
    cout <<newLine << "Hello World!" << newLine; // Use of Manipulator \n
    cout <<Tab << "Hello World!" << newLine; // Use of Manipulator \t
    cout <<backSpace << "Hello World!"<<backSpace << newLine; // Use of Manipulator \b
    cout <<beep << "Hello World!"<<beep << newLine; // Use of Manipulator \a
    
}

/*
Hello World!
        Hello World!
Hello World!
Hello World!*/