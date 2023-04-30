#include <stdio.h>
int main()
{
    int remainder = 0;
    long long num, reverse = 0;
    printf("Program to print reverse of a number\n\n");
    printf("Enter a number\n");
    scanf("%lld", &num);

    for (; num != 0; num = num / 10)
    {
        remainder = num % 10;
        reverse = (reverse * 10) + remainder;
    }

    printf("The Reverse of a Number is \n%lld", reverse);

    return 0;
}