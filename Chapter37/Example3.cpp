/* Matrix class, which is without overloading stream operators */ 
#include <iostream> 
#include <stdlib.h>
using namespace std; 
 
 
class   Matrix 
{ 
 float   elements[30][30]; 
 int   numRows, numCols; 
 
public: 
 Matrix ( int rows = 0 , int cols = 0 ) 
 { 
  numRows   =   rows; 
  numCols   =   cols; 
 } 
  
 friend ostream &   operator   << ( ostream & , Matrix & ); 
 friend istream &   operator    >> ( istream & , Matrix & ); 
}; 
 
istream &   operator  >> ( istream &   input , Matrix &   m ) 
{ 
    for ( int i = 0;  i < m.numRows;  i ++ ) 
    { 
        for ( int j = 0;  j < m.numCols;  j ++ ) 
  { 
   input   >>   m.elements [ i ] [ j ] ; 
  } 
 } 
 return   input; 
} 
 
ostream &   operator   << ( ostream &   output , Matrix &   m ) 
{ 
 for ( int r = 0;  r  <  m.numRows;  r++ ) 
 { 
  for ( int c = 0;  c < m.numCols;  c++ ) 
  { 
   output   <<   m.elements [ r ] [ c ]   <<  " \t" ; 
  } 
  output   <<    endl; 
 } 
 return   output ; 
} 
 
int   main ( ) 
{ 
             
            Matrix   matrix ( 3 ,3 ); 
cout   <<   "\nEnter a 3 * 3 matrix \n\n"; 
 cin   >>   matrix ; 
cout    <<   "\nEntered matrix is: \n"; 
 cout   <<   matrix; 
 
 system ( "PAUSE" ); 
           return 0; 
} 

//***********************RESULT************************
/*
Enter a 3 * 3 matrix

2
3
4
2
3
4
24
3
4

Entered matrix is:
2       3       4
2       3       4
24      3       4
Press any key to continue . . . 
*/