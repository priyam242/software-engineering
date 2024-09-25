#include<stdio.h>

int main()
{
	int days, year,month,choice;
	
	printf("\nenter 1.for convert days into years:");
	printf("\nenter 2.for convert years into days:");
	
	printf("\nenter your choice:");
	scanf("%d",&choice);
	
	switch (choice)
	{
	case 1:
	{
	printf("\nenter days:");
	scanf("%d",&days);
	
    year=(float)days/365;
	month=(days-year*365)/30;
	days=days-(year*365)-(month*30);
	printf(" year :%d",year);
	printf(" month :%d",month);
	printf(" days :%d",days);	
	}
	break;
			
	case 2:
	{
	printf("\nenter year:");
	scanf("%d",&year);
	
    days = year * 365;

	
	printf(" days :%d",days);	
	}
	break;
	default:
	printf("\ninvalid number !");	
		
	}
		

}
