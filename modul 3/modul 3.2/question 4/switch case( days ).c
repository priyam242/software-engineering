#include<stdio.h>
int main()
{
	int day,choice;
	printf("\nenter a number (1 to 7) for the day of the week:");
	
	
	printf("\nenter your choice:");
	scanf("%d",&choice);
	
	switch (choice)
	{
	case 1:
		{
			printf("\nsunday");
		}
	break;
	case 2:
		{
			printf("\nmonday");
		}

	break;
	case 3:
		{
			printf("\ntuesday");
		}

	break;
	case 4:
		{
			printf("\nwednesday");
		}

	break;
	case 5:
		{
			printf("\nthursday");
		}

	break;
	case 6:
		{
			printf("\nfriday");
		}

	break;
	case 7:
		{
			printf("\nsaturday");
		}

	break;
	default :
	printf("\ninvalid number!");	
	}
	
}
