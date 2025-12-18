/* A sample program showing the use of friend function, 
which access the private data member of the class. 
*/ 
 
#include <iostream> 
using namespace std;
 
class myClass 
{ 
 friend void increment(myClass *, int); 
 
 private: 
       int topSecret; 
  
 public: 
    void display() { cout << "\n The value of the topSecret is " << 
topSecret; }  
    myClass(); 
}; 
// constructor of the class 
myClass::myClass() 
{ 
    topSecret = 100; 
} 
 
// Friend function definition 
void increment(myClass *a, int i) 
{ 
    a->topSecret += i;    // Modify private data 
} 
 
// showing the use of the friend function 
int main() 
{ 
 myClass x; 
 x.display(); 
 increment(&x, 10); 
 x.display(); 
} 

//***********************RESULT************************
/*
        The value of the topSecret is 100
 The value of the topSecret is 110*/