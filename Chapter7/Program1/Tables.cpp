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