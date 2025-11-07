#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main() {
    ifstream inFile("D:\\C++\\Chapter18Text\\employeein.txt");   // open input file
    ofstream outFile("D:\\C++\\Chapter18Text\\employeeout.txt");  // open output file

    if (!inFile) {
        cout << "Error: Cannot open employeein.txt!" << endl;
        return 1;
    }

    char line[100];     // store each line (name + salary)
    char name[50];
    int salary;

    outFile << "Name\tSalary\n";

    while (inFile.getline(line, 100)) {   // read a full line (including spaces)
        // Split the line into name and salary using sscanf
        if (sscanf(line, "%s %d", name, &salary) == 2) {
            salary += 2000;
            outFile << name << "\t" << salary << endl;
            cout << name << "\t" << salary << endl;
        }
    }

    inFile.close();
    outFile.close();

    cout << "\nDone! Check employeeout.txt\n";
    return 0;
}
