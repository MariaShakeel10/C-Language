#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main (){
    int maxRows=5;
    int maxCols=5;

    int matrix[maxRows][maxCols]; 
    cout << "Enter element for position 5*5: ";

    for (int i= 0; i< maxRows; i++){
        for (int j = 0; j< maxCols; j++){
           
            cin >> matrix[i][j];
        }
    }
    cout << "The reverse matrix is: " << endl;
    for (int i= 0; i< maxRows; i++){
        for (int j = maxCols-1;j >= 0; j--){
            cout << "\t" << matrix[i][j] ;
 
        }         
          cout << endl;
    }
    return 0;

}

//*************************RESULT********************** 
/* Enter element for position 5*5: 1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
The reverse matrix is: 
        5       4       3       2       1
        10      9       8       7       6
        15      14      13      12      11
        20      19      18      17      16
        25      24      23      22      21 */