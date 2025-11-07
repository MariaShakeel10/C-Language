#include <iostream> 
#include <fstream> 

using namespace std;
 
int main() 
{ 
    char name[50];     // used to read name of employee from file 
    char sal[10];           // used to read salary of employee from file 
    char dept[30];      // used to read dept of employee from file  
    ifstream inFile;           // Handle for the input file 
 
    char inputFileName[] = "D:\\C++\\Chapter18Text\\myfile.txt";     // file name, this file is in the current directory 
 
    inFile.open(inputFileName);                // Opening the file 
 
    // checking that file is successfully opened or not 
    if (!inFile)  
   { 
   cout << "Can't open input file named " << inputFileName << endl;    
   exit(1);  
   }  
    
    // Reading the complete file word by word and printing on screen 
   while (!inFile.eof())  
   {   
  inFile >> name >> sal >> dept; 
  cout << name << "\t" << sal << " \t" << dept << endl;  
   } 
   inFile.close(); 
} 