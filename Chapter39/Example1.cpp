/*This program has a copy constructor and demonstrate the use of it. 
We create a new object by passing it an existing object, this calls  
the copy constructor and thus creates a complete copy of the passing  
object, and has its values in new location of memory. 
*/ 
  
#include <iostream> 
#include <cstdlib> 
#include <cstring>
using namespace std; 
// class definition 
class String 
{ 
 char *c; 
     public: 
  // copy function 
  void copy (char *s) 
           { 
                  c = s ; 
            } 
            // getting the length of the string 
            int length ()const 
            { 
                 return strlen(c); 
             } 
             //constructors        
 String (); 
            String (const char *s) 
            { 
        c = new char [ 30 ]; 
         strcpy (c, s); 
  } 
        // copy constructor  
            String( const String &other );  
  
 //display the string       
 void print() 
 { 
       cout << c << endl ; 
   } 
   //destructor 
   ~String() 
   { 
                  delete []c ;   
              } 
};  
// definition of copy constructor 
String::String( const String &other ) 
{ 
 int length; 
    length = other.length(); 
    c = new char[length + 1]; 
    strcpy( c, other.c ); 
    
} 
  
main () 
{ 
  String s1("test1"); 
 cout << "The string of s1 is    "  ;  
 s1.print(); 
 String s2(s1); 
     cout << "The string of s2 is    " ;  
 s2.print(); 
 s1.copy("A new string"); // assign new value to string s1 
 cout << "The string of s1 is     " ;  
 s1.print(); 
 cout << "The string of s2 is    " ;  
 s2.print();              //s2 has its own previous value 
}

//***********************RESULT************************
/*The string of s1 is    test1        
The string of s2 is    test1        
The string of s1 is     A new string
The string of s2 is    test1  */