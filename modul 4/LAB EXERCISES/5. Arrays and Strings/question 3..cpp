/* Write a C++ program to check if a given string is a palindrome (reads the same
forwards and backwards)*/
#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter any string: ";
    cin>>str;

    int len = str.length();
    bool isPalindrome = true;


    for(int i=0; i<len/2;i++)
    {
        if(str[i]!= str[len - i - 1])
        {
            isPalindrome = false;
            break;
        }
    }
   string reversedStr = "";

    for (int i = len - 1; i >= 0; i--)
    {
        reversedStr =  reversedStr+str[i];
    }

    cout<<"\nReversed string: "<<reversedStr<<endl;

    if(isPalindrome)
    {
        cout<<"\nThe string is a palindrome"<<endl;

    }
     else
    {
        cout<<"\nThe string is not a palindrome"<<endl;
    }
}
