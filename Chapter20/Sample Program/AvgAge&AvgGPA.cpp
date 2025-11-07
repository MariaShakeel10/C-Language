/* This program calculates the average age and average GPA of a class. Also determine 
the grade of the class and the student with max GPA. We will use a student structure and 
manipulate it to get the desired result. */ 
 
#include <iostream> 
using namespace std;
int main() 
{ 
 // Declaration of student structure 
 struct student  
 { 
     char name[30]; 
            char course[15];  
         int  age; 
         float GPA; 
 };  
  
 const int noOfStudents = 10;    // total no of students 
 student students[noOfStudents];            // array of student structure 
 int totalAge, index, averageAge; 
 float totalGPA, maxGPA, averageGPA; 
  
 //  initializing the structure, getting the input from user 
       for ( int i = 0; i < noOfStudents; i++ ) 
       { 
          cout << endl;  
       cout << "Enter data for Student # : " << i + 1 << endl; 
        cout << "Enter the Student's Name : " ; 
         cin >> students[i].name ; 
        cout << "Enter the Student's Course : " ; 
          cin >> students[i].course ; 
          cout << "Enter the Student's Age : " ; 
          cin >> students[i].age ; 
         cout << "Enter the Student's GPA : " ; 
          cin >> students[i].GPA ; 
     } 
     
      maxGPA = 0; 
      // Calculating the total age, total GPA and max GPA 
      for ( int j = 0; j < noOfStudents; j++ ) 
     { 
      totalAge = totalAge + students[j].age ; 
      totalGPA = totalGPA + students[j].GPA ; 
   
  // Determining the max GPA and storing its index 
       if ( students[j].GPA > maxGPA ) 
          { 
           maxGPA = students[j].GPA;  
       index = j; 
          } 
    } 
 // Calculating the average age 
    averageAge = totalAge / noOfStudents ; 
    cout << "\n The average age is : " << averageAge << endl; 
 
 // Calculating the average GPA 
    averageGPA = totalGPA / noOfStudents ; 
    cout << "\n The average GPA is : " << averageGPA << endl; 
    cout << "\n Student with max GPA is : " << students[index].name << endl ; 
 
    // Determining the Grade of the class 
    if (averageGPA > 4) 
    { 
        cout << "\n Wrong grades have been enter" << endl ; 
    } 
    else if ( averageGPA == 4) 
    { 
     cout << "\n The average Grade of the class is : A" << endl; 
    } 
    else if ( averageGPA >= 3) 
    { 
     cout << "\n The average Grade of the class is : B" << endl; 
    } 
    else if ( averageGPA >= 2) 
    { 
     cout << "\n The average Grade of the class is : C" << endl; 
    } 
    else 
    { 
     cout << "\n The average Grade of the class is : F" << endl; 
    } 
}