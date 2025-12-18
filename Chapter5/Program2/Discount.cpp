#include <iostream>
#include <cmath>

using namespace std;

main (){
    double amount ,discount, TotalPayment;
    cout << "Enter the amount:" << endl;
    cin >> amount;
    if (amount > 5000){
        discount = amount * (10.0/100);
        TotalPayment = amount - discount;
        cout << "Discount is: " << discount << endl;
        cout << "Total payment after discount is: " << TotalPayment << endl;

    }
    else{
        discount = amount * (15.0/100);
        TotalPayment = amount - discount;
        cout << "Discount is: " << discount << endl;
        cout << "Total payment after discount is: " << TotalPayment << endl;
    }
    return 0;
}

//*************************RESULT********************** 
/* Enter the amount:
3000
Discount is: 450
Total payment after discount is: 2550 */