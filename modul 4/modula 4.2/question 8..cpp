/*
Assume that the test results of a batch of students are stored in three different 
classes. Class Students are storing the roll number. Class Test stores the marks 
obtained in two subjects and class result contains the total marks obtained in 
the test. The class result can inherit the details of the marks obtained in the 
test and roll number of students. (Multilevel Inheritance)  
*/
#include<iostream>
using namespace std;
class Students
{
	public:
      int roll;	
       void roll1()
       {
       	cout<<"\nEnter your roll number = ";
       	cin>>roll;
	   }
	   void display_roll()
	   {
	   	cout<<"\nRoll = "<<roll;
	   }
};
class Test : public Students
{
	public:
	int math,science;
	void sub()
	{
		cout<<"\nEnter your math subject marks = ";
		cin>>math;
		cout<<"\nEnter your science subject marks = ";
		cin>>science;
	}
		void sub_dis()
	{
		cout<<"\nMath subject mark = "<<math;
		cout<<"\nscience subject mark = "<<science;
		cout<<"\nTotal marks = "<<math + science;
	}

};
class Result : public Students , public Test
{
	public:
		int ans = math + science;
};
int main()
{	
    Test t1;
	Result r1;
	t1.roll1();
	r1.sub();
	t1.display_roll();
	r1.sub_dis();
}
