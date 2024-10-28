// WAP Find out length of string without using inbuilt function
#include<stdio.h>
void main()
{
    int i,count=0;
    char str[1000];
    printf("\nEnter the string value = ");
    gets(str);
    printf("\nThis is the original string = %s",str);
    for(i=0;str[i]!='\0';i++)
    {
        count++;
    }
    printf("\nthe length of the string is =%d ",count);
}
