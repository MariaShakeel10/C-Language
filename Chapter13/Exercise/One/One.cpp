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