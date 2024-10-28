#include<stdio.h>
int main()
{
	int year;
	printf("\nenter any year:");
	scanf("%d",&year);
	
	if(year%100==0)
	{
		if(year%400==0)
		{
			printf("\n%d is a leap year:",year);
		}
		else
		{
			printf("\n%d is not leap year:",year);
		}
	}
	else
	{
		if(year%4==0)
		{
			printf("\n%d is a leap year:",year);
		}
		else
		{
			printf("\n%d is not leap year:",year);
		}
	}
}
