/* Write a C++ program that takes a student’s marks as input and calculates the grade
based on if-else conditions. */
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"\nEnter your numbers = ";
    cin>>a;
    cout<<"\n";
    if(a>80 && a<=100)
    {
        cout<<"A Grade"<<endl;
    }
    else if(a>60 && a<=80)
    {
        cout<<"B Grade"<<endl;
    }
    else if(a>45 && a<=60)
    {
        cout<<"C Grade"<<endl;
    }
    else
    {
        cout<<"D Grade"<<endl;
    }
}
