#include <iostream>
#include <cmath>

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
            cout << "\t" << matrix[i][j] ;
 
        }         
          cout << endl;
    }
    return 0;

}