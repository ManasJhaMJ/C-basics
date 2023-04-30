#include<stdio.h>
int main()
{
    int i;
    printf("Program to print odd number between 1 to 100\n");

    i=1;
    do
    {
      if (i%2!=0)
      {
        printf("%d ",i);
      }
       ++i;
      
    } while (i<=100);
    
    return 0;
}