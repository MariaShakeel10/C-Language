// #include <iostream>
// #include <stdlib.h> //free code
// using namespace std;

// class A{
//     private:
//     int number;
//     public: 
//     A (int number){
//         this-> number = number;
//     }// Parameterized constructor

// //void* because new returns a void pointer
//     void* operator new(size_t size){
//         void* ptr = :: operator new(size); // global new
//         cout << "Overloaded new operator called. Size: " << size << " bytes" << endl;
//         return ptr;
//     }

//     void operator delete(void* ptr){
//         cout << "Overloaded delete operator called." << endl;
//        // free(ptr); // free memory
//          // Call global delete (CORRECT pair)
//         ::operator delete(ptr);
//     }

//     void display(){
//         cout << "Number: " << number << endl;
//     } // Display function
// };

// int main (){
// A *ptr;
// ptr = new A(42); // dynamic memory allocation
// ptr -> display();
// delete ptr;

//     return 0;
// }

// /*
// // not working
// */