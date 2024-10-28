#include<stdio.h>
int main()
{
	int num;
	printf("\nenter the value of num:");
	scanf("%d",&num);
	
	(num%2==0 ) ? printf("\n%d is the even number",num) : printf("\n%d is the odd number",num) ;
}
