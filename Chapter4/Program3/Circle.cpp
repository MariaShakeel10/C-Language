#include <iostream>
#include <cmath>

using namespace std;

int main (){
    float radius, diameter, circumference, area;

    cout << "Enter the radius of the circle:";
    cin >> radius;

    diameter = 2*radius;
    circumference = 2 * 3.14 * radius;
    area = 3.14 * radius * radius;

    cout << "Diameter of the circle: " << diameter << endl;
    cout << "Circumference of the circle: " << circumference << endl;   
    cout << "Area of the circle: " << area << endl;

    return 0;
}