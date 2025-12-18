//✔ Program 4: Scientific Notation
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double num = 1946000000;

    cout.setf(ios::scientific, ios::floatfield);
    cout << num << endl;

    cout.setf(ios::fixed, ios::floatfield);
    cout << num << endl;

    return 0;
}

//***********************RESULT************************
/*
1.946000e+09
1946000000.000000

*/