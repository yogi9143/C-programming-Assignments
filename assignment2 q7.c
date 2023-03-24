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
