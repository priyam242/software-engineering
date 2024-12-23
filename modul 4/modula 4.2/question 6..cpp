/*
Assume a class cricketer is declared. Declare a derived class batsman from 
cricketer. Data member of batsman. Total runs, Average runs and best 
performance. Member functions input data, calculate average runs, Display 
data. (Single Inheritance)
*/
#include<iostream>
using namespace std;
class Cricketer 
{
	public:
	string name;
	int total,match,best;
	void set()
	{
	cout<<"\nEnter the crickter name = ";
	cin>>name;
	cout<<"\nEnter the crickter totals runs = ";
	cin>>total;
	cout<<"\nEnter the totals match of the crickter = ";
	cin>>match;
	cout<<"\nEnter the crickter highest runs = ";
	cin>>best;
	int avg = total/match;
	cout<<"\nThe crickter name = "<<name;
	cout<<"\nThe total matchs of the crickter = "<<match;
	cout<<"\nThe total runs of the crickter = "<<total;
	cout<<"\nThe Average run = "<<avg;
	cout<<"\nThe Heightest runs of the crickter = "<<best;	
	}
};
class Batsman : public Cricketer
{
	
};
int main()
{
	Batsman b1;
	b1.set();
}
