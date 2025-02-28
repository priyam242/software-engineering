/* Write a C++ program that defines functions for basic arithmetic operations (add,
subtract, multiply, divide). The main function should call these based on user input. */
#include<iostream>
using namespace std;
int add(int a, int b)
{
    int sum;
    cout<<"\nEnter the first value = ";
    cin>>a;
    cout<<"\nEnter the second value = ";
    cin>>b;
    sum=a+b;
    return sum;
}
int sub(int a, int b)
{
    int sum;
    cout<<"\nEnter the first value = ";
    cin>>a;
    cout<<"\nEnter the second value = ";
    cin>>b;
    sum=a-b;
    return sum;
}
int mul(int a, int b)
{
    int sum;
    cout<<"\nEnter the first value = ";
    cin>>a;
    cout<<"\nEnter the second value = ";
    cin>>b;
    sum=a*b;
    return sum;
}
int div(float a, float b)
{
    float sum;
    cout<<"\nEnter the first value = ";
    cin>>a;
    cout<<"\nEnter the second value = ";
    cin>>b;
    sum=a/b;
    return sum;
}

int main()
{
    int a,b,c;
    float s,d;
    do
    {
    cout<<"\n------Menu--------";
    cout<<"\nEnter 1. for the addition.";
    cout<<"\nEnter 2. for the subtraction.";
    cout<<"\nEnter 3. for the multiplication.";
    cout<<"\nEnter 4. for the division.";
    cout<<"\nEnter 5. fort he Exit";
    cout<<"\nEnter your choice = ";
    cin>>c;
    if(c==1)
    {
       int v=add(a,b);
       cout<<"\nThe sum of two values = "<<v;
    }
    else if(c==2)
    {
       int v =sub(a,b);
       cout<<"\nThe subtraction of two values = "<<v;
    }
    else if(c==3)
    {
       int v =mul(a,b);
       cout<<"\nThe multiplication of two values = "<<v;
    }
    else if(c==4)
    {
       float v = div(s,d);
       cout<<"\nThe division of two values = "<<v;
    }
    }while(c!=5);


}
