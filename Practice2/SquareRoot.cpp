#include <iostream>
#include <cmath>

using namespace std;

main (){
    int a,b;
    double c;
    cout << "Enter a value of 'a':";
    cin >> a;
    cout << "Enter a value of 'b':";
    cin >> b;
    c=(sqrt((pow (a,2))+(pow (b,4))));
    cout << "The value of c is:" << c << endl;
return 0;
}