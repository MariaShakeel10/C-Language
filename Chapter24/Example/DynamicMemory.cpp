//This program calculates the average age of a class of students  
//using dynamic memory allocation  
 
#include <iostream> 
#include <stdlib.h> 
#include <string.h> 
 using namespace std;
int main( )  
{ 
 
 int numStuds, i, totalAge, *iptr, *sptr; 
     cout <<"How many students are in the class ?    " ; 
     cin >> numStuds; 
     // get the starting address of the allocated memory in pointer iptr 
 iptr = (int *) malloc(numStuds * sizeof(int)); 
     //check for the success of memory allocation 
     if (iptr == NULL) 
     { 
         cout << "Unable to allocat space for " << numStuds << " students\n"; 
         return 1;  
         // A nonzero return is usually used to indicate an error  
     } 
     sptr = iptr ; //sptr will be used for pointer arithmetic/manipulation 
     i = 1 ; 
     totalAge = 0 ; 
     //use a loop to get the ages of students  
 for (i = 1 ; i <= numStuds ; i ++) 
     { 
         cout << "Enter the age of student  " << i << " = " ;  
          cin >> *sptr ; 
          totalAge = totalAge + *sptr ;  
          sptr ++ ;   
     } 
 cout << "The average age of the class is " << totalAge / numStuds << endl; 
     //now free the allocated memory, that was pointed by iptr 
     free (iptr) ; 
     sptr = NULL ; 
 }