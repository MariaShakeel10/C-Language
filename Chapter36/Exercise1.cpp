#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int matrix[3][3] =
    {
        { 1, 20, 300 },
        { 4000, 50, 6 },
        { 7, 800, 90 }
    };

    cout << "Formatted Matrix:\n\n";

    for (int i = 0; i < 3; i++)
    {
        cout << "| ";
        for (int j = 0; j < 3; j++)
        {
            cout << setw(6) << matrix[i][j] << " ";
        }
        cout << "|\n";
    }

    return 0;
}
//***********************RESULT************************
/*|      1     20    300 |
|   4000     50      6 |
|      7    800     90 |*/


//Alternative Solution

/*

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int matrix[3][3] =
    {
        { 12, 3, 456 },
        { 78, 910, 11 },
        { 1, 22, 333 }
    };

    char leftBracket  = char(218);
    char rightBracket = char(191);
    char vertical     = char(179);

    cout << "\nFormatted Matrix:\n\n";

    for (int i = 0; i < 3; i++)
    {
        cout << leftBracket << " ";
        for (int j = 0; j < 3; j++)
        {
            cout << setw(6) << matrix[i][j] << " ";
        }
        cout << rightBracket << endl;
    }

    return 0;
}
*/