#include <iostream>
using namespace std;

template <class T>
class MyClass
{
private:
    T data;
public:
    MyClass(){};
    MyClass(T d) { data = d; }
    void display() { cout << data << endl; }
    ~MyClass() {};
};  

int main()
{
    MyClass<int> obj(10); //int type specified
    obj.display();
    return 0;
}

/*10*/