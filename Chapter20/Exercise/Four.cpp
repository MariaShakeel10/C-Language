#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const char fileName[] = "D:\\C++\\Chapter20Text\\numbers.bin";
    ofstream outFile(fileName, ios::binary);

    if (!outFile) {
        cout << "Error creating file: " << fileName << endl;
        return 1;
    }

    for (int i = 0; i < 100; ++i)
        outFile.write(reinterpret_cast<const char*>(&i), sizeof(i));

    outFile.close();
    cout << "100 integers written to " << fileName << " (binary format)\n";
    cout << "Open it in Notepad — it will look like symbols!\n";

    return 0;
}
//create a binary file and write 100 integers to it
