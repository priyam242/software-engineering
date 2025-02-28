/* Write a C++ program that demonstrates the use of variables and constants. Create
variables of different data types and perform operations on them */
#include<iostream>
using namespace std;
int main()
{
     int num1 ;
     long int num2;
     string ch;
     float a;
     double b;
     bool b1 = true;
     bool b2 = false;

    cout<<"\nEnter the value of num1 = ";
    cin>>num1;
    cout<<"\nEnter the value of num2 = ";
    cin>>num2;
    cout<<"\nEnter the value of a = ";
    cin>>a;
    cout<<"\nEnter the value of b = ";
    cin>>b;
    cout<<"\nEnter any character = ";
    cin>>ch;

    cout<<"\nThe value of num1 = "<<num1;
    cout<<"\nThe value of num2 = "<<num2;
    cout<<"\nThe value of charcter = "<<ch;
    cout<<"\nThe value of a = "<<a;
    cout<<"\nThe value of num1 = "<<b;
    cout<<"\nThe value of b1 = "<<b1;
    cout<<"\nThe value of b2 = "<<b2;
    return 0;
}
