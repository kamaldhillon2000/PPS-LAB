// strrchr() 
  
#include <stdio.h> 
#include <string.h> 
  
// Driver function 
int main() 
{ 
  
    // initializing variables 
    char st[] = "GeeksforGeeks"; 
    char ch = 'e'; 
    char* val; 
  
    // Use of strrchr() 
    // returns "ks" 
    val = strrchr(st, ch); 
  
    printf("String after last %c is :  %s \n", 
           ch, val); 
  
    char ch2 = 'm'; 
  
    // Use of strrchr() 
    // returns null 
    // test for null 
    val = strrchr(st, ch2); 
  
    printf("String after last %c is :  %s ", 
           ch2, val); 
  
    return(0);   }