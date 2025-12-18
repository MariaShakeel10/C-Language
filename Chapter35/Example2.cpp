// A simple example showing the use of read and write functions. 
#include <iostream> 
using namespace std;
 
int main() 
{ 
    const int SIZE = 80; 
    char buffer[SIZE]; 
     
    cout << " \n Enter a sentence: \n" ; 
    cin.read(buffer, 20); 
     
    cout << " The sentence entered was: \n"; 
    cout.write(buffer, cin.gcount()); 
    cout << endl; 
    return 0; 
} 

//***********************RESULT************************
/* Enter a sentence: 
This is a sample program using read and write functions
 The sentence entered was: 
This is a sample pro */