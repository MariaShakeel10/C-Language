#include <iostream>
#include <cmath>

using namespace std;

int main (){
    int age;

    cout << "Enter your age:";
    cin >> age;

    if (age < 18){
        cout << "You are a minor";
    }
    else if (age >= 18 && age < 65){
        cout << "You are an adult";
    }
    else {
        cout << "You are a senior citizen";
    }
    return 0;
}