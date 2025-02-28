/* Write a program that demonstrates the difference between local and global
variables in C++. Use functions to show scope. */
#include<iostream>
using namespace std;
int a=2;
int main()
{
    int a=5;
    cout<<"\nThe value of local variable = "<<a;
    cout<<"\nThe value of global variable = "<<::a;
    // when we have to access global variable them we use (::).
}
