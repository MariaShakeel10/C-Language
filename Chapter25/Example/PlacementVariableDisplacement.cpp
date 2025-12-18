// Variable declaration placement 
#include  <iostream> 
using namespace  std;
 
int  main() 
{ 
   int  lineno; 
   for( int lineno = 0; lineno < 3; lineno++ ) 
   { 
       int  temp = 22; 
       cout << "\nThis is line number " << lineno 
            << " and temp is " << temp; 
   } 

   if( lineno == 4 )   // lineno still accessible 
       cout << "\nOops"; 
   // Cannot access temp 
} 

//***********************RESULT************************
/*This is line number 0 and temp is 22
This is line number 1 and temp is 22
This is line number 2 and temp is 22*/