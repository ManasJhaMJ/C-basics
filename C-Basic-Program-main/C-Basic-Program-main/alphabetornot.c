#include<stdio.h>
int main()
{
    char alphabet;
    printf("Program to check whether a charcter is alphabet or not\n\n");
    printf("Enter any charcter\t");
    scanf("%c",&alphabet);

    if ((alphabet>='A') && (alphabet<='Z'))
    {
       printf("The character is an alphabet");
    }
    else if ((alphabet>='a') && (alphabet<='z'))
    {
       printf("The character is an alphabet");
    }
    else
    {
       printf("The character is not an alphabet");
    }

    return 0;
    
}
