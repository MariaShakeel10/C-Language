#include <iostream>
using namespace std;

// function declaration
void copyArray(int *src, int *dest, int size);

int main() {
    int a[5] = {10, 20, 30, 40, 50};  // source array
    int b[5];                         // destination array

    copyArray(a, b, 5);  // copy elements from a → b

    cout << "Original array (a): ";
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";

    cout << "\nCopied array (b): ";
    for (int i = 0; i < 5; i++)
        cout << b[i] << " ";

    return 0;
}

// function definition
void copyArray(int *src, int *dest, int size) {
    for (int i = 0; i < size; i++) {
        *(dest + i) = *(src + i); // or dest[i] = src[i];
    }
}
