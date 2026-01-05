/* Date class containing overloaded insertion and extraction operators. */ 
# include <iostream>
using namespace std; 
 
class Date 
{  private: 
     int   month, day, year;  
     public: 
     Date( )  
     { 
                cout << "\n Parameterless constructor called ..."; 
                month   =   day   =   year   =   0; 
      } 
         
     ~Date ( ) 
     { 
//              cout << "\n Destructor called ..."; 
      } 
      
    // Methods, not directly related to the example have been taken out from the class 
 
       friend  ostream &   operator  << ( ostream &  os, Date  d ); 
       friend  istream &   operator  >> ( istream &  is, Date & d ); 
               
                
}; 
 
ostream &   operator  << ( ostream &  os, Date  d ) 
{ 
   os  <<  d.day  <<  "."  <<  d.month  <<  "."  <<  d.year;  // access private data of 
                                                                                               //Date being a friend  
        return   os; 
}; 
 
istream &   operator  >> ( istream &  is, Date&  d ) 
{ 
   cout   <<   "\n\n Enter day   of the date: "; 
   cin   >>   d.day; 
   cout   <<   " Enter month of the date: "; 
   cin >> d.month; 
   cout   <<   " Enter year  of the date: "; 
   cin   >>   d.year; 
    
   return   is; 
}; 
 
main(void) 
{ 
 
    Date date1, date2; 
    cout <<  "\n\n Enter two dates"; 
    cin  >> date1 >> date2; 
    cout   <<   "\n Entered date1 is: "   <<   date1 << "\n Entered date2 is: " << date2; 
 
} 


//***********************RESULT************************
/*Parameterless constructor called ...
 Parameterless constructor called ...

 Enter two dates

 Enter day   of the date: 19
 Enter month of the date: 12
 Enter year  of the date: 2025


 Enter day   of the date: 12
 Enter month of the date: 10
 Enter year  of the date: 2026

 Entered date1 is: 19.12.2025
 Entered date2 is: 12.10.2026*/