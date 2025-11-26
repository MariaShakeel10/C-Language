#include <iostream>
#include <cmath>

using namespace std;

void getValues(int arr[], int size);

int main() {
    const int sizeArr = 10;
    int num[sizeArr];
   cout << "Enter integers to store in array:" << endl;
    getValues(num, sizeArr);

    cout << "You have entered the following integers:" << endl;
    for (int i = 0; i < sizeArr; i++) {
        cout << "num[" << i << "] = " << num[i] << endl;
    }

    return 0;
}

void getValues(int arr[], int size) {
 
    for (int i = 0; i < size; i++) {
        cout << "Enter value for index " << i << ": ";
        cin >> arr[i];
    }
}

//*************************RESULT********************** 
/* Enter integers to store in array:
Enter value for index 0: 0
Enter value for index 1: 1
Enter value for index 2: 2
Enter value for index 3: 3
Enter value for index 4: 4
Enter value for index 5: 5
Enter value for index 6: 6
Enter value for index 7: 7
Enter value for index 8: 8
Enter value for index 9: 9
You have entered the following integers:
num[0] = 0
num[1] = 1
num[2] = 2
num[3] = 3
num[4] = 4
num[5] = 5
num[6] = 6
num[7] = 7
num[8] = 8
num[9] = 9 */