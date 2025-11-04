#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main (){
    int maxRows=5;
    int maxCols=5;
    

    int matrix[maxRows][maxCols]; 
    cout << "Enter element for position 5*5: \n";

    for (int i= 0; i< maxRows; i++){
        for (int j = 0; j< maxCols; j++){
           
            cin >> matrix[i][j];
        }
    }

    cout << "The transpose matrix is: " << endl;
    for (int i= 0; i< maxRows; i++){
        for (int j = 0; j < i; j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;

        }         
 // Step 2: Swap upper and lower triangles
    for (int i = 0; i < maxCols; i++) {
        for (int j = 0; j < i; j++) { // lower triangle
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    // Step 3: Print the transposed matrix
    for (int i = 0; i < maxRows; i++)
    {
       for (int j = 0; j < maxCols; j++)
       {
              cout << "\t" << matrix[i][j];
       }
       
    }
    

          cout << endl;
    }
    return 0;

}