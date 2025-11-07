#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Simple XOR-based encryption/decryption
string encryptDecrypt(const string &text, char key = 'K') {
    string result = text;
    for (size_t i = 0; i < text.size(); ++i)
        result[i] = text[i] ^ key;  // XOR each character
    return result;
}

int main() {
    const char fileName[] = "D:\\C++\\Chapter21\\Exercise\\password.txt";
    string password, input;

    cout << "Enter a password to save: ";
    cin >> password;

    // Encrypt password before saving
    string encrypted = encryptDecrypt(password);
    ofstream outFile(fileName);
    if (!outFile) {
        cout << "Error creating file.\n";
        return 1;
    }
    outFile << encrypted;
    outFile.close();
    cout << "Password saved (encrypted) to file.\n";

    // Now verify
    cout << "\nEnter password again to verify: ";
    cin >> input;

    ifstream inFile(fileName);
    if (!inFile) {
        cout << "Error reading file.\n";
        return 1;
    }

    string storedEncrypted;
    getline(inFile, storedEncrypted);
    inFile.close();

    string decrypted = encryptDecrypt(storedEncrypted);

    if (input == decrypted)
        cout << "\n✅ Password is correct!\n";
    else
        cout << "\n❌ Password is incorrect!\n";

    return 0;
}
