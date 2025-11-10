#include <iostream>
#include <new>   // for std::bad_alloc
using namespace std;

int main() {
    size_t size = 10000;  // Start with 10 KB
    char *p;

    cout << "Testing dynamic memory allocation..." << endl;

    while (true) {
        try {
            // Try to allocate memory of 'size' bytes
            p = new char[size];

            // If successful, free it and double the size
            delete[] p;
            size *= 2;

            cout << "Successfully allocated " << size / 1024 << " KB" << endl;
        }
        catch (bad_alloc &e) {
            cout << "\n❌ Failed to allocate " << size / 1024 << " KB" << endl;
            cout << "Maximum allocatable heap memory ≈ " << (size / 2) / 1024 << " KB" << endl;
            break;
        }
    }

    return 0;
}
