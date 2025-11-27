/* This sample code demostrates the use of fstream and seekg() function. It will create a 
file named my-File.txt write alphabets into it, destroys the previous contents */ 
#include <iostream>
#include <fstream> 

using namespace std;
 
fstream rFile;      // Declare the stream object 
int main() 
{ 
char rChar; 
/* Opened the file in both input and output modes */ 
rFile.open("D:\\C++\\Chapter19Text\\my-File.txt", ios::in | ios::out);  
if(!rFile) 
{ 
cout << "error opening file"<< endl; 
} 
/* Run the loop for whole alphabets */ 
for ( rChar ='A'; rChar <='Z'; rChar++) 
{ 
rFile << rChar;        // Insert the character in the file 
} 
rFile.seekg(8l, ios::beg);     // Seek the beginning and move 8 bytes forward 
rFile >>rChar;                     // Take out the character from the file 
cout << "the 8th character is  " << rChar ; 
 
rFile.seekg(-16l, ios::end);  // Seek the end and move 16 positions backword 
rFile >>rChar;                     // Take out the character at the current position 
cout << "the 16th character from the end is  " << rChar ; 
 
rFile.close();                       // Close the file 
} 

//*************************RESULT********************** 
/* the 8th character is  Ithe 16th character from the end is  K */
//Content 
/*ABCDEFGHIJKLMNOPQRSTUVWXYZ*/