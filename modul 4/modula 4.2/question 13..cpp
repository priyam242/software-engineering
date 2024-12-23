/*
   Write a program to swap the two numbers using friend function without
    using third variable
*/
#include<iostream>
using namespace std;
class Swap
{
private :
    int a=10,b=20;

public:
    friend void tutu(Swap &obj);
};
void tutu(Swap &obj)
{
    cout<<"\nThe value of a before swapping = "<<obj.a;
    cout<<"\nThe value of b before swapping = "<<obj.b<<endl;

    obj.a=obj.a+obj.b;
    obj.b=obj.a-obj.b;
    obj.a=obj.a-obj.b;

    cout<<"\nThe value of a after swapping = "<<obj.a;
    cout<<"\nThe value of b after swapping = "<<obj.b<<endl;
}
int main()
{
    Swap s1;
    tutu(s1);
}
