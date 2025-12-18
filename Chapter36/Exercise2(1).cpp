//✔ Program 1: Base Manipulators (dec, oct, hex, showbase)

#include <iostream>

using namespace std;

int main()
{
    int x = 77;

    cout.setf(ios::showbase);

    cout.setf(ios::oct, ios::basefield);
    cout << x << endl;

    cout.setf(ios::hex, ios::basefield);
    cout << x << endl;

    cout.setf(ios::dec, ios::basefield);
    cout << x << endl;

    return 0;
}

//***********************RESULT************************
/*
0115
0x4d
77  
*/