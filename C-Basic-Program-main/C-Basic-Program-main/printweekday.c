#include <stdio.h>
int main()
{
    int num;
    printf("Program to input Week number and print Week day\n\n");
    printf("Enter the week number\t");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Week day is Monday");
        break;
    case 2:
        printf("Week day is Tuesday");
        break;
    case 3:
        printf("Week day is Wednesday");
        break;
    case 4:
        printf("Week day is Thursday");
        break;
    case 5:
        printf("Week day is Friday");
        break;
    case 6:
        printf("Week day is Saturday");
        break;
    case 7:
        printf("Week day is Sunday");
        break;
    default:
    printf("Enter week number between 1 to 7");
    break;
    }
    return 0;
}