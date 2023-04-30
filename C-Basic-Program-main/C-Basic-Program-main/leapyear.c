#include <stdio.h>
int main()
{
    int year;
    printf("Program to check whether a year is leap year or not\n\n");
    printf("Enter the year to check leap year\t");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("The year is a leap year");
    }
    else if (year % 100 == 0)
    {
        printf("The year is not a leap year");
    }
    else if (year % 4 == 0)
    {
        printf("The year is a leap year");
    }
    else
    {
        printf("The year is not a leap year");
    }

    return 0;

}