# include<iostream> 
# include<string.h> 

using namespace std; 

int main() 
{ 
char s1[ 20 ] = "Welcome to "; 
char s2[] = "Virtual University "; 
char s3[ 40 ] = ""; 
cout<< "s1 =  " << s1 << endl << "s2 =  " << s2 << endl << "s3 = " << s3 << endl; 
cout<< "strcat( s1, s2 ) =   "<< strcat( s1, s2 ); 
cout << "strncat( s3, s1, 6 ) =   " << strncat( s3, s1, 6 ); 
} 

//*************************RESULT********************** 
/*s1 =  Welcome to 
s2 =  Virtual University 
s3 = 
strcat( s1, s2 ) =   Welcome to Virtual University strncat( s3, s1, 6 ) =   Welcom */