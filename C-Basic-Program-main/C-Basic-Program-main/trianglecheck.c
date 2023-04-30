#include <stdio.h>
int main()
{
    int side1, side2, side3;

    printf("Program to check whether the traingle is equilateral or scalene or isosceles\n\n");
    printf("Enter the Length of Sides of traingle\n");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 == side2 && side2 == side3)
    {
        printf("The triangle is equilateral");
    }
    else if ((side1 == side2 && side1 != side3) || (side1 == side3 && side1 != side2) || (side2 == side3 && side2 != side1))
    {
        printf("The triangle is isosceles");
    }
    else
    {
        printf("The traingle is scalene");
    }
    return 0;
}