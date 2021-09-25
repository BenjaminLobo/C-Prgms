#include<stdio.h>
#include<conio.h>
void main()
{
    int i=4;
    printf("Hi!\n");
    printf("Hello!\n");
    printf("How are you?\n");
    if(i==5)
        goto end;
    printf("Is everything all right?\n");
    printf("Hope everything goes through easily.\n");
    printf("You can text me whenever you need someone to talk to.\n");
    end:
        printf("Take care! Bye!\n");
}
