#include <stdio.h>
int main()
{
    long long n;
    int count = 0;
    printf("Program to count no. of digit in a number\n\n");
    printf("Enter the number\n");
    scanf("%lld", &n);

    do
    {
        n /= 10;
        count++;
    } while (n != 0);

    printf("The Number of digit = %d", count);

    return 0;
}