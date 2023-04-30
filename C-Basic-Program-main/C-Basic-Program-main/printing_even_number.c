#include <stdio.h>
int main()
{
    int i;
    printf("Program to print even number between 1 to 100\n");

    i=1;
    while (i<=100)
    {
        if (i%2==0)
        {
            printf("%d ",i);
        }
        ++i;
        
    }
    
    return 0;
}