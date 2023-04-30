#include <stdio.h>
int main()
{
    long long num, n;
    int sum = 0, remainder = 0;
    printf("Program to check Armstrong Number\n\n");
    printf("Enter the number\n");
    scanf("%lld", &num);

    n = num;

    for (; n != 0; n = n / 10)
    {
        remainder = n % 10;
        sum = sum + (remainder * remainder * remainder);
    }
    if (num == sum)
    {
        printf("The Number is an Armstrong Number");
    }
    else
    {
        printf("The Number is not an Armstrong Number");
    }

    return 0;
}