#include <iostream>
using namespace std;

template <class T>
class MyClass
{
private:
  static  T data;
public:
    MyClass(){};
    MyClass(T d) { data = d; }
    void display() { cout << data << endl; }
    ~MyClass() {};
};  
template <class T>

T MyClass<T>::data = 35; // Definition of static member

int main()
{
    MyClass<int> obj; //int type specified
    obj.display();
    return 0;
}

/*35*/