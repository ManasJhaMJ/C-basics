#include <stdio.h>
int main()
{
    char alph;
    printf("Program to check whethet a charcter is a vowel or consonant or not\n\n");
    printf("Enter the alphabet\t");
    scanf("%c", &alph);

    if ((alph >= 'A' && alph <= 'Z') || (alph >= 'a' && alph <= 'z'))
    {
        if (alph == 'a' || alph == 'e' || alph == 'i' || alph == 'o' || alph == 'u' || alph == 'A' || alph == 'E' || alph == 'I' || alph == 'O' || alph == 'U')
        {
            printf("The alphabet is a vowel");
        }
        else
        {
            printf("The alphabet is a consonant");
        }
    }
    else
    {
        printf("Enter valid alphabet");
    }

    return 0;
}