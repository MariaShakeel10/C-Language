//This program demonstrate the justified output 
#include <iostream> 
#include <iomanip> 
 
using namespace std ;
 
int main()  
{ 
 int i = -1234; 
 cout.setf(ios::left, ios::adjustfield); 
 cout << "|" << setw(12) << i << "|" << endl; 
 cout.setf(ios::right, ios::adjustfield); 
 cout << "|" << setw(12) << i << "|" << endl; 
 cout.setf(ios::internal, ios::adjustfield); 
 cout << "|" << setw(12) << i << "|" << endl; 
 cout.setf(ios::left | ios::right, 
 ios::adjustfield); 
 cout << "|" << setw(12) << i << "|" << endl; 
  cin >> i ; 
 } 

 //***********************RESULT************************
/*|-1234       |
|       -1234|
|-       1234|
|       -1234|*/