#include <stdio.h>

int main() 
    {
    int num,sum, firstnum, lastnum;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastnum = num % 10;

    while (num >= 10)
    {
        num =num/10;
    }
    
    firstnum = num;
    sum = firstnum + lastnum;

    printf("\nSum of first and last digit: %d", sum);

    return 0;
}
