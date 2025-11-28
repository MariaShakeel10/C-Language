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


//*************************RESULT********************** 
/* Enter first number: 2
Enter second number: 3

Number 1 in binary:  00000010
Number 2 in binary:  00000011

Bitwise AND (&):    00000010
Bitwise OR  (|):    00000011
Bitwise XOR (^):    00000001
Bitwise NOT (~a):   11111101
Bitwise NOT (~b):   11111100

Left shift a<<1:    00000100
Right shift b>>1:   00000001 */
