//✔ Program 3: setprecision() (Rounding behavior)
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float pi = 3.1415926;

    cout << setprecision(2) << fixed << pi << endl;
    cout << setprecision(4) << fixed << pi << endl;
    cout << setprecision(5) << fixed << pi << endl;

    return 0;
}

//***********************RESULT************************
/*
3.14
3.1416 
3.14159
*/