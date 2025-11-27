#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char name[50];      // to store employee name
    int salary;         // to store employee salary

    ifstream inFile("D:\\C++\\Chapter18Text\\employeein.txt");   // open input file
    ofstream outFile("D:\\C++\\Chapter18Text\\employeeout.txt"); // create output file

    // check if input file opened successfully
    if (!inFile) {
        cout << "Error: Cannot open input file 'employeein.txt'!" << endl;
        return 1;
    }

    // write header to output file
    outFile << "Name\tSalary\n";

    // read name and salary, then process each record
    while (inFile >> name >> salary) {
        salary += 2000; // add 2000 to each salary
        outFile << name << "\t" << salary << endl;
    }

    // close both files
    inFile.close();
    outFile.close();

    cout << "Processing complete! Check 'employeeout.txt' for results.\n";

    return 0;
}

//*************************RESULT********************** 
/* Name	Salary
Aamir	14000
Amara	17000
Adnan	15000
Afzal	13500
 */
//Content 
/*Aamir 12000 
Amara 15000 
Adnan 13000 
Afzal 11500 */
