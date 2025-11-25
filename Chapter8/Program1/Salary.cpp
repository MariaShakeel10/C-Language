#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int salary,deduction=0,Pay;
    cout << "Enter your salary: ";
    cin >> salary;

switch (salary/10000){
    case 0:
    deduction =0;
    Pay= salary;
     cout << "Net Payable (salary - deduction)  =  " ; 
     cout << salary << " - " << deduction << " = " << Pay;   
    break;
    case 1:
    deduction = 1000;
    Pay= salary - deduction;
    cout << "Net Payable (salary - deduction)  =  " ; 
     cout << salary << " - " << deduction << " = " << Pay;  
    break;
    default:
    deduction = salary * 0.07;
    Pay= salary - deduction;
    cout << "Net Payable (salary - deduction)  =  " ; 
     cout << salary << " - " << deduction << " = " << Pay;  
    break;
}


    return 0;

}

//*************************RESULT********************** 
/* Enter your salary: 29000
Net Payable (salary - deduction)  =  29000 - 2030 = 26970 */