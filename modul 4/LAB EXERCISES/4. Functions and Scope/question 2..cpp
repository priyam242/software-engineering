// Write a C++ program that calculates the factorial of a number using recursion.
#include<iostream>
using namespace std;
int fact(int num)
{
    if (num != 0)
    {
       return num * fact(num-1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int num;

    cout<<"\nEnter the number for the factorial = ";
    cin>>num;

    int ans = fact(num);

    cout<<"\nThe factorial of "<<num<<" is = "<<ans<<endl;

}
