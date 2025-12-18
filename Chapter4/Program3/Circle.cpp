#include <iostream>
#include <cmath>
#define PI 3.14

using namespace std;

int main (){
    float radius, diameter, circumference, area;

    cout << "Enter the radius of the circle:";
    cin >> radius;

    diameter = 2*radius;
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    cout << "Diameter of the circle: " << diameter << endl;
    cout << "Circumference of the circle: " << circumference << endl;   
    cout << "Area of the circle: " << area << endl;

    return 0;
}

//**********************************RESULT******************** 
/*  Enter the radius of the circle:14
Diameter of the circle: 28        
Circumference of the circle: 87.92
Area of the circle: 615.44 */