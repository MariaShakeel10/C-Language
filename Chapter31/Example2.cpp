#include   <iostream> 
#include   <cstring> 
using   namespace   std ;
 
class   String 
{ 
    private : 
 
        char    string [ 30 ] ;   // Array to store string 
 
    public : 
 
        /* Parameterless Constructor */ 
        String ( ) 
        { 
               strcpy ( string , "" ) ;  
        } 
 
        /* Getter function of string */ 
        void   getString ( ) 
        { 
             cout   <<   "Enter the String: " ; 
             cin   >>   string ; 
        } 
 
        /* Function to display string */ 
        void   displayString ( ) 
        { 
            cout   <<   "The String is : "   <<   string   <<   endl ; 
        } 
 
        // Declaration (prototype) of overloaded sum operator 
 
        String   operator  + ( String & s ) ; 
}; 
 
 
String   String  ::  operator + ( String &s ) 
{  
    String   temp ; 
    strcpy ( temp.string , "" ) ; 
    strcat ( temp.string , string ); 
    strcat ( temp.string , s.string ); 
    return   temp; 
} 
 
int main ( ) 
{ 
      String   string1 , string2 ;  // Declared two String objects 
      string1.getString ( ) ;  // Get string for string1 object 
      string2.getString ( ) ;  // Get string for string2 object      
      String hold  =  string1 + string2 ; // Concatenate string1 and string2 and store the 
     // result in hold object 
      hold.displayString ( ) ;  // Display the string 
} 

//***********************RESULT************************
/*Enter the String: One String
Enter the String: The String is : OneString*/