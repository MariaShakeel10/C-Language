/* Matrix class, which is without overloading stream operators */ 
#include <iostream> 
#include <stdlib.h>
using namespace std; 
 
class Matrix 
{ 
      private : 
 
            int numRows, numCols ;  
            float elements [30] [30] ;  
       
      public : 
            Matrix( int rows , int cols ) ; 
            void getMatrix ( ) ; 
            void displayMatrix ( ) ; 
 
}; 
 
Matrix :: Matrix ( int rows = 0 , int cols = 0) 
{ 
    numCols = cols ; 
   numRows = rows ;      
     
    for ( int i = 0 ; i < numRows ; i ++ ) 
    { 
       for ( int j = 0 ; j < numCols ; j ++ ) 
       { 
       elements [ i ] [ j ] = 0 ; 
       } 
    }  
} 
 
void Matrix :: getMatrix ( ) 
{ 
     for ( int i = 0 ; i < numRows ; i ++ ) 
     { 
         for ( int j = 0 ; j < numCols ; j ++ ) 
         { 
             cin >> elements [ i ] [ j ] ; 
         } 
     } 
} 
 
 
void Matrix :: displayMatrix ( ) 
{ 
     for ( int i = 0 ; i < numRows ; i ++ ) 
     { 
         cout << "|  " ; 
         for ( int j = 0 ; j < numCols ; j ++ ) 
         { 
             cout << elements [ i ] [ j ] << "  " ; 
         } 
         cout << "|" << endl ; 
     } 
} 
 
int main ( ) 
{ 
 
     Matrix matrix (2, 2) ; 
 
     matrix.getMatrix ( ) ; 
 
     matrix.displayMatrix ( ) ; 
 
     system ( "PAUSE" ) ; 
 
}

//***********************RESULT************************
/*2
3
4
45
|  2  3  |
|  4  45  |*/