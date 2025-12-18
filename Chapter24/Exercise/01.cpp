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


//***********************RESULT************************
/*Testing dynamic memory allocation...
Successfully allocated 19 KB 
Successfully allocated 39 KB 
Successfully allocated 78 KB 
Successfully allocated 156 KB
Successfully allocated 312 KB
Successfully allocated 625 KB
Successfully allocated 1250 KB
Successfully allocated 2500 KB
Successfully allocated 5000 KB
Successfully allocated 10000 KB
Successfully allocated 20000 KB
Successfully allocated 40000 KB
Successfully allocated 80000 KB
Successfully allocated 160000 KB
Successfully allocated 320000 KB
Successfully allocated 640000 KB
Successfully allocated 1280000 KB
Successfully allocated 2560000 KB
Successfully allocated 5120000 KB
Successfully allocated 10240000 KB
Successfully allocated 20480000 KB

❌ Failed to allocate 20480000 KB
Maximum allocatable heap memory ≈ 10240000 KB*/