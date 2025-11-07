#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;

    cout << "\nBefore swapping: x = " << x << ", y = " << y << endl;

    // Swapping using XOR
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    cout << "After swapping:  x = " << x << ", y = " << y << endl;
    return 0;
}
