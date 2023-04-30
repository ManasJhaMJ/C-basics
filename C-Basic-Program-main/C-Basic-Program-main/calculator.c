#include <stdio.h>
int main()
{
    float num1, num2, result = 0;
    char operator, a;

    printf("Simple Calculator\n\n");
    printf("Enter 1st number\n");
    scanf("%f", &num1);
    printf("Enter the operator ( + , - , * , / )\n");
    scanf("%c%c", &a, &operator);
    printf("Enter 2nd number\n");
    scanf("%f", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
   default:
   printf("Enter valid input");
    }
    printf("The result is %f",result);

    return 0;
}