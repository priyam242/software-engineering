#include<stdio.h>
void main()
{
    int num,i,fact=1;
    printf("\nenter any number for factorial:");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("\n%d is the factorial %d",fact,num);
}
