#include<stdio.h>
void main()
{
    int terms,num1=0,num2=1,num3,i;
    printf("\nenter the elements:");
    scanf("%d",&terms);
    printf("%d %d ",num1,num2);

   for(i=1;i<=terms-2;i++)
   {
   num3=num1+num2;
   printf("%d ",num3);
   num1=num2;
   num2=num3;
   }

   }
