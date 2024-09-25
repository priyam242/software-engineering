#include<stdio.h>
int main()
{
	int num1, num2, add,sub,mul,div,mod,choice;
	printf("\nenter 1.for Addition");
	printf("\nenter 2.for Subtraction");
	printf("\nenter 3.for Multiplication");
	printf("\nenter 4.for Division");
	printf("\nenter 5.for modulo");
	
	printf("\nenter your choice:");
	scanf("%d",&choice);
	
	
	switch (choice)
	{
		case 1:
			{
			printf("\nenter the first number:");
			scanf("%d",&num1);
		    printf("\nenter the second number:");
			scanf("%d",&num2);
			printf("Addition of %d and %d is =%d",num1,num2,num1+num2);
	
			}
		break;
		case 2:
			{
			printf("\nenter the first number:");
			scanf("%d",&num1);
		    printf("\nenter the second number:");
			scanf("%d",&num2);
			printf("Subtraction of %d and %d is =%d",num1,num2,num1-num2);
			}
		break;
		case 3:
			{
			printf("\nenter the first number:");
			scanf("%d",&num1);
		    printf("\nenter the second number:");
			scanf("%d",&num2);
			printf("Multiplication of %d and %d is =%d",num1,num2,num1*num2);
			}
		break;
		case 4:
			{
			printf("\nenter the first number:");
			scanf("%d",&num1);
		    printf("\nenter the second number:");
			scanf("%d",&num2);
			printf("Division of %d and %d is =%.6f",num1,num2,(float)num1/(float)num2);
			}
		break;
		case 5:
			{
			printf("\nenter the first number:");
			scanf("%d",&num1);
		    printf("\nenter the second number:");
			scanf("%d",&num2);
			printf("modulo of %d and %d is =%d",num1,num2,num1%num2);
			}
		break;
		
		default:printf("\ninvalid number!");	
		
			
	}
}
