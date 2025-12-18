#include <iostream>
#include <cmath>
#include <conio.h>


using namespace std;

int main (){
    int maxRows=2;
    int maxCols=3;

    int matrix[maxRows][maxCols];

    for (int i= 0; i< maxRows; i++){
        for (int j = 0; j< maxCols; j++){
            cout << "Enter element for position [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    cout << "The matrix is: " << endl;
    for (int i= 0; i< maxRows; i++){
        for (int j = 0; j< maxCols; j++){
            cout << matrix[i][j]<< "\t"  ;
 
        }         
          cout << endl;
    }
    return 0;

}

//*************************RESULT********************** 
/* Enter element for position [0][0]: 1 
Enter element for position [0][1]: 2
Enter element for position [0][2]: 3
Enter element for position [1][0]: 4
Enter element for position [1][1]: 5
Enter element for position [1][2]: 6
The matrix is: 
        1       2       3
        4       5       6 */