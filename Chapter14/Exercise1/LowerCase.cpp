#include <iostream>
#include <cctype>
#include <stdlib.h>

using namespace std;

void convertToLowerCase(char *a);
int main() {
    char str[100];
    cout << "Enter a text: ";
    cin.getline(str, 100);
    cout << "Original String: " << str << endl;
    
    convertToLowerCase(str);
    
    cout << "Lowercase String: " << str << endl;
    
    return 0;
}
void convertToLowerCase(char *a) {
    while (*a != '\0') {
        if (isupper(*a)){
            *a = tolower(*a);
          
        }  ++a;
          }
}

//*************************RESULT********************** 
/* Enter a text: TYTUjhbjkbjk bsvhjdv
Original String: TYTUjhbjkbjk bsvhjdv 
Lowercase String: tytujhbjkbjk bsvhjdv */