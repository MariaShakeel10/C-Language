#include <iostream> 
#include <fstream> 
#include <cstring> 
#include <cstdlib> 

using namespace std;
 
int main() 
{ 
    ifstream inFile;                           // Handle for the input file 
    char inputFileName[] = "D:\\C++\\Chapter18Text\\strtok.txt";     // file name, this file is in the current directory 
    ofstream outFile;                        // Handle for the output file 
    char outputFileName[] = "D:\\C++\\Chapter18Text\\Cstrtok.txt"; // file name, this file is in the current directory 
    const int MAX_CHAR_TO_READ = 100;     // maximum character to read in one line 
    char completeLineText[MAX_CHAR_TO_READ];  // used in getLine function 
    char *tokenPtr;       // Used to get the token of a string 
    int salary, totalSalary;       
         
    salary = 0; 
    totalSalary = 0;               
 
    inFile.open(inputFileName);             // Opening the input file 
    outFile.open(outputFileName);         // Opening the output file 
 
    // Checking that file is successfully opened or not 
    if (!inFile)  
    { 
     cout << "Can't open input file named " << inputFileName << endl;    
    exit(1);  
    }  
    if (!outFile)  
    { 
     cout << "Can't open output file named " << outputFileName << endl;    

    exit(1);  
    }  
 
    // Reading the complete file line by line and calculating the total salary 
    while (!inFile.eof())  
    {   
          inFile.getline(completeLineText, MAX_CHAR_TO_READ); 
          tokenPtr = strtok(completeLineText, " ");  // First token is name 
          tokenPtr = strtok(NULL, " ");   // 2nd token is salary 
 
          salary = atoi(tokenPtr); 
          totalSalary += salary; 
    } 
    // Writing the total into the output file 
    outFile << "The total salary = " << totalSalary; 
 
    // closing the files 
    inFile.close(); 
    outFile.close(); 
}