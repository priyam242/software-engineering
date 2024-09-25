#include<stdio.h>
int main()
{
	int choice;
	printf("\nenter 1.for the Vowels ");
	printf("\nenter 2.for the Consonant ");

	printf("\nenter your choice:");
	scanf("%d",&choice);
	
	switch (choice)
	{
	case 1:
		{
		printf("\n A ,E ,I ,O ,U ");	
		}
	break;
	case 2:
		{
		printf("\n B,C,D,F,G,H,J,K,L,M,N,P,Q,R,S,T,V,W,X,Y,Z");	
		}
	break;
	default :
	printf("\ninvalid number!");	
	}
	
}
