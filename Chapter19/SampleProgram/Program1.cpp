/* This is a sample program to demonstrate the use of open(), close(), seekg(), get() 
functions  and streams. It expects a file named my-File.txt in the current directory having 
some data strings inside it. */ 
#include <iostream>
#include <fstream> 
#include <stdlib.h> 

using namespace std;
 
/* Declare the stream objects  */ 
ifstream inFile; 
ofstream scrn, prnt; 
 
int main() 
{ 
 char inChar; 
 inFile.open("D:\\C++\\Chapter19Text\\My-File.txt", ios::in);   // Open the file for input 
 if(!inFile)   
 {        
  cout << "Error opening file"<< endl;   
 } 
 scrn.open("CON", ios::out);   // Attach the console with the output stream 
 
 while(inFile.get(inChar))       // Read the whole file one character at a time 
 { 
      scrn << inChar;                 // Insert read character to the output stream 
  } 
scrn.close();                            // Close the output stream 
 
inFile.seekg(0l, ios::beg);       // Go to the beginning of the file 
prnt.open("LPT1", ios::out); // Attach the output stream with the LPT1 port  
 
while(inFile.get(inChar))     // Read the whole file one character at a time 
{ 
      prnt << inChar;              // Insert read character to the output stream 
 } 
prnt.close();                        // Close the output stream  
inFile.close();                     // Close the input stream 
} 

//*************************RESULT********************** 
/* ABCDEFGHIJKLMNOPQRSTUVWXYZ */
//Content 
/*ABCDEFGHIJKLMNOPQRSTUVWXYZ*/