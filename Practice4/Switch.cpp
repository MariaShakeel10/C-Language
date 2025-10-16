#include <iostream>
#include <cmath>

using namespace std;

int main (){
 char grade;
    cout << "Enter your grade (A, B, C, D, F):";
    cin >> grade;
     switch (grade) {
        case 'A':
        case 'a':
            cout << "Excellent";
            break;
        case 'B':
        case 'b':
            cout << "Good";
            break;
        case 'C':
        case 'c':
            cout << "Average";
            break;
        case 'D':
        case 'd':
            cout << "Below Average";
            break;
        case 'F':
        case 'f':
            cout << "Fail";
            break;
        default:
            cout << "Invalid grade";
            break;
     }
     return 0;
}