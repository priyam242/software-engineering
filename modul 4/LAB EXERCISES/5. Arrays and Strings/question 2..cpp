// Write a C++ program to perform matrix addition on two 2x2 matrices.
#include<iostream>
using namespace std;
int main()
{
    int size,i,j;
	int a[100][100],b[100][100],ans[100][100];

    cout<<"\nEnter the size of an array = ";
	cin>>size;


	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			cout<<"\nEnter the element in a["<<i<<"]["<<j<<"] = ",i,j;
			cin>>a[i][j];
		}
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			cout<<"\nEnter the element in b["<<i<<"]["<<j<<"] = ",i,j;
			cin>>b[i][j];
		}
	}


	cout<<"\nArray a = \n";
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\nArray b = \n";
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
           cout<<b[i][j]<<" ";
		}
		cout<<"\n";
	}
		for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					ans[i][j] = a[i][j] + b[i][j];
				}
			}
            cout<<"\nThe addition of two arrays = \n";
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					cout<<ans[i][j]<<" ";
				}
		     cout<<"\n";
			}
}
