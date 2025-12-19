/* This program illustrates the initializer list and
   the order of execution of constructors */

#include <iostream>
#include <cstring>   // for strncpy
using namespace std;

class Date
{
public:
    Date();                               // Default constructor
    Date(int month, int day, int year);   // Parameterized constructor
    ~Date();                              // Destructor

private:
    int month, day, year;
};

// Default constructor
Date::Date()
{
    cout << "\nDate -- Default constructor called ...";
    month = day = year = 0;
}

// Parameterized constructor
Date::Date(int month, int day, int year)
{
    cout << "\nDate -- Constructor with month=" << month
         << ", day=" << day
         << ", year=" << year << " called ...";

    this->month = month;
    this->day   = day;
    this->year  = year;
}

// Destructor
Date::~Date()
{
    cout << "\nDate -- Destructor called ...";
}

// ----------------------------------------------------

class PersonInfo
{
public:
    PersonInfo(char* nm, char* addr,
               int month, int day, int year,
               int licMonth, int licDay, int licYear);

    ~PersonInfo();

private:
    char name[30];
    char address[60];

    // Member objects
    Date birthday;
    Date drvLicenseDate;
};

// Constructor with initializer list
PersonInfo::PersonInfo(char* nm, char* addr,
                       int month, int day, int year,
                       int licMonth, int licDay, int licYear)
    : birthday(month, day, year),
      drvLicenseDate(licMonth, licDay, licYear)
{
    cout << "\nPersonInfo -- Constructor called ...";

    strncpy(name, nm, 29);
    name[29] = '\0';

    strncpy(address, addr, 59);
    address[59] = '\0';
}

// Destructor
PersonInfo::~PersonInfo()
{
    cout << "\nPersonInfo -- Destructor called ...";
}

// ----------------------------------------------------

int main()
{
    PersonInfo pi("Abbas",
                  "12-Y, DHS, Lahore, Pakistan",
                  12, 12, 1972,
                  12, 10, 1992);

    return 0;
}


//***********************RESULT************************
/*Date -- Constructor with month=12, day=12, year=1972 called ...
Date -- Constructor with month=12, day=10, year=1992 called ...
PersonInfo -- Constructor called ...
PersonInfo -- Destructor called ...
Date -- Destructor called ...
Date -- Destructor called ...*/

