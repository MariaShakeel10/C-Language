/* This program reads from a file, populates a structure,
   and writes the structure into another file */

#include <iostream>
#include <fstream>
#include <cstdlib>   // for atoi() and atof()
using namespace std;

// student structure
struct Student {
    char name[30];
    char course[15];
    int age;
    float GPA;
};

// Function declarations
void openFile(ifstream &inFile, ofstream &outFile);
Student getData(ifstream &inFile);
void writeData(ofstream &outFile, Student s);

int main() {
    const int noOfStudents = 3; // Total number of students
    ifstream inFile;
    ofstream outFile;

    openFile(inFile, outFile); // Open files

    Student students[noOfStudents];

    // Read data from file and populate array
    for (int i = 0; i < noOfStudents; i++) {
        if (!inFile.eof()) {
            students[i] = getData(inFile);
        } else {
            break;
        }
    }

    // Write structures to output file
    for (int i = 0; i < noOfStudents; i++) {
        writeData(outFile, students[i]);
    }

    // Close files
    inFile.close();
    outFile.close();

    cout << "Data copied successfully from input to output file.\n";
    return 0;
}

/* Opens the input and output files */
void openFile(ifstream &inFile, ofstream &outFile) {
    // Hardcoded file paths (change to your folder path)
    inFile.open("D:\\C++\\Chapter20\\Sample Program\\SAMPLE.txt", ios::in);
    outFile.open("D:\\C++\\Chapter20\\Sample Program\\SAMPLEOUT.txt", ios::out | ios::app);

    if (!inFile || !outFile) {
        cout << "Error opening one of the files!" << endl;
        exit(1);
    }
}

/* Reads student data from the input file */
Student getData(ifstream &inFile) {
    Student temp;
    char tempAge[10];
    char tempGPA[10];

    // Reading each line
    inFile.getline(temp.name, 30);
    inFile.getline(temp.course, 15);
    inFile.getline(tempAge, 10);
    temp.age = atoi(tempAge);
    inFile.getline(tempGPA, 10);
    temp.GPA = atof(tempGPA);

    return temp;
}

/* Writes student data to the output file */
void writeData(ofstream &outFile, Student s) {
    outFile << s.name << endl;
    outFile << s.course << endl;
    outFile << s.age << endl;
    outFile << s.GPA << endl;
}

//*************************RESULT********************** 
/* nasir 
CS201 
23 
3 
Jamil 
CS201 
31 
4 
Faisal 
CS201 
25 
3.5 */
//Content 
/*nasir 
CS201 
23 
3 
Jamil 
CS201 
31 
4 
Faisal 
CS201 
25 
3.5*/