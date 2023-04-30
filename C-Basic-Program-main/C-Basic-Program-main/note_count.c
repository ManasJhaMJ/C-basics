#include <stdio.h>
int main()
{
    int amount;
    int note2000 = 0, note500 = 0, note100 = 0, note50 = 0, note20 = 0, note10 = 0, note5 = 0, note2 = 0, note1 = 0;
    int total;
    printf("Program For Note Counting In an Amount\n\n");
    printf("Enter the amount\tRs. ");
    scanf("%d", &amount);

    if (amount >= 2000)
    {
        note2000 = amount / 2000;
        amount -= note2000 * 2000;
    }
    if (amount >= 500)
    {
        note500 = amount / 500;
        amount -= note500 * 500;
    }
    if (amount >= 100)
    {
        note100 = amount / 100;
        amount -= note100 * 100;
    }
    if (amount >= 50)
    {
        note50 = amount / 50;
        amount -= note50 * 50;
    }
    if (amount >= 20)
    {
        note20 = amount / 20;
        amount -= note20 * 20;
    }
    if (amount >= 10)
    {
        note10 = amount / 10;
        amount -= note10 * 10;
    }
    if (amount >= 5)
    {
        note5 = amount / 5;
        amount -= note5 * 5;
    }
    if (amount >= 2)
    {
        note2 = amount / 2;
        amount -= note2 * 2;
    }
    if (amount >= 1)
    {
        note1 = amount / 1;
        amount -= note1 * 1;
    }

    //calculating total number of notes required
    total=note2000+note500+note100+note50+note20+note10+note5+note2+note1;

    //Note required
    printf("\n");
    printf("Rs. 2000 Note is %d\n",note2000);
    printf("Rs. 500  Note is %d\n",note500);
    printf("Rs. 100  Note is %d\n",note100);
    printf("Rs. 50   Note is %d\n",note50);
    printf("Rs. 20   Note is %d\n",note20);
    printf("Rs. 10   Note is %d\n",note10);
    printf("Rs. 5    Note is %d\n",note5);
    printf("Rs. 2    Note is %d\n",note2);
    printf("Rs. 1    Note is %d\n",note1);
    printf("\nTotal Notes required is %d\n",total);

    return 0;
}