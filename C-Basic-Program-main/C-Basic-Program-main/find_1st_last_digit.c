#include <stdio.h>
int main()
{
    int first, last;
    long long num, n;
    printf("Program to find first and last digit of a number\n\n");
    printf("Enter the number\n");
    scanf("%lld", &num);
    n = num;
    last = n % 10;
    do
    {
        n = n / 10;
    } while (n >= 10);
    first = n;
    printf("The first digit is %d\nThe last digit is %d", first, last);

    return 0;
}