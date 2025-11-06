#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>   // for atoi()
using namespace std;

int main(int argc, char *argv[]) {
    int n = 10; // default number of lines

    // Check for optional -n argument
    if (argc == 2 && argv[1][0] == '-') {
        n = atoi(argv[1] + 1); // convert after '-'
        if (n <= 0) {
            cerr << "Invalid number of lines.\n";
            return 1;
        }
    }

    vector<string> lines;  // dynamic storage of lines
    string line;

    // Read all input lines (from keyboard or file redirection)
    while (getline(cin, line)) {
        lines.push_back(line);
    }

    // Determine where to start printing
    int start = (lines.size() > n) ? lines.size() - n : 0;

    // Print the last n lines
    for (size_t i = start; i < lines.size(); ++i) {
        cout << lines[i] << endl;
    }

    return 0;
}
