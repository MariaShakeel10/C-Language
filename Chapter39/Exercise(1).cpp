//🔹 Program 1: ❌ Without Destructor (Memory Leak)
#include <iostream>
using namespace std;

class Test
{
private:
    int* ptr;

public:
    Test()
    {
        ptr = new int(10);   // Dynamic memory allocation
        cout << "Memory allocated at address: " << ptr << endl;
    }

    // ❌ No destructor → memory not released
};

int main()
{
    Test obj;
    return 0;
}

//***********************RESULT************************
/*Memory allocated at address: 0x733dd0

Memory allocated at address: 0x763e20
*/