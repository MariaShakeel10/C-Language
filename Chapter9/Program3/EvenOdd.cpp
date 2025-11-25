#include <iostream>
#include <cmath>
using namespace std;

int Even_Odd (int number );
int main (){
int number;

cout << "Enter an integer: ";
cin >> number;
Even_Odd (number);

    return 0;
}

int Even_Odd (int number){
 if (number%2 == 0){
    cout << number << " is Even" << endl;
 } else {
    cout << number << " is Odd" << endl;
 }
 return 0;
}

//*************************RESULT********************** 
/* Enter an integer: 5
5 is Odd

Enter an integer: 6
6 is Even
*/