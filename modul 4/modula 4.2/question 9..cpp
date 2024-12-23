/*
   Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading
*/
#include<iostream>
using namespace std;
class tutu
{
	public:
	void display(int a,int b)
	{
		cout<<"\nThe addition of two values = "<<a+b;
	}
	void display(int a,double b)
	{
		cout<<"\nThe subtation of two values = "<<a-b;
	}
	void display(double a,int b)
	{
		cout<<"The multiplication of two values = "<<a*b;
	}
	void display(double a,double b)
	{
		cout<<"The division of two values = "<<a/b;
	}
};
int main()
{
	int choice;
	cout<<"\nEnter 1. for the addtion.";
	cout<<"\nEnter 2. for the subtration.";
	cout<<"\nEnter 3. for the multiplication.";
	cout<<"\nEnter 4. for the division.";
	cout<<"\nENter your choice = ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			{
			int a,b;
			cout<<"\nEnter the first value = ";
	        cin>>a;
	        cout<<"\nEnter the second value = ";
	        cin>>b;
	        tutu t1;
	        t1.display(a,b);
			}
		break;
		case 2:
			{
				int a;
				double b;
			cout<<"\nEnter the first value = ";
	        cin>>a;
	        cout<<"\nEnter the second value = ";
	        cin>>b;
	        tutu t1;
	        t1.display(a,b);
			}
		break;
		case 3:
			{
				double a;
				int b;
			cout<<"\nEnter the first value = ";
	        cin>>a;
	        cout<<"\nEnter the second value = ";
	        cin>>b;
	        tutu t1;
	        t1.display(a,b);
			}
		break;
		case 4:
			{
				double a,b;
			cout<<"\nEnter the first value = ";
	        cin>>a;
	        cout<<"\nEnter the second value = ";
	        cin>>b;
	        tutu t1;
	        t1.display(a,b);
			}
		break;
		default :
			{
				cout<<"\nThe operation is not successful.";
			}
	}
}
