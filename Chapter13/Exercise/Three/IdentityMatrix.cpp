#include <iostream>
#include <cmath>
#include <conio.h>


using namespace std;

int main (){
    int maxRows=3;
    int maxCols=3;

    int matrix[maxRows][maxCols];

    for (int i= 0; i< maxRows; i++){
        for (int j = 0; j< maxCols; j++){
            cout << "Enter element for position [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
 bool isIdentity = true;
   for (int i = 0; i < maxRows; i++) {
        for (int j = 0; j < maxCols; j++) {
            if (i == j && matrix[i][j] != 1) {
                isIdentity = false; // diagonal must be 1
                break;
            }
            else if (i != j && matrix[i][j] != 0) {
                isIdentity = false; // non-diagonal must be 0
                break;
            }
        }
        if (!isIdentity) break; // exit early if condition fails
    }

    if (isIdentity)
        cout << "\nThe matrix is an Identity Matrix." << endl;
    else
        cout << "\nThe matrix is NOT an Identity Matrix." << endl;
     

          cout << endl;
    return 0;
}

//*************************RESULT********************** 
/* Enter element for position [0][0]: 1
Enter element for position [0][1]: 0
Enter element for position [0][2]: 0
Enter element for position [1][0]: 0
Enter element for position [1][1]: 1
Enter element for position [1][2]: 0
Enter element for position [2][0]: 0
Enter element for position [2][1]: 0
Enter element for position [2][2]: 1

The matrix is an Identity Matrix.
 */