#include <iostream>
using namespace std;

int main() {
    int upperLimit, number, sum;
    number = 1;
    sum = 0;
    cout << "Enter the upper limit: ";
    cin >> upperLimit;

    while (number <= upperLimit) {
        if (number % 2 == 1) {  // Check if number is odd
            sum = sum + number;  // Add odd number to sum
        }
        number = number + 1;  // Always increment number
    }
    
    cout << "The sum of even numbers up to " << upperLimit << "starting from 1 is: " << sum << endl;
    return 0;
}