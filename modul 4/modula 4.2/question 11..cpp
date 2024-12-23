/*
 Write a program to concatenate the two strings using Operator Overloading 
*/
#include<iostream>
using namespace std;
class Con 
{
public:
    string tutu; 
    Con operator+(const Con& obj)
	 {
        Con temp;
        temp.tutu = this->tutu + obj.tutu; 
        return temp;
    }
    
    void set(string a, string b)
	 {
        tutu = a + b;
        cout<<"\nThis is the concatenated string = " <<tutu;
    }
};

int main() 
{
    string a, b;
    cout<<"\nEnter the first string = ";
    cin>>a;
    cout<<"\nEnter the second string = ";
    cin>>b;
    Con c1, c2; 
    c1.set(a, "");
    c2.set(b, "");
    Con c3 = c1 + c2; 
    c3.set(c1.tutu, c2.tutu); 
    return 0;
}
