#include <iostream>
#include <cmath>

using namespace std;

int main (){
    int age1,age2,age3,age4,age5,age6,age7,age8,age9,age10;
    int TotalAge;
    double average;
    cout << "**************Age Average Calculator**********" << endl;
    cout << "\n Enter the Age of person no. 1:";
    cin >> age1;
    cout << "\n Enter the Age of person no. 2:";
    cin >> age2;
    cout << "\n Enter the Age of person no. 3:";
    cin >> age3;
    cout << "\n Enter the Age of person no. 4:";
    cin >> age4;
    cout << "\n Enter the Age of person no. 5:";
    cin >> age5;
    cout << "\n Enter the Age of person no. 6:";
    cin >> age6;
    cout << "\n Enter the Age of person no. 7:";
    cin >> age7;
    cout << "\n Enter the Age of person no. 8:";
    cin >> age8;
    cout << "\n Enter the Age of person no. 9:";
    cin >> age9;
    cout << "\n Enter the Age of person no. 10:";
    cin >> age10;

    TotalAge = age1 + age2 + age3 + age4 + age5 + age6 + age7 + age8 + age9 + age10;
    average = TotalAge/10;

    cout << "\n The Average Age of 10 persons is: " << average << endl;
    cout << "**************End of Program**********" << endl;

}

// ****************************RESULTS****************************
/* Enter the Age of person no. 1:8

 Enter the Age of person no. 2:5

 Enter the Age of person no. 3:5

 Enter the Age of person no. 4:5

 Enter the Age of person no. 5:9

 Enter the Age of person no. 6:8

 Enter the Age of person no. 7:7

 Enter the Age of person no. 8:7

 Enter the Age of person no. 9:3

 Enter the Age of person no. 10:7

 The Average Age of 10 persons is: 6
**************End of Program***********/ 