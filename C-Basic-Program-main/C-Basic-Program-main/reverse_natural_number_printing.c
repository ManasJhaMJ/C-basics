#include <stdio.h>
int main()
{
    int num, a = 0;
    printf("Program to print natural number in reverse\n\n");
    printf("Enter the number upto which you want to print natural number\n");
    scanf("%d", &num);

    a = num;
    while (num > 0)
    {
        printf("%d ", a);
        --a;
        --num;
    }

    return 0;
}