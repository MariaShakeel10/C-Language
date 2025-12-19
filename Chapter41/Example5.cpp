// A simple program to show the usage of template functions in a class

#include <iostream>
using namespace std;

// --------------------------------------------------
// Reverse template function
template <class T>
T reverse(T x)
{
    return (-x);   // Uses overloaded unary minus
}

// --------------------------------------------------
// Definition of a class
class PhoneCall
{
private:
    int lengthOfCall;   // duration of the call
    char billCode;      // c = cancelled, d = domestic, i = international, l = local

public:
    PhoneCall(int l = 0, char b = 'l');   // constructor
    PhoneCall operator-();               // overloaded unary minus
    int getLengthOfCall() { return lengthOfCall; }
    void showCall();
};

// Constructor definition
PhoneCall::PhoneCall(int len, char b)
{
    lengthOfCall = len;
    billCode = b;
}

// Display function
void PhoneCall::showCall()
{
    cout << "The duration of the call is " << lengthOfCall << endl;
    cout << "The code of the call is " << billCode << endl;
}

// Overloaded unary minus operator
PhoneCall PhoneCall::operator-()
{
    PhoneCall temp(*this);   // create copy
    temp.billCode = 'c';     // cancel the call
    return temp;
}

// --------------------------------------------------
// Main function
int main()
{
    PhoneCall aCall(10, 'd');

    aCall.showCall();

    aCall = reverse(aCall);   // template function call

    aCall.showCall();

    return 0;
}

//***********************RESULT************************
/*The duration of the call is 10l is 
The code of the call is d     
The duration of the call is 10
The code of the call is c */