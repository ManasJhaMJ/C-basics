#include<stdio.h>
int main()
{
    int num;
    printf("How many rows do you wan to print\n");
    scanf("%d",&num);

    for (int i = 1; i <=num; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}