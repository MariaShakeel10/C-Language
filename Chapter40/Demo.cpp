/* This program illustrates the construction and destruction orders of objects. */ 
 
#include <iostream> 
using namespace std; 
class A 
{  
    public: 
    A() 
    { 
        cout   <<   "\n A Constructor ..."; 
    } 
     
    ~A() 
    { 
        cout   <<   "\n A Destructor ..."; 
    } 
}; 
 
class B 
{ 
    public: 
    B() 
    { 
        cout   <<   "\n B Constructor ..."; 
    } 
     
    ~B() 
    { 
        cout   <<   "\n B Destructor ..."; 
    } 
 
    private: 
    A   a; 
}; 
 
int main(void) 
{ 
    B   b; 
} 

//***********************RESULT************************
/* A Constructor ...
 B Constructor ...
 B Destructor ... 
 A Destructor ... */