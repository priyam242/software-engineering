#include<stdio.h>
int main()
{
	int num1,num2;
	printf("\nenter the value of num1:");
	scanf("%d",&num1);
	printf("\nenter the value of num2:");
	scanf("%d",&num2);
	
	num1=num1*num2;
	num2=num1/num2;
	num1=num1/num2;
	
	printf("\nthe value of num1 is = %d",num1);
	printf("\nthe value of num2 is = %d",num2);
	
}
