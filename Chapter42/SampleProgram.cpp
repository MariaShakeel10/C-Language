/* This program defines a template class and shows its use for different data types.
   There is also the use of a template function and operator << overloading.
*/

#include <iostream>
using namespace std;

// --------------------------------------------------
// Template class
template <class T>
class Generic
{
private:
    T instance;

public:
    Generic(T i);      // constructor
    void print();      // print function
};

// Template constructor definition
template <class T>
Generic<T>::Generic(T i)
{
    instance = i;
}

// Template print function
template <class T>
void Generic<T>::print()
{
    cout << "Generic printing:" << endl;
    cout << instance << endl;
}

// --------------------------------------------------
// Employee class
class Employee
{
private:
    int idNum;
    double salary;

public:
    Employee(int id = 0);
    friend ostream& operator<<(ostream& out, const Employee& e);
};

// Employee constructor
Employee::Employee(int id)
{
    idNum = id;
    salary = 4.9;
}

// Overloaded << operator
ostream& operator<<(ostream& out, const Employee& emp)
{
    out << "Employee number " << emp.idNum;
    out << " Salary " << emp.salary;
    return out;
}

// --------------------------------------------------
// Main function
int main()
{
    Generic<int> anInt(7);
    Generic<double> someMoney(6.65);
    Generic<Employee> aWorker(Employee(333));

    anInt.print();
    someMoney.print();
    aWorker.print();

    return 0;
}


//***********************RESULT************************
/*7
Generic printing:
6.65
Generic printing:
Employee number 333 Salary 4.9*/