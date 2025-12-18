// Reference parameters for reducing overhead 
//   and eliminating pointer notation 
 
#include <iostream> 
using namespace std;
 
// A big structure 
struct bigone 
{ 
   int serno; 
   char text[1000];   // A lot of chars 
} bo = {123, "This is a BIG structure"}; 
 
// Three functions that have the structure as a parameter 
void valfunc( bigone v1 );            // Call by value 
void ptrfunc( const bigone *p1 );    // Call by pointer 
void reffunc( const bigone &r1 );    // Call by reference 
 
// main program  
int main() 
{ 
   valfunc( bo );     // Passing the variable itself 
   ptrfunc( &bo );    // Passing the address of the variable 
   reffunc( bo );     // Passing a reference to the variable 
  } 
 
//Function definitions 
// Pass by value 
void valfunc( bigone v1 ) 
{ 
   cout << '\n' << v1.serno; 
   cout << '\n' << v1.text; 
} 
// Pass by pointer 
void ptrfunc( const bigone *p1 ) 

{ 
   cout << '\n' << p1->serno;     // Pointer notation 
   cout << '\n' << p1->text; 
} 
// Pass by reference 
void reffunc( const bigone &r1 ) 
{ 
   cout << '\n' << r1.serno;       // Reference notation 
   cout << '\n' << r1.text; 
} 

//***********************RESULT************************
/*This is a BIG structure
123
This is a BIG structure
123
This is a BIG structure*/