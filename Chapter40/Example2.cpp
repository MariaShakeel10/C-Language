/* Program to illustrate the initialization lists, construction and destruction sequences of 
contained and containing objects. */ 
 
#include   <iostream> 
#include   <stdlib.h> 

using   namespace   std ;
 
class   Column 
{ 
    private : 
        int   size ; 
     
    public : 
        Column ( int   size ) 
        { 
                cout   <<   "Column created"   <<  endl   <<   endl ; 
                this->size   =   size ; 
        } 
        ~Column ( ) 
        { 
                cout   <<   "Column destroyed "  <<   endl   <<   endl ; 
        } 
         
        void   showSize ( ) ; 
        void   setSize ( int ) ; 
}; 
 
void Column :: showSize ( ) 
{ 
    cout   <<   "Column size is : "   <<   size   <<   endl   <<   endl ; 
} 
void Column :: setSize ( int   sz ) 
{ 
    size   =   sz ; 
} 
 
class Row 
{ 
    private : 
        int   size ; 
        Column   col ; 
    public : 
        Row ( int   rowSize, int   colSize ) : col( colSize ) 
        { 
                cout   <<  "Row created"   <<   endl   <<   endl ; 
                this->size   =   rowSize ; 
        } 
        ~Row ( ) 
        { 
                cout   <<   "Row destroyed "   <<   endl   <<   endl ; 
        } 
        void   showSize ( ) ; 
        void   setSize ( int ) ; 
}; 

 
void   Row :: showSize ( ) 
{ 
     col.showSize ( ) ; 
     cout   <<   "Row size is : "   <<   size   <<   endl   <<   endl ; 
 
} 
void Row :: setSize ( int sz ) 
{ 
    size   =   sz ; 
} 
 
class   Matrix 
{ 
    private : 
        Row   row ; 
    public : 
        Matrix ( int   rowSize, int   colSize ) : row( rowSize,  colSize ) 
        { 
                cout   <<   "Matrix created"   <<   endl   <<   endl ; 
        } 
        ~Matrix ( ) 
        { 
                cout   <<   "Matrix destroyed"   <<   endl   <<   endl ; 
        } 
        void   displayMatrixSize ( ) ; 
 
} ; 
 
void Matrix :: displayMatrixSize ( ) 
{ 
    row.showSize ( ) ; 
} 
 
void   f( ) 
{ 
    Matrix   matrix(3, 4) ; 
    matrix.displayMatrixSize ( ) ; 
} 
 
int   main() 
{ 
    f( ); 
    system("PAUSE"); 
    return   0; 
} 

//***********************RESULT************************
/*Column created
Row created   

Matrix created

Column size is : 4

Row size is : 3

Matrix destroyed

Row destroyed

Column destroyed

Press any key to continue . . . */