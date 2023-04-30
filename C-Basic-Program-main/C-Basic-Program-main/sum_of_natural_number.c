#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Program to print sumof natural number\n\n");
    printf("Enter the number upto which you want to print sum\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);

    return 0;
}