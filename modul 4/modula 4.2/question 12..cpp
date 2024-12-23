/*
 Write a program to calculate the area of circle, rectangle and triangle using
Function Overloading
  Rectangle: Area * breadth
  Triangle: ½ *Area* breadth
 Circle: Pi * Area *Area
*/

#include<iostream>
using namespace std;
class get
{
	public :

		void tutu(double r)
		{
			cout<<"\nArea of circle is = "<<3.14*(r*r)<<endl;
		}
		void tutu (int l,int b)
		{
			cout<<"\nArea of Rectangle is = "<<l*b<<endl;
		}
		void tutu(double h,double b)
		{
			cout<<"\nArea of Triangle is = "<<0.5*(b*h)<<endl;
		}
};
int main()
{
    int choice;
	cout<<"\nEnter 1.Area of circle.";
	cout<<"\nEnter 2.Area of Rectangle.";
	cout<<"\nEnter 3.Area of Triangle.";

	cout<<"\nEnter your choice = ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			{
			double r;
			cout<<"\nEnter the reduis of a circle = ";
	        cin>>r;
	        get g1;
	        g1.tutu(r);
			}
		break;
		case 2:
			{
            int l,b;
			cout<<"\nEnter the length of rectangle = ";
	        cin>>l;
	        cout<<"\nEnter the width of rectangle = ";
	        cin>>b;
	        get g1;
	        g1.tutu(l,b);
			}
		break;
		case 3:
			{
            double h,b;
			cout<<"\nEnter the Height = ";
	        cin>>h;
	        cout<<"\nEnter the width of rectangle = ";
	        cin>>b;
	        get g1;
	        g1.tutu(h,b);
			}
		break;
		default :
			{
				cout<<"\nThe operation is not successful.";
			}
	}
}
