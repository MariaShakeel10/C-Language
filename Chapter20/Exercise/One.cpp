#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    const char file1Name[] = "D:\\C++\\Chapter20Text\\file1.txt";   // first file
    const char file2Name[] = "D:\\C++\\Chapter20Text\\file2.txt";   // second file
    const char outputFileName[] = "D:\\C++\\Chapter20Text\\combined.txt"; // result file

    ifstream file1(file1Name);
    ifstream file2(file2Name);
    ofstream outFile(outputFileName, ios::out);

    if (!file1 || !file2 || !outFile) {
        cout << "Error opening one of the files!\n";
        return 1;
    }

    string line;

    // Copy contents of first file
    while (getline(file1, line))
        outFile << line << endl;

    // Copy contents of second file
    while (getline(file2, line))
        outFile << line << endl;

    cout << "Files concatenated into " << outputFileName << endl;

    file1.close();
    file2.close();
    outFile.close();
    return 0;
}

// combining files 