#include<stdio.h>
#include<conio.h>
void main()
{
    int MAX=3;
    int marks[MAX];
    int sum=0,i;

    for(i=0;i<3;i++)
    {
        printf("Enter any number:");
        scanf("%d",&marks[i]);
    }

     for(i=0;i<3;i++)
        sum=sum+marks[i];

    printf("Sum=%d",sum);
    getch();
}
