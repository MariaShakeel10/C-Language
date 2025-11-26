#include <iostream>
#include <conio.h>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x[] = {1, 3, 4, 5, 2, 8, 9, 6, 7, 10};
    int swaps;

    // Bubble sort algorithm
    for (int i = 0; i < 10 - 1; i++) {  // 9 passes only
        swaps = 0;
        for (int j = 0; j < 10 - i - 1; j++) {  // each time compare until n - i - 1
            if (x[j] > x[j + 1]) {
                swap(&x[j], &x[j + 1]);
                swaps++;
            }
        }

        // Display array after each pass
        cout << "Pass " << i + 1 << ": ";
        for (int k = 0; k < 10; k++) {
            cout << x[k] << " ";
        }
        cout << endl;

        if (swaps == 0)  // if no swaps, array is sorted
            break;
    }

    cout << "\nSorted array: ";
    for (int i = 0; i < 10; i++)
        cout << x[i] << " ";
    cout << endl;
}

//*************************RESULT********************** 
/* Pass 1: 1 3 4 2 5 8 6 7 9 10 
Pass 2: 1 3 2 4 5 6 7 8 9 10 
Pass 3: 1 2 3 4 5 6 7 8 9 10 
Pass 4: 1 2 3 4 5 6 7 8 9 10 

Sorted array: 1 2 3 4 5 6 7 8 9 10 */