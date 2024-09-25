#include<stdio.h>
void main()
{
    int row,i,j,term,k;
    printf("\nenter the row you need:");
    scanf("%d",&row);

    term=row-1;
    for(i=1;i<=row;i++)
    {
        for(j=term;j>=1;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
        term--;
    }

}
