#include <stdio.h>
int main()
{
    int sum = 0, last, first;
    long long num,n;
    printf("Program to sum first and last digit of a number\n\n");
    printf("Enter the number\n");
    scanf("%lld", &num);

    n = num;

    last = n % 10;
    do
    {
        n = n / 10;
    } while (n >= 10);

    first = n;
    sum = first + last;
    
    printf("The sum of first and last digit of a number is %d", sum);

    return 0;
}