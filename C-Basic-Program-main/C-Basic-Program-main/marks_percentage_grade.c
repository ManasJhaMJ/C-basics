#include<stdio.h>
int main()
{
    float phy,maths,bio,chem,comp,percent=0,max;

    printf("Program to input marks and to find percentage and grade\n\n");
    printf("Enter maximum marks per subject\n");
    scanf("%f",&max);
    printf("Enter the marks obtained\n");
    printf("Physics\n");
    scanf("%f",&phy);
    printf("Mathematics\n");
    scanf("%f",&maths);
    printf("Biology\n");
    scanf("%f",&bio);
    printf("Chemsitry\n");
    scanf("%f",&chem);
    printf("Computer\n");
    scanf("%f",&comp);

    percent=(phy+maths+bio+comp+chem)*100/(5*max);
    printf("Percenatge = %f%%\n",percent);

    if(percent>=90)
    {
        printf("Grade = A");
    }
    else if(percent>=80)
    {
        printf("Grade = B");
    }
    else if(percent>=70)
    {
        printf("Grade = C");
    }
    else if(percent>=60)
    {
        printf("Grade = D");
    }
    else if(percent>=40)
    {
        printf("Grade = E");
    }
    return 0;
}