#include <stdio.h>
int main()
{
    int num;
    printf("Progarm to input month number and print number of days in that month\n\n");
    printf("Enter the Month Number\t");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("The number of days is 31");
        break;
    case 2:
        printf("The number of days in month is 28 or 29");
        break;
    case 3:
        printf("The number of days is 31");
        break;
    case 4:
        printf("The number of days in month is 30");
        break;
    case 5:
        printf("The number of days is 31");
        break;
    case 6:
        printf("The number of days is 30");
        break;
    case 7:
        printf("The number of days is 31");
        break;
    case 8:
        printf("The number of days is 31");
        break;
    case 9:
        printf("The number of days is 30");
        break;
    case 10:
        printf("The number of days is 31");
        break;
    case 11:
        printf("The number of days is 30");
        break;
    case 12:
        printf("The number of days is 31");
        break;
    default:
        printf("Enter month number between 1 to 12");
        break;
    }

    return 0;
}