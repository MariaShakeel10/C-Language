/*  This is a simple program. This shows the use of static variables inside a function. 
*/ 
 
#include <iostream> 
using namespace std;
 
void staticVarFun(); 
void nonstaticVarFun(); 
 
int main(void) 
{ 
    cout << "\nCalling the function which is using static variable \n"; 
    for(int i = 0; i < 10; i++) 
        staticVarFun(); 
 
    cout << " \nCalling the function which is using automatic variable \n"; 
    for(int i = 0; i < 10; i++) 
        nonstaticVarFun();   
} 
// function definiition using static variables 
void staticVarFun() 
{ 
    static int i = 0; 
    i++; 
    cout << "The value of i is:" << i << endl; 
} 
 
// function definiition using automatic variables 
void nonstaticVarFun() 
{ 
    int i = 0; 
    i++; 
    cout << "The value of i is:" << i << endl; 
} 

//***********************RESULT************************
/*Calling the function which is using static variable
The value of i is:1
The value of i is:2
The value of i is:3
The value of i is:4
The value of i is:5
The value of i is:6
The value of i is:7
The value of i is:8
The value of i is:9
The value of i is:10

Calling the function which is using automatic variable
The value of i is:1
The value of i is:1
The value of i is:1
The value of i is:1
The value of i is:1
The value of i is:1
The value of i is:1
The value of i is:1
The value of i is:1
The value of i is:1*/