#include<stdio.h>
int main()
{
	int num,i,sum1=0,count=0,digit=0,sum2=0;
	
	printf("\n enter 10 numbers:");
	
	for(i=1;i<=10;i++)
	{
		printf("\nenter %d number:",i);
		scanf("%d",&num);
	
		if(num%2==0)
		{
			sum1=sum1+num;
			count++;
		}
		else
		{
		sum2=sum2+num;
		digit++;
		}
	}
	
	printf("\n %d numbers are the even numbers",count);
	printf("\n the sum of even numbers is %d",sum1);
	printf("\n %d numbers are the odd numbers",digit);
	printf("\n the sum of odd numbers is %d",sum2);

}
