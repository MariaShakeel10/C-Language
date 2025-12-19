//  An example of overloaded template functions. 
 
#include<iostream>
using namespace std; 
 
// template function 
template<class T> 
void inverse(T &x, T &y) 
{ 
    T temp; 
     temp = x; 
     x = y; 
     y = temp; 
} 
 
// overloaded inverse fucntion 
template<class T> 
T inverse(T x) 
{ 
   return (-x); 
} 
 
// the main fucntion 
int main() 
{ 
   int i = 3, j = 5; 
   // calling the templatized functions 
   inverse(i); 
   inverse(i, j); 
   cout << "“i = ”" << i << ", j = " << j << endl; 
} 

//***********************RESULT************************
/*“i = ”5, j = 3*/