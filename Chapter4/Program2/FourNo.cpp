#include <iostream>
#include <cmath>

using namespace std;

int main (){
    int digit,number;

    cout << "**************Four Digit Number Calculator**********" << endl;
    cout << "\n Enter a four digit number: ";
    cin >> number;

    digit = number% 10;
    cout << "\n The last digit of the number is: " << digit << endl;
    number =number /10;
    digit = number% 10;
    cout << "\n The 2nd last digit of the number is: " << digit << endl;
    number =number /10;
    digit = number% 10;
    cout << "\n The 2nd digit of the number is: " << digit << endl;
    number =number /10;
    digit = number% 10;
    cout << "\n The 1st digit of the number is: " << digit << endl;
    cout << "**************End of Program**********" << endl;

    return 0;
}