/* This program defines the assignment operator.
   We copy the string of one object into the string of another object
   using different memory spaces (deep copy).
*/

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

// class definition
class String
{
private:
    char *buf;

public:
    // Default constructor
    String()
    {
        buf = new char[1];
        buf[0] = '\0';
    }

    // Parameterized constructor
    String(const char *s)
    {
        buf = new char[strlen(s) + 1];
        strcpy(buf, s);
    }

    // Destructor
    ~String()
    {
        delete[] buf;
    }

    // Display function
    void display()
    {
        cout << buf << endl;
    }

    // Length function
    int length() const
    {
        return strlen(buf);
    }

    // Overloaded assignment operator
    void operator=(const String &other)
    {
        if (this != &other)   // Self-assignment check
        {
            delete[] buf;
            buf = new char[other.length() + 1];
            strcpy(buf, other.buf);
        }
    }
};

// Main program
int main()
{
    String myString("here's my string");
    cout << "My string is = ";
    myString.display();
    cout << endl;

    String yourString("here's your string");
    cout << "Your string is = ";
    yourString.display();
    cout << endl;

    yourString = myString;

    cout << "After assignment, your string is = ";
    yourString.display();
    cout << endl;

    return 0;
}

//***********************RESULT************************
/*My string is = here's my string

Your string is = here's your string

After assignment, your string is = here's my string
*/