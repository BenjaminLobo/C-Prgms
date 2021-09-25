#include<stdio.h>
#include<conio.h>

void main()
{
   int i;
   for(i=1000;i<=1117;i++)
   {
      if(i%117==0)
      {
          printf("%d",i);
          break;
      }
   }
   getch();
}
