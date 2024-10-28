#include<stdio.h>
void main()
{
    int row,i,j;
    char k='A';
    printf("\nenter the row count:");
    scanf("%d",&row);

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",k);
            k++;
        }
        printf("\n");
    }

}
