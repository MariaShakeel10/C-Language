#include <iostream>
#include <cmath>

using namespace std;

void Finding_Type (int id);
int main (){
   const string student_name = "Maria Shakeel";
   const int student_id = 250202166;
   const char b = 'B';
   const char c = 'C';

//    diplaying details
cout << b << c << student_id << " " << "belongs to" << " " << student_name << endl;

// passing parameters to function
   Finding_Type(student_id);

    return 0;
}


void Finding_Type (int id){
    int prime_count = 0;
    int even_count = 0;
    int odd_count = 0;
    int zero_count = 0;
int temp = id;
while (temp > 0)
{
    int digit = temp % 10;
    temp = temp / 10;
    
    if (digit == 0){
        cout << digit << " " << "zero is found in id"<<endl;
        zero_count++;
    }
    else if (digit == 2 || digit == 3 || digit == 5 || digit == 7){
        cout << digit << " " << "is a prime number"<<endl;
        prime_count++;
    }else if (digit % 2 == 0){
        cout << digit<< " " << "is an even number"<<endl;
        even_count++;
    }
    else{
        cout << digit << " " << "is an odd number"<<endl;
        odd_count++;
    }
}
    cout << endl;
    cout << "Total Counts:" << endl;
    cout << "Zeros:" << zero_count << endl;
    cout << "Prime numbers:"<< prime_count << endl;
    cout << "Even numbers:" << even_count << endl;
    cout << "Odd numbers:"<< odd_count << endl;
};