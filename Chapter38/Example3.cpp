#include <iostream> 
using  namespace std;
 
// defining a sample class 
class truck { 
  private:   
    char name; // Identifier 
  public: 
    // constructor displaying the output with the object name 
    truck(char cc):name(cc) { 
        cout << "inside the constructor of " << name << endl; 
    } 
     
    // distructor displaying the output with the object name 
    ~truck() { 
        cout << "Inside the destructor of " << name << endl; 
    } 
}; 
// defining a global object 
truck A('A');  
 
// a simple function creating an object 
void f() { 
  truck C('C'); 
} 
// a simple function creating a static object 
void g() { 
  static truck D('D'); 
} 
 
// main function 
int main() { 
  // an ordinary object    
  truck B('B'); 
  // calling the functions 
  f();  
  g();   
} 

//***********************RESULT************************
/*
inside the constructor of A
inside the constructor of B
inside the constructor of C
Inside the destructor of C 
inside the constructor of D
Inside the destructor of B 
Inside the destructor of D
Inside the destructor of A
*/