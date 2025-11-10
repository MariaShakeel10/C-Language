/* A simple program using the area of circle formula as macro */ 
 
#include <iostream> 
// Defining the macros 
#define PI 3.14159 
#define CIRCLEAREA(X) ( PI * X * X) 
using namespace std; 
main() 
{ 
 float radius; 
 cout << "Enter radius of the circle: "; 
 cin >> radius; 
 cout << "Area of circle is " << CIRCLEAREA (radius); 
}