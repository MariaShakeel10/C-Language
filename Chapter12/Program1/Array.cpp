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
        cin >> arr[i];
    }
}
