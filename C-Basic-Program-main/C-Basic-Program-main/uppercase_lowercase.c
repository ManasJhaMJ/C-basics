#include <stdio.h>
int main()
{
    char al;
    printf("Program to check whether an alphabet is uppercase or lowercase\n\n");
    printf("Enter the alphabet\t");
    scanf("%c", &al);

    if (al >= 'a' && al <= 'z')
    {
        printf("The aplhabet is Lower Case");
    }
    else if (al >= 'A' && al <= 'Z')
    {
        printf("The aplhabet is Upper Case");
    }
    else
    {
        printf("Please Enter Valid Input");
    }
    
    return 0;
}