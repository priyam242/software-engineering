#include<stdio.h>
void main()
{
	int num,rem,rev,onum;
	printf("\nenter any number:");
	scanf("%d",&num);
	onum=num;
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		rev=rev*10+rem;
	}
	printf("%d is the revers of %d",rev,onum);
}
