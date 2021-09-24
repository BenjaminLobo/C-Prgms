#include<stdio.h>
#include<conio.h>

void main()
{
    int input;

    printf("Enter any number:");
    scanf("%d",&input);

    if(input==0)
        printf("The number is Zero",input);
    else if(input%2==0)
        printf("%d is Even Number",input);
    else
        printf("%d is Odd Number",input);
    getch();
}
