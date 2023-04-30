#include <stdio.h>
int main()
{
    int num, n = 1;
    printf("How many rows do you wan to print\n");
    scanf("%d", &num);
    printf("\n");

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", n);
            ++n;
        }
        printf("\n");
    }

    return 0;
}