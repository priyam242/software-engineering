#include<stdio.h>
int main()
{
	int num1,num2,choice; 
	
	printf("\n enter 1.for (+)add");
	printf("\n enter 2.for (-)sub");
	printf("\n enter 3.for (*)mul");
	printf("\n enter 4.for (/)div");
	printf("\n enter 5.for (%) modulo");
	
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
				printf("\n%d and %d is %d ",num1,num2,num1+num2);
			}
		break;	
		case 2:
			{
				printf("\nenter the first number:");
	            scanf("%d",&num1);
	            printf("\nenter the second number:");
	            scanf("%d",&num2);
				printf("\n%d and %d is %d ",num1,num2,num1-num2);
			}
		break;	
		case 3:
			{
			printf("\nenter the first number:");
            scanf("%d",&num1);
	        printf("\nenter the second number:");
	        scanf("%d",&num2);
			printf("\n%d and %d is %d ",num1,num2,num1*num2);	
			}
		break;
		case 4:
			{
				printf("\nenter the first number:");
	            scanf("%d",&num1);
	            printf("\nenter the second number:");
	            scanf("%d",&num2);
				printf("\n%d and %d is %.6f ",num1,num2,(float)num1/(float)num2);
			}
		break;
		case 5:
			{
				printf("\nenter the first number:");
	            scanf("%d",&num1);
	            printf("\nenter the second number:");
	            scanf("%d",&num2);
				printf("\n%d and %d is %d ",num1,num2,num1%num2);
			}
		break;
					
		default:
		{
			printf("\ninvalid number!");
		 } 
	}
}
