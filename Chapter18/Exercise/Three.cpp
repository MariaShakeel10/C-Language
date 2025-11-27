#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile; // handle for input file
    const char inputFileName[] = "D:\\C++\\Chapter18Text\\text.txt"; // file name
    const int MAX_CHAR_TO_READ = 100;        // max chars per line
    char completeLineText[MAX_CHAR_TO_READ]; // buffer to store each line

    inFile.open(inputFileName); // open file

    // check if file opened successfully
    if (!inFile) {
        cout << "Can't open input file named " << inputFileName << endl;
        return 1; // exit program
    }

    // read and display each line from file
    while (!inFile.eof()) {
        inFile.getline(completeLineText, MAX_CHAR_TO_READ);
        cout << completeLineText << endl;
    }

    inFile.close(); // close file
    return 0;
}


//*************************RESULT********************** 
/* This is a test program 
In this program we learn how to use getLine() function 
This function is faster than using the get() function  */
//Content 
/*This is a test program 
In this program we learn how to use getLine() function 
This function is faster than using the get() function */