#include <stdio.h>
int main()
{
    int sum = 0, remainder = 0;
    long long num, n;
    printf("Program to sum the digit of a number\n\n");
    printf("Enter the number\n");
    scanf("%lld", &num);

    n = num;
    do
    {
        remainder = n % 10;
        sum = sum + remainder;
        n = n / 10;

    } while (n != 0);

    printf("The sum of digit of a number is %d", sum);

    return 0;
}