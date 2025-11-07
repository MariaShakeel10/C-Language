#include <iostream>
#include <bitset>  // for displaying binary format
using namespace std;

int main() {
    unsigned int a, b;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    cout << "\nNumber 1 in binary:  " << bitset<8>(a);
    cout << "\nNumber 2 in binary:  " << bitset<8>(b);

    cout << "\n\nBitwise AND (&):    " << bitset<8>(a & b);
    cout << "\nBitwise OR  (|):    " << bitset<8>(a | b);
    cout << "\nBitwise XOR (^):    " << bitset<8>(a ^ b);
    cout << "\nBitwise NOT (~a):   " << bitset<8>(~a);
    cout << "\nBitwise NOT (~b):   " << bitset<8>(~b);

    cout << "\n\nLeft shift a<<1:    " << bitset<8>(a << 1);
    cout << "\nRight shift b>>1:   " << bitset<8>(b >> 1) << endl;

    return 0;
}
