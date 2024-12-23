/*
  Write a program of to swap the two values using templates 
*/
#include<iostream>
using namespace std;
template <typename T>
void Swap(T &n1,T &n2)
{
    T temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}
int main()
{
    int a,b;
    cout<<"\nEnter the first value = ";
    cin>>a;
    cout<<"\nEnter the second value = ";
    cin>>b;
    cout<<"\nValue of a before swapping = "<<a;
    cout<<"\nValue of b before swapping = "<<b<<endl;
    Swap(a,b);
    cout<<"\nValue of a after swapping = "<<a;
    cout<<"\nValue of b after swapping = "<<b<<endl;
}

