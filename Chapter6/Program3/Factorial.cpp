#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int number, factorial;
    cout << "Enter a positive integer to calculate its factorial: ";
    cin >> number;

    factorial = 1;
    while (number > 1) {
        factorial = factorial * number;
        number = number - 1;
    }

    cout << "The factorial is: " << factorial << endl;
    return 0;
}

//*************************RESULT********************** 
/* Enter a positive integer to calculate its factorial: 3
The factorial is: 6 */