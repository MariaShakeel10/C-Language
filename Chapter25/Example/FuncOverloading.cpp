/* The following example replaces strcpy and strncpy with the single function name 
stringCopy. */ 
 
// An overloaded function 
#include <iostream> 
#include <string.h> 
using namespace std;
 
inline void stringCopy( char *dest, const char *src ) 
{ 
    strcpy( dest, src );            // Calls the standard C library function 
} 
inline void stringCopy( char *dest, const char *src, int len ) 
{ 
    strncpy( dest, src, len );  // // Calls another standard C library function 
} 
 
static char stringa[20], stringb[20];   // Declared two arrays of characters of size 20 
 
int main() 
{ 
    stringCopy( stringa, "That" );        // Copy the string ‘That’ into the array stringa 
    stringCopy( stringb, "This is a string", 4 );  // Copy first 4 characters to stringb array 
    cout << stringb << " and " << stringa;  // Display the contents on the screen 
}