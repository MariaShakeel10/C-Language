//✔ Program 2: setw() and setfill() (Cheque Formatting)

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int amount = 4000;

    cout << setfill('*') << setw(10) << amount << endl;

    return 0;
}

//***********************RESULT************************
/*
******4000
*/