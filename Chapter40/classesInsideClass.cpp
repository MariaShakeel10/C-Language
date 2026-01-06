#include <iostream>
using namespace std;

class mainClass
{
    public:
        mainClass()
        {
            cout << "\n mainClass Constructor ...";
        }

        class innerClass
        {
            public:
                innerClass()
                {
                    cout << "\n innerClass Constructor ...";
                }

                 void display (){
                  cout << "\ndisplay ofinnerClass ...";
        }
                ~innerClass()
                {
                    cout << "\n innerClass Destructor ...";
                }
        };

        void display (){
            cout << "\ndisplay of mainClass ...";
        }

        ~mainClass()
        {
            cout << "\n mainClass Destructor ...";
        }
    };

int main()
{
mainClass obj;
mainClass::innerClass innerObj;
obj.display();
innerObj.display();
return 0;
}

/*
mainClass Constructor ...
 innerClass Constructor ...

display of mainClass ...   
display ofinnerClass ...   

 innerClass Destructor ... 
 mainClass Destructor ...
 */