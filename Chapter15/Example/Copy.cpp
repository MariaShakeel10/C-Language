#include <iostream>

using namespace std;

int main (){
    char stra [80]="Hello World! This is C++ Programming.";
    char strb[80];
    char *ptra;
    char *ptrb;

    ptra = stra;
    ptrb = strb;

    while (*ptra != '\0')
    {
        *ptrb++ = *ptra++;
    }
    *ptrb = '\0';

    cout << "String a: " << stra << endl;
    cout << "String b: " << strb << endl;
}