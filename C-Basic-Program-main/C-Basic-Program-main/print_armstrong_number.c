#include <stdio.h>
int main()
{
    int num, n, remainder = 0, sum = 0;
    printf("Program to print armstrong number in a given range\n\n");
    printf("Enter the number\n");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        n = i;
        sum = 0;
        while (n != 0)
        {
            remainder = n % 10;
            n /= 10;
            sum = sum + (remainder * remainder * remainder);
        }
        if (sum == i)
        {
            printf("%d ", sum);
        }
    }

    return 0;
}