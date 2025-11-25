#include <iostream>
#include <cmath>
using namespace std;

int main (){

int Number, Multiplier, Result;
cout << "Enter the no. to be multiplied:";
cin >> Number;
cout << "Enter the no. of times to be multiplied:";
cin >>Multiplier;

for (int i=0; i<= Multiplier; i++){
    Result = Number * i;
    cout << Number << " x " << i << " = " << Result << endl;
}
return 0;

}

//*******************RESULT****************** 
/* Enter the no. to be multiplied:4
Enter the no. of times to be multiplied:5
4 x 0 = 0 
4 x 1 = 4 
4 x 2 = 8 
4 x 3 = 12
4 x 4 = 16
4 x 5 = 20 */