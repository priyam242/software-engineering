//	Write a program to find out the max number from given array using functiono	Write a program to find out the max number from given array using functiono	Write a program to find out the max number from given array using function
#include<stdio.h>
int arr(int a[],int size);
void main()
{
    int max=0, i,size,a[100];
    printf("\nEnter the size of an array=");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("\nEnter the elements of an array in a[%d]=",i);
        scanf("%d",&a[i]);
    }
    max=arr(a,size);
    printf("\nThe maximum number in the array is =%d",max);
}
int arr(int a[],int size)
{
    int i,max=0;
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<size;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    return max;
}
