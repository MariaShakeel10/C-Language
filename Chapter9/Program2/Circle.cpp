#include <iostream>
#include <cmath>

using namespace std ;
double CircleArea (double radius );
int main (){
double rad1;
double rad2;
double ringArea;

cout << "Enter radius of outer circle: ";
cin >> rad1;
cout << "Enter radius of Inner circle: ";
cin >> rad2;

if (rad1<0 || rad2<0){
    cout << "Radius has to be positve" << endl;
    return 0;
}
if ( rad2 >= rad1){
    cout << "Inner radius has to be smaller than outer radius" << endl;
    return 0;
}

ringArea = CircleArea(rad1) - CircleArea(rad2);
cout << "Area of the ring is: " << ringArea << endl;

    
return 0;
}

double CircleArea (double radius){
    return ( 3.1415926 * radius * radius ) ;
}

//*************************RESULT********************** 
/* Enter radius of outer circle: 10
Enter radius of Inner circle: 5
Area of the ring is: 235.619 */