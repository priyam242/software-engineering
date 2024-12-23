/*
  Write a Program of Two 1D Matrix Addition using Operator Overloading
*/
#include<iostream>
using namespace std;
class Add 
{
public:
    int a[100][100];

    void get(int row, int col)
	 {
        for (int i= 0; i < row; i++)
		 {
            for(int j= 0; j<col; j++)
			 {
                cout<<"\nEnter the element in a["<<i<<"]["<<j<<"] = ";
                cin>>a[i][j];
            }
        }
    }

    void set(int row, int col)
	 {
        cout<<"\n A Array = " <<endl;
        for (int i=0; i<row; i++) 
		{
            for(int j=0; j<col; j++) 
			{
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    Add operator+(Add &obj) 
	{
        Add temp;
        for(int i= 0; i<100; i++)
		 {  
		    for (int j=0; j<100; j++) 
			{
                temp.a[i][j] = this->a[i][j] + obj.a[i][j]; 
            }
        }
        return temp; 
    }
};

int main() 
{
    int r, c;
    cout << "\nEnter the row numbers = ";
    cin >> r;
    cout << "\nEnter the column numbers = ";
    cin >> c;
    Add a1, a2;
    a1.get(r, c);
    a2.get(r, c);
    a1.set(r, c);
    a2.set(r, c);
    Add a3 = a1 + a2; 
    cout << "\nThe Addition of two d arrays = ";
    a3.set(r, c);
}
