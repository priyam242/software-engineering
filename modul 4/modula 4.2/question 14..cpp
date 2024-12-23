/*
  Write a program to find the max number from given two numbers using
  friend function
*/
#include<iostream>
using namespace std;
class Max
{
    private:
        int a,b;
    public:
    friend int display (Max &obj);
};
int display(Max &obj)
{

    cout<<"\nEnter the first value = ";
    cin>>obj.a;
    cout<<"\nEnter the Second value = ";
    cin>>obj.b;
    cout<<"\nFirst value = "<<obj.a;
    cout<<"\nsecond value = "<<obj.b<<endl;

    int temp =(obj.a>obj.b)?obj.a:obj.b;
    cout<<"\nBiggest (Max) number = "<<temp<<endl;
}
int main()
{
  Max m1;
  display(m1);
}
