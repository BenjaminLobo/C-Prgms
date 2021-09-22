#include<stdio.h>
#include<conio.h>

void main()
{
    int fn, sn, sum;
    float average;

    printf("Enter first number:");
    scanf("%d",&fn);
    printf("Enter second number:");
    scanf("%d",&sn);

    sum=fn+sn;
    average=sum/2.0;

    printf("Sum = %d, Average=%f",sum,average);
    getch();
}
