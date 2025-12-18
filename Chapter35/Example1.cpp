// A simple example showing the use of getline function. 
#include <iostream>
using namespace std; 
 
int main() 
{ 
    const int SIZE = 80; 
    char buffer[SIZE]; 
     
    cout << " \n Enter a sentence: \n" ; 
    cin.getline(buffer, SIZE); 
     
    cout << " The sentence entered is: \n" << buffer << endl; 
    return 0; 
} 


//***********************RESULT************************
/* Enter a sentence: 
Hi how are you
 The sentence entered is: 
Hi how are you*/