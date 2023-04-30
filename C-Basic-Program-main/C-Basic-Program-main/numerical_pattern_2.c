#include<stdio.h>
int main()
{
    int num;
    printf("How many rows do you wan to print\n");
    scanf("%d",&num);
    printf("\n");

    for (int i = 1; i <=num; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    
    return 0;
}