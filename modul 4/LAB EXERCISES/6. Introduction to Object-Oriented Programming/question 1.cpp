/*Write a C++ program that defines a class Calculator with functions for addition,
subtraction, multiplication, and division. Create objects to use these function */

#include<iostream>
using namespace std;
class Calculator
{
   public:

   int add()
   {
   	int a,b;
   	cout<<"\nEnter the first value = ";
   	cin>>a;
   	cout<<"\nEnter the second value = ";
   	cin>>b;
   	cout<<"\nThe addition of value is = "<<a+b;
   }
   int sub()
   {
   	int a,b;
   	cout<<"\nEnter the first value = ";
   	cin>>a;
   	cout<<"\nEnter the second value = ";
   	cin>>b;
   	cout<<"\nThe subtraction of value is = "<<a-b;
   }
   int mul()
   {
   	int a,b;
   	cout<<"\nEnter the first value = ";
   	cin>>a;
   	cout<<"\nEnter the second value = ";
   	cin>>b;
   	cout<<"\nThe multiplication of value is = "<<a*b;
   }
   int div()
   {
   	double a,b;
   	cout<<"\nEnter the first value = ";
   	cin>>a;
   	cout<<"\nEnter the second value = ";
   	cin>>b;
   	cout<<"\nThe division of value is = "<<a/b;
   }
};
int main()
{
	Calculator c1,c2,c3,c4;
	int choice;
	up:
   cout<<"\nEnter 1.for the addition.";
   cout<<"\nEnter 2.for the subtration.";
   cout<<"\nEnter 3.for the multiplication.";
   cout<<"\nEnter 4.for the division.";
   cout<<"\nEnter yor choice = ";
   cin>>choice;
   switch(choice)
   {
   	case 1:
   		{
   		  c1.add();
	    }
   	  break;
   	case 2:
   		{
   			c1.sub();
		}
   	  break;
   	case 3:
   		{
   			c1.mul();
	    }
   	  break;
   	case 4:
   		{
   			c1.div();
	    }
   	  break;
   	  default:
   	  	{
   	  		cout<<"\nInvalid number ! please enter valid number.";
   	  		goto up;
		}

   }
}
