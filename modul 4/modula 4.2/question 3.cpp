/*
Write a program to find the multiplication values and the cubic values using
inline function 
*/
#include<iostream>
using namespace std;
inline int mul(int a,int b) { cout<<"\nEnter the first value = "; cin>>a; cout<<"\nEnter the second value = "; cin>>b;  int ans = a*b; return ans;}
inline int cub(int c) {int tutu = c*c*c ;cout<<"\nEnter any number = "; cin>>c;  return tutu;}
int main()
{
	int a,b,c,as,choice,tr;
	cout<<"\nEnter 1. for the multipliction of two values.";
	cout<<"\nEnter 2. for the cube of one number.";
	cout<<"\nEnter your choice = ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			{
				as = mul(a,b);
	            cout<<"\nThe multiplivation of two values = "<<as;
			}
		break;
		case 2:
			{
				tr = cub(c);
				cout<<"\nThe cube of number = "<<tr;
			}
		break;
		default:
			{
				cout<<"\nThe operation is not successful.";
			}
	}
}
