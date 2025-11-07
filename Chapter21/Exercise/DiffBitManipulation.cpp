#include <iostream>
#include <bitset>
using namespace std;

int main() {
    unsigned int num = 29; // binary: 00011101

    cout << "Original number: " << num << " (" << bitset<8>(num) << ")" << endl;

    // Set (turn on) bit 2 (counting from 0)
    unsigned int setMask = 1 << 2;
    num |= setMask;
    cout << "After setting bit 2:  " << bitset<8>(num) << endl;

    // Clear (turn off) bit 3
    unsigned int clearMask = ~(1 << 3);
    num &= clearMask;
    cout << "After clearing bit 3: " << bitset<8>(num) << endl;

    // Toggle bit 0
    unsigned int toggleMask = 1 << 0;
    num ^= toggleMask;
    cout << "After toggling bit 0: " << bitset<8>(num) << endl;

    // Test if bit 4 is ON
    unsigned int testMask = 1 << 4;
    if (num & testMask)
        cout << "Bit 4 is ON" << endl;
    else
        cout << "Bit 4 is OFF" << endl;

    return 0;
}
