#include <iostream>
#include <cmath>
using namespace std;

int main (){
int arr[100];
cout << "Enter number of elements in array:(-1 to exit) ";
int z ,i =0;
do {
    cin >> z;
    if (z!=-1){
        arr[i] = z;
    }
        i++;
}while (z != -1 && i<100);

cout << " You have entered " << i-1 << " elements in array." << endl;
return 0;

}

//*************************RESULT********************** 
/* Enter number of elements in array:(-1 to exit) 12
32
23
43
21
-1
 You have entered 5 elements in array. */