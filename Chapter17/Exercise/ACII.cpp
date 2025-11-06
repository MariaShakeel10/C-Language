#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    char ch;
    cout << "ASCII values from 0 to 256 are:\n\n";

    for (int i = 0; i <= 255; i++) {
        ch = i;
        cout << i << " : " << ch << "\t";
    }
}