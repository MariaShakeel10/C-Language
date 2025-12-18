// This program shows the dynamic allocation of memory according to the 
//requirement to //store a certain number of a structure. 
 
#include <iostream> 
#include <stdlib.h> 
#include <string.h> 
 using namespace std;
struct Employee 
{ 
  char name[40]; 
     int id; 
}; 
 
int main() 
{ 
 
 Employee *workers, *wpt;
     int num;
 cout <<"How many employees do you want\n" ;
     cin >> num;
    // the pointer workers gets the starting address of the memory if allocated successfully  
     workers = (Employee *) malloc(num * sizeof(Employee));
     if (workers == NULL)
     { 
         cout << "Unable to allocate space for employees\n";
         return 1; 
         // A nonzero return is usually used to indicate an error 
     } 
 cout << "Memory for " << num << " employees has allocated successfully" << endl; 
 //now free the allocated memory 
 free(workers) ; 
}

//***********************RESULT************************
/*How many employees do you want
5
Memory for 5 employees has allocated successfully*/