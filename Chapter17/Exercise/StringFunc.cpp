#include <iostream>
#include <cstring>   // for string functions
using namespace std;

int main() {
    char str1[100], str2[100], str3[200];

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    // 1. Copy string
    strcpy(str3, str1);
    cout << "\nAfter strcpy (copy str1 → str3): " << str3 << endl;

    // 2. Copy only first n characters
    strncpy(str3, str2, 3);
    str3[3] = '\0'; // make sure it ends properly
    cout << "After strncpy (first 3 chars of str2 → str3): " << str3 << endl;

    // 3. Concatenate (join) strings
    strcpy(str3, str1);
    strcat(str3, str2);
    cout << "After strcat (str1 + str2): " << str3 << endl;

    // 4. Concatenate only n characters
    strcpy(str3, str1);
    strncat(str3, str2, 4);
    cout << "After strncat (first 4 chars of str2): " << str3 << endl;

    // 5. Compare strings
    int cmp = strcmp(str1, str2);
    if (cmp == 0)
        cout << "Strings are equal.\n";
    else if (cmp < 0)
        cout << "String 1 is smaller than String 2.\n";
    else
        cout << "String 1 is greater than String 2.\n";

    // 6. Compare first n characters
    int cmp2 = strncmp(str1, str2, 3);
    if (cmp2 == 0)
        cout << "First 3 characters are equal.\n";
    else
        cout << "First 3 characters are NOT equal.\n";

    // 7. Find string length
    cout << "Length of first string: " << strlen(str1) << endl;
    cout << "Length of second string: " << strlen(str2) << endl;

    return 0;
}
