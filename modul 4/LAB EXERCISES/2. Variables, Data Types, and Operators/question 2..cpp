/*Write a C++ program that performs both implicit and explicit type conversions and
prints the results.*/
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"\nEnter the first value = ";
    cin>>a;
    cout<<"\nEnter the second value = ";
    cin>>b;
        cout<<"\nThe division of two values without type conversions= "<<a/b<<endl;
    cout<<"\nThe division of two values with type conversions= "<<(float)a/(float)b<<endl;
}
