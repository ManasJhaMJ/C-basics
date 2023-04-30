#include <stdio.h>
int main()
{
    float num;
    printf("Program to check a number is positve ,negative or zero\n\n");
    printf("Enter the number\n");
    scanf("%f", &num);

    switch (num > 0)
    {
    case 1:
        printf("The number is positive");
        break;
    case 0:
        switch (num<0)
        {
        case 1:
        printf("The number is negative");
            break;

       case 0:
       printf("The number is zero");
       break;
        }
        break;
    
    default:
    printf("Enter valid input");
    break;
    }
    return 0;
}