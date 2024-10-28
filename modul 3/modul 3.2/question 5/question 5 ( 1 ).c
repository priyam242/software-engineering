#include<stdio.h>
int main()
{
	int start,end,i;
	printf("\nenter starting number:");
	scanf("%d",&start);
	printf("\nenter ending number:");
	scanf("%d",&end);
	
	for(i=start;i>=end;i--)
	{
		printf("\n %d ",i);
	}

}
