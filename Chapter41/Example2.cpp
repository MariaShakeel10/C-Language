// A template function example using two generic types 
#include<iostream> 

using namespace std;
 
// template function 
template <class T, class U> 
void larger(T val1, U val2) 
{ 
   if (val1 > val2) 
      cout<<"First is larger"<<endl; 
 
   else 
      cout<<"First is not larger"<<endl; 
} 
 
// main function  
int main() 
{ 
   larger(2.1, 9); 
   larger('G', 'A'); 
} 

//***********************RESULT************************
/*First is not larger
First is larger*/