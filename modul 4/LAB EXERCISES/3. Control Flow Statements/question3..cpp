// Write a C++ program to display the multiplication table of a given number using a for loop.
#include<iostream>
using namespace std;
int main()
{
    int a,i;
    cout<<"\nEnter any number for the Table = ";
    cin>>a;
    cout<<"\nTable of "<<a<<""<<endl<<endl;
    for(i=1;i<=10;i++)
    {
        cout<<a<<" X "<<i<<" = "<<a*i;
        cout<<"\n";
    }
}
