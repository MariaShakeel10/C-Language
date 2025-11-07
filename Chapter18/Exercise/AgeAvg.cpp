#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main() {
    // Hardcoded file names
    const char inputFileName[] = "D:\\C++\\Chapter18Text\\employee2in.txt";
    const char outputFileName[] = "D:\\C++\\Chapter18Text\\employee2out.txt";

    ifstream inFile(inputFileName);
    ofstream outFile(outputFileName);

    if (!inFile) {
        cout << "Error: Cannot open input file " << inputFileName << endl;
        return 1;
    }
    if (!outFile) {
        cout << "Error: Cannot open output file " << outputFileName << endl;
        return 1;
    }

    const int MAX = 100;
    char line[MAX];
    char name[50];
    int salary, age;
    int totalAge = 0, totalSalary = 0, count = 0;

    outFile << "Name\tSalary\tAge\n";

    while (inFile.getline(line, MAX)) {
        if (strlen(line) == 0) continue; // skip empty lines

        char *token = strtok(line, " ");
        if (!token) continue;
        strcpy(name, token); // first token = name

        token = strtok(NULL, " ");
        if (!token) continue;
        salary = atoi(token); // second token = salary

        token = strtok(NULL, " ");
        if (!token) continue;
        age = atoi(token); // third token = age

        salary += 2000;
        totalSalary += salary;
        totalAge += age;
        count++;

        outFile << name << "\t" << salary << "\t" << age << endl;
    }

    if (count > 0) {
        double avgAge = (double)totalAge / count;
        outFile << "\nAverage Age = " << avgAge << endl;
    }

    inFile.close();
    outFile.close();

    cout << "Processing complete! Check " << outputFileName << endl;
    return 0;
}
