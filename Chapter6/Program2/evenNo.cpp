#include <iostream>
using namespace std;

int main() {
    int upperLimit, number, sum;
    number = 1;
    sum = 0;
    cout << "Enter the upper limit: ";
    cin >> upperLimit;

    while (number <= upperLimit) {
        if (number % 2 == 0) {  // Check if number is even
            sum = sum + number;  // Add even number to sum
        }
        number = number + 1;  // Always increment number
    }
    
    cout << "The sum of even numbers up to " << upperLimit << "starting from 1 is: " << sum << endl;
    return 0;
}

//*************************RESULT********************** 
/* Enter the upper limit: 23
The sum of even numbers up to 23starting from 1 is: 132 */