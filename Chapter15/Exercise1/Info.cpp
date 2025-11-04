#include <iostream>
using namespace std;

int main() {
    char ch = 'A';
    char *ptr = &ch;

    cout << "Value of ch: " << ch << endl;

    cout << "Address of ch: " << (void*)&ch << endl;        // ✅ cast to void*
    cout << "Pointer ptr holds address: " << (void*)ptr << endl;  // ✅ cast to void*
    cout << "Value pointed to by ptr: " << *ptr << endl;

    return 0;
}
