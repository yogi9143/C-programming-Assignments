3.	Write a C program to find sum of all odd numbers from 1 to n using for loop. How to find
sum of all odd numbers in a given range in C programming. Logic to find sum of odd numbers
in a given range using loop in C programming.

PROGRAM :

#include <stdio.h>
int main()
{
    int i, start, end, sum=0;
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);
    if(start % 2 == 0)
    {
        start++;
    }
    for(i=start; i<=end; i+=2)
    {
        sum += i;
    }
    printf("Sum of odd numbers between %d to %d = %d", start, end, sum);
    return 0;
}

OUTPUT :  Enter lower limit: 1
Enter upper limit: 100
Sum of odd numbers between 1 to 100 = 2500

