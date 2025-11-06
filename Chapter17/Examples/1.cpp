# include<iostream> 
# include<string.h> 

using namespace std;
 
int main() 
{ 
char string1[15]="String1"; 
char string2[15]="String2"; 
char string3[15];
 
cout<<"Before the copy :"<<endl; 
cout<<"String 1:\t"<<string1<<endl; 
cout<<"String 2:\t"<<string2<<endl; 
 
 //copy the whole string 
strcpy(string2,string1); //copy string1 into string2  

cout<<"After the copy :"<<endl; 
cout<<"String 1:\t"<<string1<<endl; 
cout<<"String 2:\t"<<string2<<endl; 
  
 //copy three characters of the string1 into string3 
 strncpy(string3, string1, 3); 
 cout << "strncpy (string3, string1, 3)  =   " << string3 ; 
} 