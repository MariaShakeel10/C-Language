#include <iostream>
using namespace std;

// Define the Date class
class Date {
public:
    // Member functions to set values
    void setDay(int i);
    void setMonth(int i);
    void setYear(int i);

    // Display the date
    void display();

private:
    // Hidden data members (encapsulation)
    int day, month, year;
};

// Definitions of member functions

void Date::setDay(int i) {
    day = i;
}

void Date::setMonth(int i) {
    month = i;
}

void Date::setYear(int i) {
    year = i;
}

void Date::display() {
    cout << "The date is " << day << "-" << month << "-" << year << endl;
}

// Main program
int main() {
    Date date1, date2; // create two Date objects

    // Setting and displaying first date
    date1.setDay(1);
    date1.setMonth(1);
    date1.setYear(2000);
    date1.display();

    // Setting and displaying second date
    date2.setDay(10);
    date2.setMonth(12);
    date2.setYear(2002);
    date2.display();

    return 0;
}

//***********************RESULT************************
/*
The date is 1-1-2000  
The date is 10-12-2002
*/