// A small program shows the use of template function 
#include<iostream> 

using namespace std;
// template function of deciding a larger number 
template<class T> 
T larger(T x, T y) 
{ 
    T big; 
    if (x > y) 
       big = x; 
    else 
       big = y; 
    return(big); 
} 
 

// the main function 
int main() 
{ 
    int i = 7, j = 12; 
    double x = 4.5, y = 1.3; 
    cout << "The larger of " << i << " and " << j << " is " << larger(i, j)<< endl; 
    cout << "The larger of " << x << " and " << y << " is " << larger(x, y)<< endl; 
    //cout << "The larger of " << x << " and " << y << " is " << larger(i, y)<< endl; 
 
}

//***********************RESULT************************
/*The larger of 7 and 12 is 12
The larger of 4.5 and 1.3 is 4.5*/