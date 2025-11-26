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

//*************************RESULT********************** 
/* Enter element for position 5*5: 
1
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
The transpose matrix is: 
        1       6       11      16      21      2       7       12      17      22      3       8       13      18      23      4       9       14      19      24      5       1015      20      25
        1       6       3       4       5       2       7       8       9       10      11      12      13      14      15      16      17      18      19      20      21      2223      24      25
        1       2       3       16      21      6       7       8       17      22      11      12      13      18      23      4       9       14      19      24      5       1015      20      25
        1       6       11      16      5       2       7       12      17      10      3       8       13      18      15      4       9       14      19      20      21      2223      24      25
        1       2       3       4       5       6       7       8       9       10      11      12      13      14      15      16      17      18      19      20      21      2223      24      25 */