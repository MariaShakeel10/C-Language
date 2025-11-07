//This program demonstrate the encryption by using ^ operator 
 
# include<iostream> 
using namespace std ;
int main () 
{ 
    char password[10] ; 
    char *passptr ; 
    cout << "Please enter a password(less than 10 character): " ; 
    cin >> password ; 
    passptr = password ; 
    //now encrypting the password by using ^ with 3 
    while (*passptr != '\0' ) 
    { 
       *passptr =  (*passptr ^ 3); 
        ++passptr ; 
    } 
    cout << "The encrypted password is:  " << password << endl; 
 
    //now decrypting the encrypted password by using ^ with 3 
 
    passptr = password ; 
    while (*passptr != '\0' ) 
    { 
       *passptr =  (*passptr ^ 3); 
        ++passptr ; 
    } 
     cout << "The decrypted password is:  " << password << endl; 
} 