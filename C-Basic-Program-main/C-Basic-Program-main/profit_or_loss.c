#include<stdio.h>
int main()
{
    float cp,sp,loss,profit;

    printf("Program to calculate profit or loss\n\n");
    printf("Enter the price at which you bought the product\nRs.");
    scanf("%f",&cp);
    printf("Enter the price at which you sold the product\nRs.");
    scanf("%f",&sp);

    //calculating loss and profit
    loss=cp-sp;
    profit=sp-cp;

    //checking profit or loss
    if (cp>sp)
    {
        printf("The loss is of Rs. %f",loss);
    }
    else if (cp<sp)
    {
        printf("The profit is of Rs. %f",profit);
    }
    else if (sp==cp)
    {
        printf("You made neither profit nor loss");
    }
    return 0;
}