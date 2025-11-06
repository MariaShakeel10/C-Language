#include <iostream> 
#include <string.h> 
#include <stdlib.h> 
using namespace std;
 
int main() 
{ 
char s1[] = "Welcome to " ; 
char s2[] = "Virtual University" ; 
char s3[] = "Welcome to Karachi" ; 
char city[] = "Karachi"; 
char province[] = "Sind"; 
       char s[80]; 
char *pc; 
   int n; 
     
     cout << "s1 = " << s1 << endl << "s2 = " << s2 << endl ; 
     cout << "s3 = " << s3 << endl ; 
   // function for string length 
   cout << "The length of s1 = " << strlen(s1) << endl ; 
   cout << "The length of s2 = " << strlen(s2) << endl ; 
   cout << "The length of s3 = " << strlen(s3) << endl ; 
 
    strcpy(s, "Hyderabad");  // string copy  
   cout<< "The nearest city to "<< city << " is " << s << endl ; 
   
   strcat(s, " and ");  // string concatenation  
 strcat(s,city); 
 strcat(s, " are in "); 
 strcat(s, province); 
 strcat(s, ".\n"); 
 cout << s; 
 
 if (!(strcmp (s1,s2))) // ! is used as zero is returned if s1 & s2 are equal 
    cout << "s1 and s2 are identical" << endl ; 
   else 
      cout << "s1 and s2 are not identical" << endl ;   
   
    if (!(strncmp (s1,s3,7))) // ! is used as zero is returned for equality 
  cout << "First 7 characters of s1 and s3 are identical" << endl ; 
   else 
      cout << "First 7 characters of s1 and s3 are not identical" << endl ;    
} 