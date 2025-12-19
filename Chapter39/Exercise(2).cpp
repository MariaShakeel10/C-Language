//🔹 Program 2: ✅ With Proper Destructor (No Memory Leak)
#include <iostream>
using namespace std;

class Test
{
private:
    int* ptr;

public:
    Test()
    {
        ptr = new int(10);
        cout << "Memory allocated at address: " << ptr << endl;
    }

    ~Test()
    {
        delete ptr;          // Proper memory deallocation
        cout << "Memory deallocated" << endl;
    }
};

int main()
{
    Test obj;
    return 0;
}

//***********************RESULT************************
/*
Memory allocated at address: 0x7b3de0
Memory deallocated

Memory allocated at address: 0x6e3de0
Memory deallocated
*/