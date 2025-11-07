#include <iostream> 
#include <fstream> 

using namespace std;
 
int main() 
{ 
    ofstream outFile;                                 // Handle for the input file 
    char outputFileName[] = "D:\\C++\\Chapter18Text\\myFileOut.txt";  // The file is created in the current directory 
    char ouputText[100] = "Welcome to VU";  // used to write into the file 
 
    outFile.open(outputFileName, ios::out);      // Opening the file 
 
    // checking that file is successfully opened or not 
    if (!outFile)  
    { 
      cout << "Can't open input file named " << outputFileName << endl; 
           exit(1);  
    }  
    
    // Writing into the file 
    outFile << ouputText; 
    outFile.close(); 
} 