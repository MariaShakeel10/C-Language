#include <iostream>
#include <cmath>

using namespace std;

main (){
    int ageJohn, ageMary;
    cout << "Find out who is older!" << endl;

    cout << "Enter John's age: " << endl;
    cin >> ageJohn;

    cout << "Enter Mary's age:";
    cin >> ageMary;

    if (ageJohn > ageMary){
        cout << "\n John is older than Mary";
    }
    else if (ageJohn < ageMary){
        cout << "\n Mary is older than John";
    }
    else {
        cout << "\n John and Mary are the same age";
    }
    return 0;
}