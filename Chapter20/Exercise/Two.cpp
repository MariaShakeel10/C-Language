#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const char fileName[] = "D:\\C++\\Chapter20Text\\test.txt";
    fstream file(fileName, ios::in | ios::out | ios::binary);

    if (!file) {
        cout << "Cannot open file: " << fileName << endl;
        return 1;
    }

    // Move 1000 bytes beyond EOF
    file.seekg(1000, ios::end);
    cout << "Pointer moved 1000 bytes beyond EOF.\n";

    char ch;
    if (!(file >> ch))
        cout << "Reached EOF — cannot read beyond file end.\n";

    // Try moving before beginning of file
    file.clear(); // clear EOF/fail state
    file.seekg(-10, ios::beg); // invalid seek
    if (!file)
        cout << "Cannot move before beginning — failbit set.\n";

    file.close();
    return 0;
}

/*💡 Behavior

Moving past the end doesn’t crash but returns nothing when reading.

Moving before the start sets a failbit.*/