/* Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise
operators. Perform operations using each type of operator and display the results. */
#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"\nEnter the num1 value = ";
    cin>>num1;
    cout<<"\nEnter the num2 value = ";
    cin>>num2;

    cout<<"\n---------- arithmetic operator ----------";
    cout<<"\n";
    cout<<"\nThe addtion is two number = "<<num1+num2;
    cout<<"\nThe subraction is two number = "<<num1-num2;
    cout<<"\nThe maltiplication is two number = "<<num1*num2;
    cout<<"\nThe division of two numbrer = "<<num1/num2;
    cout<<"\nThe remender of two number = "<<num1%num2;

    cout<<"\n";
    cout<<"\n---------- relational operator ----------";
    cout<<"\n";
    if (num1==num2)
    {
        cout<<"\nBoth value is same.";
    }
    if (num1>num2)
    {
        cout<<"\nNum1 is biggest than num2.";
    }
    if (num1<num2)
    {
        cout<<"\nNum2 is biggest than num1.";
    }
    if (num1!=num2)
    {
        cout<<"\nNum1 is not equal than num2.";
    }
    cout<<"\n";

    int num3;
    cout<<"\nEnter the num3 value = ";
    cin>>num3;
    cout<<"\n";
    cout<<"\n---------- logical operator ----------";
    cout<<"\n";
    cout<<"\n----- and (&&) operator.-----";
    cout<<"\n";
    if(num1>num2 && num1>num3)
    {
        cout<<"\nNum1 is Greter than  num2 and num3.";
    }
    if(num2>num1 && num2>num3)
    {
        cout<<"\nNum2 is Greter than num1 and num3.";
    }
    if(num3>num1 && num3>num2)
    {
        cout<<"\nNum3 is Greter than num1 and num2.";
    }

    cout<<"\n-----or (||) operator.-----";
    cout<<"\n";
    if(num1>num2 || num1>num3)
    {
        cout<<"\nNum1 is Greter than num2 and num3.";
    }
    if(num2>num1 || num2>num3)
    {
        cout<<"\nNum2 is Greter than num1 and num3.";
    }
    if(num3>num1 || num3>num2)
    {
        cout<<"\nNum3 is Greater than num1 and num2.";
    }

    cout<<"\n";
    cout<<"\n---------- used bitwise opretor ----------";
    cout<<"\n";

    if((num1>num2) | (num1>num3))
    {
        cout<<"\nnum1 is potentially biggest number.";
    }
    if((num2>num1) | (num2>num3))
    {
        cout<<"\nnum2 is potentially biggest number.";
    }
    if((num3>num1) | (num3>num2))
    {
        cout<<"\nnum3 is potentially bigges number.";
    }
    cout<<"\n";
    if((num1>num2) & (num1>num3))
    {
        cout<<"\nnum1 is biggest number.";
    }
    if((num2>num1) & (num2>num3))
    {
        cout<<"\nnum2 is biggest number.";
    }
    if((num3>num1) & (num3>num2))
    {
        cout<<"\nnum3 is biggest number.";
    }
    return 0;
}
