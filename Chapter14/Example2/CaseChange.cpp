#include <iostream>
#include <cctype>
#include <stdlib.h>

using namespace std;

void convertToUpperCase(char *a);
int main() {
    char str[]="Hello World! This is C++ Programming.";
    
    cout << "Original String: " << str << endl;
    
    convertToUpperCase(str);
    
    cout << "Uppercase String: " << str << endl;
    
    return 0;
}
void convertToUpperCase(char *a) {
    while (*a != '\0') {
        if (islower(*a)){
            *a = toupper(*a);
          
        }  ++a;
          }
}

//*************************RESULT********************** 
/* Original String: Hello World! This is C++ Programming. 
Uppercase String: HELLO WORLD! THIS IS C++ PROGRAMMING */