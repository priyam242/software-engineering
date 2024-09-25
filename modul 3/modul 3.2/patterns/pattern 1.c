#include<stdio.h>
int main()
{
	int row,i,j;
	printf("\nenter the elements of row:");
	scanf("%d",&row);
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j%2);
		}
		printf("\n");6										    
	}
}
