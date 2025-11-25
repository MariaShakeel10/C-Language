#include <iostream>
#include <cmath>

using namespace std;


double raiseToPower (double number , int power );

int main (){
 double no;
 cout << "Enter a number: ";
 cin >> no;
    int pwr;
    cout << "Enter a power: ";
    cin >> pwr;
    double result = raiseToPower(no,pwr);
    cout << no << " raised to the power of " << pwr << " is: " << result << endl;
    return 0;

}
double raiseToPower (double number, int power  ){
    double result = 1.0;
if (power > 0)
{
    for (int i =0; i < power;i++){
        result *= number;
    }
}
else if (power < 0){
    for (int i =0; i < -power;i++){
        result *= number;
    }
    result = 1.0 / result;
}

    
    return (result);
    
}

//*************************RESULT********************** 
/* Enter a number: 3
Enter a power: 3
3 raised to the power of 3 is: 27 

Enter a number: -3
Enter a power: 3
-3 raised to the power of 3 is: -27
*/