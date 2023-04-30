#include<stdio.h>
int main()
{
    int num,a=1;
    printf("Program to print natural number\n\n");
    printf("Enter the number upto which you want to print natural number\n");
    scanf("%d",&num);

    while (num>0)
    {
        printf("%d ",a);
        ++a;
        --num;
    }
    
    return 0;
}