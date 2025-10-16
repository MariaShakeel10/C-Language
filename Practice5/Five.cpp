#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char op;
    double num1, num2, result;

    cout << "Enter Numbers to Calculate!" << endl;
    cout << "Enter 1st number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter 2nd number: ";
    cin >> num2;

    switch (op) {
        case '+':
            result = num1 + num2;
            cout << num1 << " + " << num2 << " = " << result;
            break;
        case '-':
            result = num1 - num2;
            cout << num1 << " - " << num2 << " = " << result;
            break;
        case '*':
            result = num1 * num2;
            cout << num1 << " * " << num2 << " = " << result;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << num1 << " / " << num2 << " = " << result;
            } else {
                cout << "Error: Division by zero!";
            }
            break;
        default:
            cout << "Error: Invalid operator!";
            break;
    }

    return 0;
}
