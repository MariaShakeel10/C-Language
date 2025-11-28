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


//*************************RESULT********************** 
/* Enter data for Student # : 1
Enter the Student's Name : Ma
Enter the Student's Course : CS201
Enter the Student's Age : 12
Enter the Student's GPA : 3

Enter data for Student # : 2
Enter the Student's Name : Na
Enter the Student's Course : CS201 
Enter the Student's Age : 18
Enter the Student's GPA : 2.7

Enter data for Student # : 3
Enter the Student's Name : KI
Enter the Student's Course : CS201
Enter the Student's GPA : 3.7

Enter data for Student # : 4
Enter the Student's Name :

PS D:\C++>  & 'c:\Users\Asc\.vscode\extensions\ms-vscode.cpptools-1.28.3-win32-x64\debugAdapters\bin\WindowsDebugLauncher.exe' '--stdin=Microsoft-MIEngine-In-knfjc2nl.21n' '--stdout=Microsoft-MIEngine-Out-ccsjifyl.jze' '--stderr=Microsoft-MIEngine-Error-eua5yk2g.2vc' '--pid=Microsoft-MIEngine-Pid-dqrwah1u.s3d' '--dbgExe=C:\msys64\ucrt64\bin\gdb.exe' '--interpreter=mi' 
oft-MIEngine-Error-eua5yk2g.2vc' '--pid=Microsoft-MIEngine-Pid-dqrwah1u.s3d' '--dbgExe=C:\x5cmsys64\x5cucrt64\x5cbin\x5cgdb.exe' '--interpreter=mi' ;6cd1c69f-4772-4118-81f4-cfcddd786d79
       Enter data for Student # : 1
Enter the Student's Name : hh
Enter the Student's Course : cs201
Enter the Student's Age : 23
Enter the Student's GPA : 3.4

Enter data for Student # : 2
Enter the Student's Name : dgf
Enter the Student's Course : cs201
Enter the Student's Age : 19
Enter the Student's GPA : 4

Enter data for Student # : 3
Enter the Student's Name : hurf
Enter the Student's Course : cs201
Enter the Student's Age : 20
Enter the Student's GPA : 3.5

Enter data for Student # : 4
Enter the Student's Name : dfgrt
Enter the Student's Course : cs201
Enter the Student's Age : 26
Enter the Student's GPA : 3.9

Enter data for Student # : 5
Enter the Student's Name : dfghryhr
Enter the Student's Course : cs201
Enter the Student's Age : 10
Enter the Student's GPA : 3.6

Enter data for Student # : 6
Enter the Student's Name : jdfh
Enter the Student's Course : njngrng
Enter the Student's Age : 30
Enter the Student's GPA : 3

Enter data for Student # : 7
Enter the Student's Name : uegier
Enter the Student's Course : jhbgrejhb
Enter the Student's Age : 27
Enter the Student's GPA : 2.4

Enter data for Student # : 8
Enter the Student's Name : hiwefiuag
Enter the Student's Course : ghg
Enter the Student's Age : 16
Enter the Student's GPA : 1.8

Enter data for Student # : 9
Enter the Student's Name : hrkhg
Enter the Student's Course : hkhweo
Enter the Student's Age : 19
Enter the Student's GPA : 1.9

Enter data for Student # : 10
Enter the Student's Name : khgikht
Enter the Student's Course : jkerhi
Enter the Student's Age : 18
Enter the Student's GPA : 4

 The average age is : 20

 The average GPA is : 3.15

 Student with max GPA is : dgf

 The average Grade of the class is : B */