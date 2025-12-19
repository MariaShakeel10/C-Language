// An example of forcing the template functions for some specific data type 
#include<iostream>
using namespace std; 
 
template <class T, class U> 
T reverse (U x) 
{ 
  return (-x); 
} 
 
// main function 
int main() 
{ 
   double amount = -8.8; 
   // calling the function as double reverse(int) 
  cout << reverse<double, int>(amount) << endl; 
 
   // calling the function as double reverse(double a) 
   cout << reverse<double>(amount) << endl; 
 
   // calling the function as double reverse(double a) 
   cout << reverse<double, double>(amount) << endl; 
 
   // calling the function as int reverse(int a) 
   cout << reverse<int, int>(amount) << endl;   
}

//***********************RESULT************************
/*8
8.8
8.8
8 */