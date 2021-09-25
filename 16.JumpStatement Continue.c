#include<stdio.h>
#include<conio.h>

void main()
{
  int i;
  for(i=1000;i<=1500;i++)
  {
      if(i%5==0)
      {
          continue;
      }
      if(i%17==0)
      {
          printf("%d\t",i);
      }
  }
}
