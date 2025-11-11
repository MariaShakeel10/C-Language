// A program with default arguments in a function prototype 
 
#include <iostream>
using namespace std; 
void show( int = 1, float = 2.3, long = 4 ); 
int main() 
{ 
   show();                // All three arguments default 
   show( 5 );             // Provide 1st argument 
   show( 6, 7.8 );        // Provide 1st and 2nd 
   show( 9, 10.11, 12L ); // Provide all three argument 
} 
void show( int first, float second, long third ) 
{ 
   cout << "\nfirst = "  << first; 
   cout << ", second = " << second; 
   cout << ", third = "  << third; 
} 