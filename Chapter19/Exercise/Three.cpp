#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const char inputFileName[] = "D:\\C++\\Chapter19Text\\original.txt";
    const char outputFileName[] =   "D:\\C++\\Chapter19Text\\reversed.txt";

    ifstream inFile(inputFileName, ios::binary);
    ofstream outFile(outputFileName, ios::binary);

    if (!inFile || !outFile) {
        cout << "Error opening files.\n";
        return 1;
    }

    // Find size of file
    inFile.seekg(0, ios::end);
    long size = inFile.tellg();

    // Copy in reverse
    for (long i = size - 1; i >= 0; --i) {
        inFile.seekg(i, ios::beg);
        char ch;
        inFile.get(ch);
        outFile.put(ch);
    }

    cout << "File reversed successfully! (" << outputFileName << ")\n";
    inFile.close();
    outFile.close();
    return 0;
}

//reverse the text contents of a file by reading it from end to beginning and writing to a new file

//*************************RESULT********************** 
/* uoy era woh olleH */
//Content 
/*Hello how are you*/