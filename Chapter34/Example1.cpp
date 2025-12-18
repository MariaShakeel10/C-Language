/* The following program explains the customized new and delete operators */ 
 
#include   <iostream> 
#include   <stdlib.h> 
#include   <stddef.h> 

using namespace   std;
 
// ------------- Overloaded new operator 

void* operator new[](size_t size)
{
    return calloc(1, size);  // zero-filled
} 
 
// ----------- Overloaded delete operator 


void operator delete[](void* ptr)
{
    free(ptr);
}

int main ()
{ 
    // Allocate a zero-filled array 
    int   *ip   =   new  int[10]; 
    // Display the array 
    for ( int i  =  0; i  <  10; i ++ ) 
        cout  <<  ip[i]  <<  "  ";
    // Release the memory 
    delete  [] ip; 
    return   0;
}

//***********************RESULT************************

//0  0  0  0  0  0  0  0  0  0
//changed from notes
/*-1163005939  -1163005939  -1163005939  -1163005939  -1163005939  -1163005939  -1163005939  -1163005939  -1163005939  -1163005939  */