#include <stdio.h>
int main()
{
    char al;
    printf("Program to check whether a character is a alphabet, digit or special\n\n");
    printf("Enter the character\t");
    scanf("%c", &al);

    if (al >= '0' && al <= '9')      
    {
        printf("The character is a digit");
    }
    else if (al >= 'a' && al <= 'z' || al >= 'A' && al <= 'Z')
    {
        printf("The character is a alphabet");
    }
    else
    {
        printf("The character is a special");
    }
    return 0;
}