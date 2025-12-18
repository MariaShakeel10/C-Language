/*Besides passing parameters to a function, references can also be used to return 
values from a function */ 
 
#include <iostream> 
using namespace std;
 
int myNum = 0;    // Global variable 
 
int& num() 
{ 
    return myNum; 
} 
int main() 
{ 
    int i; 
    i = num(); 
    cout << " The value of i = " << i << endl; 
    cout << " The value of myNum = " << myNum << endl; 
    num() = 200;   // mynum set to 200 
    cout << " After assignment the value of myNum = " << myNum << endl; 
} 

//***********************RESULT************************
/* The value of i = 0
 The value of myNum = 0
 After assignment the value of myNum = 200*/