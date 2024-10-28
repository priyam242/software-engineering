#include<stdio.h>
int main()
{
	int b,h,area;
	printf("\nenter the triangle's base:");
	scanf("%d",&b);
	printf("\nenter the triangle's height:");
	scanf("%d",&h);
	
	area= (b * h)* 1/2  ;
	printf("\n %d is the area of triangle",area);
}
