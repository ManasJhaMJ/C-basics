#include <stdio.h>
int main()
{
    int base, power, num = 1;
    printf("Program to find power of a number\n\n");
    printf("Enter the Base of number\n");
    scanf("%d", &base);
    printf("Enter the power on number\n");
    scanf("%d", &power);

    for (int i = 1; i <= power; i++)
    {
        num = num * base;
    }
    printf("The number is %d", num);

    return 0;
}