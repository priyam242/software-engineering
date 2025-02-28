/* Write a C++ program that accepts an array of integers, calculates the sum and
average, and displays the results */
#include<iostream>
using namespace std;
int main()
{
    int a[100],b[100],c[100],sum=0,i,size;
    double avg=0;
    cout<<"\nEnter the size of an arrays = ";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cout<<"\nEnter the element in a["<<i<<"] = ";
        cin>>a[i];
    }
    for(i=0;i<size;i++)
    {
        cout<<"\nEnter the element in b["<<i<<"] = ";
        cin>>b[i];
    }
    cout<<"\nA array = ";
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nB array = ";
    for(i=0;i<size;i++)
    {
        cout<<b[i]<<" ";
    }

    for(i=0;i<size;i++)
    {
       c[i]=a[i]+b[i];
    }
    cout<<"\nSum = ";
    for(i=0;i<size;i++)
    {
       cout<<c[i]<<" ";
    }
    cout<<"\nAvgerg = ";
    for(i=0;i<size;i++)
    {
        cout<<(float)c[i]/(float)size<<" ";
    }
}
