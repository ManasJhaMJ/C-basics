#include <stdio.h>
int main()
{
    long long num,n, reverse = 0;
    int remainder = 0;

    printf("Program to check whether a number is palindrome or not\n\n");
    printf("Enter the number\n");
    scanf("%lld", &num);

    n=num;
    for (; n != 0; n = n / 10)
    {
        remainder = n % 10;
        reverse = (reverse * 10) + remainder;
    }

    if (num == reverse)
    {
        printf("The number is Palindrome Number");
    }
    else
    {
        printf("The number is not Palindrome Number");
    }

    return 0;
}