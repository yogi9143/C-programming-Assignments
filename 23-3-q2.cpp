2.	Write a C program to input a character and check whether the character is 
alphabet or not using Conditional/Ternary operator ?:. How to check 
alphabets using conditional operator in C programming.

PROGRAM :

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') 
        ? printf("It is ALPHABET")
        : printf("It is NOT ALPHABET");
    return 0;
}
OUTPUT : Enter any character: OBITO
It is ALPHABET

