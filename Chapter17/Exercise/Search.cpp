#include <iostream>
#include <cstring>   // for strchr, strstr, etc.
using namespace std;

int main() {
    char text[200];
    char word[50];
    char chars[10];

    cout << "Enter a line of text: ";
    cin.getline(text, 200);

    cout << "\nEnter a character to search: ";
    cin >> chars;

    // 1. strchr – find first occurrence of a character
    char *pos = strchr(text, chars[0]);
    if (pos)
        cout << "First occurrence of '" << chars[0] << "' is at position: "
             << (pos - text) << endl;
    else
        cout << "Character not found.\n";

    // 2. strrchr – find last occurrence of a character
    char *lastPos = strrchr(text, chars[0]);
    if (lastPos)
        cout << "Last occurrence of '" << chars[0] << "' is at position: "
             << (lastPos - text) << endl;

    cin.ignore(); // clear leftover newline
    cout << "\nEnter a word to search inside text: ";
    cin.getline(word, 50);

    // 3. strstr – find a substring (word)
    char *found = strstr(text, word);
    if (found)
        cout << "The word \"" << word << "\" found at position: " 
             << (found - text) << endl;
    else
        cout << "The word not found.\n";

    // 4. strtok – split string into words
    cout << "\nWords in your text:\n";
    char temp[200];
    strcpy(temp, text); // because strtok modifies string
    char *token = strtok(temp, " ,.-");
    while (token != NULL) {
        cout << token << endl;
        token = strtok(NULL, " ,.-");
    }

    return 0;
}


//*************************RESULT********************** 
/* Enter a line of text: Hi how are you

Enter a character to search: h
First occurrence of 'h' is at position: 3
Last occurrence of 'h' is at position: 3 

Enter a word to search inside text: are
The word "are" found at position: 7

Words in your text:
Hi
how
are
you */