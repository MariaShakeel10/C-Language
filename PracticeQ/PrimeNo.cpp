#include <iostream>
using namespace std;

string isPrime (int n){
    if( n < 2) return "Not Prime";
    for ( int i=2; i < n; i++){
        if( n % i == 0) return "Not Prime";
    }
    return "Prime";
}

int main (){
    int num;
    cout << "enter a no. to find out prime or not";
    cin >> num;

    cout << num << " is a " << isPrime(num);
}