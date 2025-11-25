#include <iostream>
using namespace std;

int main() {
    int number, powerNo;
    long long result = 1; // use long long for large results

    cout << "Enter an integer: ";
    cin >> number;
    cout << "Enter a power: ";
    cin >> powerNo;

    for (int i = 1; i <= powerNo; i++) {
        result *= number; // multiply repeatedly
    }

    cout << number << " raised to the power of " << powerNo << " is: " << result << endl;

    return 0;
}

//*************************RESULT********************** 
/* Enter an integer: 4
Enter a power: 5
4 raised to the power of 5 is: 1024 */