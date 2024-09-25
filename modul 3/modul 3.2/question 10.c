#include<stdio.h>
void main()
{
    int num,rem,max=0;
    printf("\nenter the value of num=");
    scanf("%d",&num);

    while(num!=0)
    {
        rem=num%10;
        if(max<rem)
        {
            max=rem;
        }
        num=num/10;
    }
     printf("\n%d is the maximum",max);


}
