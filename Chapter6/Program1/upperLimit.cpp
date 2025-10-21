#include <iostream>
using namespace std;

int main() {
    int upperLimit;
    int number = 1;
    int sum = 0;
    
    cout << "Please enter the upper limit for which you want the sum: ";
    cin >> upperLimit;
    
    while (number <= upperLimit) {
        sum = sum + number;
        number = number + 1;
    }
    
    cout << "The sum of first " << upperLimit << " integers is " << sum;
    
    return 0;
}