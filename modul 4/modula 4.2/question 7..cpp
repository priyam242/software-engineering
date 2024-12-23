/*
Create a class person having members name and age. Derive a class student 
having member percentage. Derive another class teacher having member 
salary. Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance)
*/
#include<iostream>
using namespace std;
class Person
{
	public:
		long int salary;
		int age;
		double percentage;
		string name;
		void set()
		{
		cout<<"--This is the Student details--";
		cout<<"\n";
		cout<<"\nEnter your name = ";
		cin>>name;
		cout<<"\nEnter your age = ";
		cin>>age;
		cout<<"\nEnter your percentage = ";
		cin>>percentage;
		cout<<"\n";
	    }
	    void dis()
	    {
	    cout<<"\n";
		cout<<"\nName = "<<name;
		cout<<"\nAge = "<<age;
		cout<<"\nPercentage = "<<percentage;
		cout<<"\n";
		}
		void get()
	{
		cout<<"\n--This is the Teacher details--";
		cout<<"\n";
		cout<<"\nEnter your name = ";
		cin>>name;
		cout<<"\nEnter your age = ";
		cin>>age;
		cout<<"\nEnter your salary = ";
		cin>>salary;
	}
	 void dis1()
	   {
	   	cout<<"\n";
		cout<<"\nName = "<<name;
		cout<<"\nAge = "<<age;
		cout<<"\nSalary = "<<salary;
		cout<<"\n";
	}
};
class Student : public Person
{
	public:
		double percentage;
};
class Teacher : public Person
{
	public:
		long int salary;
};
int main()
{
	Student s1;
	s1.set();
	Teacher t1;
	t1.get();
	s1.dis();
	t1.dis1();
}  
