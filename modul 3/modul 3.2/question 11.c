#include<stdio.h>
void main()
{
	int num,rem,sum=0;
	printf("\nenter any number:");
	scanf("%d",&num);
	
	while(num!=0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("%d is the summation of given number:",sum);
}
