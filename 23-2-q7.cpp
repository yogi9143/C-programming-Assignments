7.	What is the code in a while loop that returns the output of the given code?

#include <stdio.h>
void printSquares(int n)
{
    int sq = 1, i = 1;
    if (n < 1)
    {
        printf("Please enter number greater than 0!");
    }
    do
    {
        sq = i * i;
        printf("Square of %d = %d\n", i, sq);
        i++;
    } while (i <= n);
}
int main()
{
    int num;
    printf(" Enter the number:");
    scanf("%d", &num);
    printSquares(num);
    return 0;
}

OUTPUT  : Enter the number:10
Square of 1 = 1
Square of 2 = 4
Square of 3 = 9
Square of 4 = 16
Square of 5 = 25
Square of 6 = 36
Square of 7 = 49
Square of 8 = 64
Square of 9 = 81
Square of 10 = 100
