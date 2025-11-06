 # include <iostream> 
# include <stdlib.h> 
using namespace std; 
int main( ) 
{ 
 int anInteger; 
 char myInt [20];
 
 cout << "Enter an integer between 10-100 : "; 
 cin >> myInt; 
 if (atoi(myInt) == 0) 
  cout << "\nError : Not a valid input"; // could be non numeric 
 else 
 { 
  anInteger = atoi(myInt); 
  if (anInteger < 10 || anInteger > 100) 
   cout << "\nError : only integers between 10-100 are allowed!"; 
  else 
   cout << "\n OK, you have entered " << anInteger; 
 } 
}  