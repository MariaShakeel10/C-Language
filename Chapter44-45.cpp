#include <iostream>
using namespace std;


class Matrix {
    private:
    int A[2][2];
    int B[2][2];

    public:
//Default Constructor
    Matrix(){
        for (int i = 0; i <- 1; i++){
            for (int j = 0; j <= 1; j++){
                A[i][j] = 0;
                B[i][j] = 0;
            }
        }
    }
//Parameterized Constructor
    Matrix (int m[2][2], int n[2][2]){
        for (int i = 0; i <= 1; i++){
            for (int j = 0; j <= 1; j++){
                A[i][j] = m[i][j];
                B[i][j] = n[i][j];
            }
        }
    }
//Sum of Matrices
    void SumMatrix(){
        for (int i = 0; i <= 1; i++){
            for (int j = 0; j <= 1; j++){
                cout << A[i][j] + B[i][j] << "   ";
            }
            cout << endl;
        }
            
        }
  
//Subtraction of Matrices
        void SubMatrix(){
        for (int i = 0; i <= 1; i++){
            for (int j = 0; j <= 1; j++){
                cout << A[i][j] - B[i][j] << "   ";
            } 
                cout << endl;
        }
          
        }
//Multiplication of Matrices
        void MulMatrix(){
        for (int i = 0; i <= 1; i++){
            for (int j = 0; j <= 1; j++){
                cout << (A[i][0] * B[0][j]) + (A[i][1] * B[1][j]) << "   ";
            } 
                cout << endl;

        }
        }

//Division of Matrices
        void DivMatrix(){

            int temp[2][2],detB;
            for (int i = 0; i <=1; i++)
            {
                for (int j = 0; j <= 1; j++){
                    temp[i][j] = B[i][j];
                }
            }

            detB = (temp[0][0] * temp[1][1]) - (temp[0][1] * temp[1][0]);

            temp[0][0] = temp[0][0] + temp[1][1];
            temp[1][1] = temp[0][0] - temp[1][1];
            temp[0][0] = temp[0][0] - temp[1][1];

            temp[0][1] = temp[0][1] * (-1);
            temp[1][0] = temp[1][0] * (-1);   

            for (int i = 0; i <= 1; i++){
                for (int j = 0; j <= 1; j++){
                   temp[i][j] *= detB;
                }
            }
            

        for (int i = 0; i <= 1; i++){
            for (int j = 0; j <= 1; j++){
                cout << (A[i][0] * temp[0][j]) + (A[i][1] * temp[1][j]) << "   ";
                
            }
            cout << endl;
        }
            
        }

//transpose of Matrix
        void TransposeA(){
        for (int i = 0; i <= 1; i++){
            for (int j = 0; j <= 1; j++){
                cout << A[j][i] << "   ";
            }
            cout << endl;
        }
            
        }
        void TransposeB(){
        for (int i = 0; i <= 1; i++){
            for (int j = 0; j <= 1; j++){
                cout << B[j][i] << "   ";
            }
            cout << endl;
        }
            
        }

        ~Matrix(){};
    };





int main (){

int a[2][2] = { {3, 3}, {1, 1} };
int b[2][2] = { {2, 1}, {0, 1} };
Matrix obj(a, b);

cout << "Sum of Matrices: "<< endl;
obj.SumMatrix();

cout<<endl << "Subtraction of Matrices: "<< endl;
obj.SubMatrix();

cout<<endl  << "Multiplication of Matrices: "<< endl;
obj.MulMatrix();

cout<<endl  << "Division of Matrices: "<< endl;
obj.DivMatrix();

cout<<endl  << "Transpose of Matrix A: "<< endl;
obj.TransposeA();

cout<<endl  << "Transpose of Matrix B: "<< endl;
obj.TransposeB();

 return 0;
}


/*Sum of Matrices: 
5   4           
1   2   

Subtraction of Matrices: 
1   2   
1   0   

Multiplication of Matrices: 
6   6
2   2

Division of Matrices: 
6   6
2   2

Transpose of Matrix A: 
3   1
3   1   

Transpose of Matrix B: 
2   0
1   1*/