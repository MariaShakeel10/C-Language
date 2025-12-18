/* This program demonstrate the use of show base.  
It displays a number in hex, oct and decimal form. 
*/ 
 
#include <iostream> 
 using namespace std;
int main() 
{ 
    int x = 77;  
    cout.setf(ios::showbase); 
    cout.setf(ios::oct,ios::basefield); //base is 8 
    cout << x << '\n';      //displays number with octal notation   
    cout.setf(ios::hex,ios::basefield);  //base is 16 
    cout << x << '\n';      //displays number with hexadecimal notation 
    cout.setf(ios::dec,ios::basefield);  
    cout << x << '\n';  
} 


//***********************RESULT************************
/* 0115 
0x4d 
77 
*/