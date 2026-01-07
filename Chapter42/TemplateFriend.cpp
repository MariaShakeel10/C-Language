#include <iostream>
using namespace std;

template <class T>
class MyClass
{
private:
    T data;

public:
    MyClass() { data = 100; }

    template <class U>
    friend void display();
};

template <class U>
void display()
{
    MyClass<U> obj;
    cout << obj.data << endl;
}

int main()
{
    display<int>();
    return 0;
}
/*100*/