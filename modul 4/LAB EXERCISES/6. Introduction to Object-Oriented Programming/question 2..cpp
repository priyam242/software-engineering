/*
Create a class BankAccount with data members like balance and member functions
like deposit and withdraw. Implement encapsulation by keeping the data members
private
*/
#include<iostream>
using namespace std;
class BankAccount
{
	public:
	int choice;
	string name,tutu;
	long int acc;
	int amount;
	long int balance;
	void set()
	{
		cout<<"\nEnter your name = ";
		cin>>name;
		cout<<"\nEnter your bank account number = ";
		cin>>acc;
		cout<<"\nWhich bank account do you prefer = ";
		cout<<"\n";
	}
	void get()
	{
		cout<<"\nEnter 1. for Current account";
		cout<<"\nEnter 2. for saving account";
		cout<<"\nEnter 3. for DEMAT account";
		cout<<"\nEnter 4. for fix deposit account";
		cout<<"\nEnter your choice = ";
		cin>>choice;
		if(choice==1)
		{
			int a;
			balance= 20000;
			tutu = "Current account";
			cout<<"\nAccount Type = "<<tutu;
			cout<<"\nBalance = 20000";
			cout<<"\nWhat do you want to do with your bankaccount";
		cout<<"\nEnter 1. for the deposit ";
		cout<<"\nEnter 2. for the Withdraw ";
		cout<<"\nEnter 3. for the check balance ";
		cout<<"\nEnter your choice = ";
		cin>>a;
		switch(a)
		{
			case 1:
				{
					cout<<"\nEnter your deposit amount = ";
					cin>>amount;
					if(amount>0)
					{
						balance = balance+amount;
						cout<<"\nName = "<<name;
		                cout<<"\nBank Account number = "<<acc;
		                cout<<"\nAccount type = "<<tutu;
						cout<<"\nBalance = "<<balance;
					}
					else
					{
						cout<<"\nThe operation is not successful.";
					}
				}
			break;
			case 2:
				{
					balance= 20000;
					cout<<"\nEnter your withdraw amount = ";
					cin>>amount;
					if(amount<=balance && amount>0)
					{
						balance = balance-amount;
						cout<<"\nName = "<<name;
		                cout<<"\nBank Account number = "<<acc;
		                cout<<"\nAccount type = "<<tutu;
						cout<<"\nBalance = "<<balance;
					}
				}
			break;
			case 3:
				{
					    balance= 20000;
					    cout<<"\nName = "<<name;
		                cout<<"\nBank Account number = "<<acc;
		                cout<<"\nAccount type = "<<tutu;
						cout<<"\nBalance = "<<balance;
				}
			break;
			default:
				{
					cout<<"\nYou have enter wrong number.";
				}
		}
		}
		else if(choice==2)
		{
			int a;
			balance = 100000;
			tutu = "saving account";
			cout<<"\nAccount type = "<<tutu;
			cout<<"\nBalance = 100000";
			cout<<"\nWhat do you want to do with your bank account";
		cout<<"\nEnter 1. for the deposit ";
		cout<<"\nEnter 2. for the Withdraw ";
		cout<<"\nEnter 3. for the check balance ";
		cout<<"\nEnter your choice = ";
		cin>>a;
		switch(a)
		{
			case 1:
				{
					cout<<"\nEnter your deposit amount = ";
					cin>>amount;
					if(amount>0)
					{
						balance = balance+amount;
						cout<<"\nName = "<<name;
		                cout<<"\nBank Account number = "<<acc;
		                cout<<"\nAccount type = "<<tutu;
						cout<<"\nBalance = "<<balance;
					}
					else
					{
						cout<<"\nThe operation is not successful.";
					}
				}
			break;
			case 2:
				{
					balance= 100000;
					cout<<"\nEnter your withdraw amount = ";
					cin>>amount;
					if(amount<=balance && amount>0)
					{
						balance = balance-amount;
						cout<<"\nName = "<<name;
		                cout<<"\nBank Account number = "<<acc;
		                cout<<"\nAccount type = "<<tutu;
						cout<<"\nBalance = "<<balance;
					}
				}
			break;
			case 3:
				{
					    balance= 100000;
					    cout<<"\nName = "<<name;
		                cout<<"\nBank Account number = "<<acc;
		                cout<<"\nAccount type = "<<tutu;
						cout<<"\nBalance = "<<balance;
				}
			break;
			default:
				{
					cout<<"\nYou have enter wrong number.";
				}
		}
		}
		else if(choice==3)
		{
			int a;
			balance = 50000;
			tutu = "DEMAT account";
			cout<<"\nAccount Type = "<<tutu;
			cout<<"\nBalance = 50000";
			cout<<"\nWhat do you want to do with your bank account";
		cout<<"\nEnter 1. for the deposit ";
		cout<<"\nEnter 2. for the Withdraw ";
		cout<<"\nEnter 3. for the check balance ";
		cout<<"\nEnter your choice = ";
		cin>>a;
		switch(a)
		{
			case 1:
				{
					cout<<"\nEnter your deposit amount = ";
					cin>>amount;
					if(amount>0)
					{
						balance = balance+amount;
						cout<<"\nName = "<<name;
		                cout<<"\nBank Account number = "<<acc;
		                cout<<"\nAccount type = "<<tutu;
						cout<<"\nBalance = "<<balance;
					}
					else
					{
						cout<<"\nThe operation is not successful.";
					}
				}
			break;
			case 2:
				{
					balance= 50000;
					cout<<"\nEnter your withdraw amount = ";
					cin>>amount;
					if(amount<=balance && amount>0)
					{
						balance = balance-amount;
						cout<<"\nName = "<<name;
		                cout<<"\nBank Account number = "<<acc;
		                cout<<"\nAccount type = "<<tutu;
						cout<<"\nBalance = "<<balance;
					}
				}
			break;
			case 3:
				{
					    balance= 50000;
					    cout<<"\nName = "<<name;
		                cout<<"\nBank Account number = "<<acc;
		                cout<<"\nAccount type = "<<tutu;
						cout<<"\nBalance = "<<balance;
				}
			break;
			default:
				{
					cout<<"\nYou have enter wrong number.";
				}
		}
		}
		else if(choice==4)
		{
			int a;
			balance = 100000;
			tutu = "fix deposit account";
			cout<<"\nAccount Type = "<<tutu;
			cout<<"\nBalance = 100000";
			cout<<"\nWhat do you want to do with your bank account";
		cout<<"\nEnter 1. for the deposit ";
		cout<<"\nEnter 2. for the Withdraw ";
		cout<<"\nEnter 3. for the check balance ";
		cout<<"\nEnter your choice = ";
		cin>>a;
		switch(a)
		{
			case 1:
				{
					cout<<"\nEnter your deposit amount = ";
					cin>>amount;
					if(amount>0)
					{
						balance = balance+amount;
						cout<<"\nName = "<<name;
		                cout<<"\nBank Account number = "<<acc;
		                cout<<"\nAccount type = "<<tutu;
						cout<<"\nBalance = "<<balance;
					}
					else
					{
						cout<<"\nThe operation is not successful.";
					}
				}
			break;
			case 2:
				{
					balance= 100000;
					cout<<"\nEnter your withdraw amount = ";
					cin>>amount;
					if(amount<=balance && amount>0)
					{
						balance = balance-amount;
						cout<<"\nName = "<<name;
		                cout<<"\nBank Account number = "<<acc;
		                cout<<"\nAccount type = "<<tutu;
						cout<<"\nBalance = "<<balance;
					}
				}
			break;
			case 3:
				{
					    balance= 100000;
					    cout<<"\nName = "<<name;
		                cout<<"\nBank Account number = "<<acc;
		                cout<<"\nAccount type = "<<tutu;
						cout<<"\nBalance = "<<balance;
				}
			break;
			default:
				{
					cout<<"\nYou have enter wrong number.";
				}
		}
		}
		else
		{
			cout<<"\nYou have enter wrong number";
		}

	}
};
int main()
{
	BankAccount b1;
	b1.set();
	b1.get();
}
