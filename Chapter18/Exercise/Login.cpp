#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
    // Hardcoded file names
    const char inputFileName[] = "D:\\C++\\Chapter18Text\\name.txt";
    const char outputFileName[] = "D:\\C++\\Chapter18Text\\logins.txt";

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
    char first[30], middle[5], last[30];

    while (inFile.getline(line, MAX)) {
        if (strlen(line) == 0) continue;

        char *token = strtok(line, " ");
        if (!token) continue;
        strcpy(first, token); // first name

        token = strtok(NULL, " ");
        if (!token) continue;
        strcpy(middle, token); // middle initial

        token = strtok(NULL, " ");
        if (!token) continue;
        strcpy(last, token); // last name

        // Create login name: middle + last
        char login[50];
        strcpy(login, middle);
        strcat(login, last);

        // Create password: first 4 letters of first name
        char password[5] = "";
        strncpy(password, first, 4);
        password[4] = '\0';

        outFile << first << " " << login << " " << password << endl;
    }

    inFile.close();
    outFile.close();

    cout << "Processing complete! Check " << outputFileName << endl;
    return 0;
}

//*************************RESULT********************** 
/* Syed NAli Syed
Muhammad AButt Muha
Faisal AMalik Fais
Muhammad AJamil Muha
 */
//Content 
/*Syed N Ali
Muhammad A Butt
Faisal A Malik
Muhammad A Jamil
*/