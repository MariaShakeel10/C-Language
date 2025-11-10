//This program allocates memory dynamically and then frees it after use. 
 
#include <iostream>
 #include <stdlib.h>
#include <string.h> 
 using namespace std;
int main() 
{ 
   char s1[] = "This is a sentence"; 
     char *s2; 
     s2 = (char *) malloc(strlen(s1) + 1); 
        /* Remember that stings are terminated by the null terminator, "\0',  
     and the strlen returns the length of a string not including the terminator */ 
     if (s2 == NULL) 
     { 
         cout << "Error on malloc"; 
         return 1; 
         /* Use a nonzero return to indicate an error has occurred */ 
     } 
 
     strcpy(s2,s1); 
 
     cout << "s1: " <<  s1 << endl; 
     cout << "s2: " <<  s2 << endl; 
     free(s2);  
     return 0; 
}