#include<stdio.h>
int main()
{
	int p,n;
	float r,i;
	printf("\nenter the principal amount:");
	scanf("%d",&p);
	printf("\nenter the rate of interest:");
	scanf("%f",&r);
	printf("\nenter the number's of years:");
	scanf("%d",&n);
	
	i= p*r*n/100;
	printf("\n%.6f is the siumple interest",i);
}
