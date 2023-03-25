1.	Write a C program to input three numbers from user and find maximum between three numbers
using conditional/ternary operator ?:. How to find maximum between three numbers using 
conditional operator.

PROGRAM :

# include <stdio.h>
void main()
{
    int a, b, c, big ;
    printf("Enter three numbers : ") ;
    scanf("%d %d %d", &a, &b, &c) ;
    big = a > b ? (a > c ? a : c) : (b > c ? b : c) ;
    printf("\nThe biggest number is : %d", big) ;
}
OUTPUT : Enter three numbers : 2
6
3
The biggest number is : 6
