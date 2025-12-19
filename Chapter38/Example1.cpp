/*  A small program which uses the user defined manipulators. 
*/ 
 
#include <iostream> 
#include   <stdlib.h> 
 using namespace std ;
// Gives System Beep 
ostream & bell ( ostream & output ) // Manipulator 
{ 
    return output << '\a' ; 
} 
 
// Gives Tab 
ostream & tab ( ostream & output )  // Manipulator 
{ 
    return output << '\t' ; 
} 
 
// Takes the cursor to next line 
ostream & endLine ( ostream & output )   // Manipulator 
{ 
    return output << '\n' << flush ; 
} 
 
int main ( ) 
{ 
     cout << "Virtual " << tab << "University" << bell << endLine ; // Use of Mainpulator 
     system ( "PAUSE" ) ; 
} 

//***********************RESULT************************
/*Virtual         University
Press any key to continue . . . */