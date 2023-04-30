#include <stdio.h>
int main()
{
    int num;
    printf("Program To check number is divisible by 5 and 11 or not\n\n");
    printf("Enter the number to check divisibility\n");
    scanf("%d", &num);

    if ((num % 5 == 0) && (num % 11 == 0))
    {
        printf("The number is Divisible by 5 and 11\n");
    }
    else if ((num % 5 != 0) && (num % 11 != 0))
    {
        printf("The number is not divisible by 5 and 11\n");
    }
    else
    {
        printf("Enter valid Number\n");
    }
    return 0;
}