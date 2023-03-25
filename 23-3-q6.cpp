6.	Find Error/Output in follwing code:

#include <stdio.h>  
int main()  
{ 
 int a = 10; 
 if ((fork () == 0))  
 a++;  
 printf ("%d\n", a); 
 return 0; 
} 
OUTPUT  :  10

