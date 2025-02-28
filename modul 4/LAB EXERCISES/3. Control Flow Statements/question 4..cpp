// Write a program that prints a right-angled triangle using stars(*) with a nested loop.
#include<iostream>
using namespace std;
int main()
{
    int a,i,j;
    cout<<"\nEnter the row numbers = ";
    cin>>a;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}
