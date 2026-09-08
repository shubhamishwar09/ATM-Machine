#include<iostream>
#include<string>
using namespace std;
Hello
class ATM
{
public:
	string name;
	int account_no;
	int pin_no;
	double balance;

	ATM(string n, int acc, int p, double bal)
	{
		name = n;
		account_no = acc;
		pin_no = p;
		balance = bal;
	}

	void show_balance()
	{
		cout<<" Your current balance is : "<<balance<<".\n";
	}

	void deposit(double amount)
	{
		balance+=amount;
		cout<<" Amount "<<amount<<" will be deposited.\n";
		cout<<" Amount "<<amount<<" is creadited in your account through IBI ATM. Now your current balance is "<<balance<<".\n";
	}

	void withdrawl(double amount)
	{
		if(amount>balance)
		{
			cout<<" Insufficient Balance !.\n";
		}
		else if(amount == 0)
		{
			cout<<" Amount "<<amount<<" couldn't be debited.\n";
		}
		else
		{
			balance-=amount;
			cout<<" Collect Your Cash !.\n";
			cout<<" Amount "<<amount<<" is debited from your account by IBI ATM. Now your current balance is "<<balance<<".\n";
		}
	}

};
int main()
{
	cout<<"\n";
	cout<<"                       WELCOME to IBI ATM !\n";
	cout<<"                   *--------------------------*\n";
	cout<<"                   ============================\n";
	cout<<"\n";
	ATM user[20] =
	{
		ATM("Harsh",1111,1234,5500),
		ATM("Ankit",1112,2234,200),
		ATM("Atul",1113,3234,970),
		ATM("Rahul Kumar",1114,4234,34098),
		ATM("Naman",1115,5234,98543),
		ATM("Raj",1116,6234,42000),
		ATM("Sarthak",1117,7234,1900),
		ATM("Monu",1118,8234,7800),
		ATM("Pankaj",1119,9234,56500),
		ATM("Siddharth",1110,1034,500),
		ATM("Shruti Kumari",2111,1134,2209),
		ATM("Narendra Modi",2112,1234,10),
		ATM("Yogi Adityanath",2113,1334,150),
		ATM("Mohan Yadav",2114,1434,50),
		ATM("Rahul Gandhi",2115,1534,90),
		ATM("Shah Rukh Khan",2116,1634,120),
		ATM("Virat Kohli",2117,1734,75),
		ATM("Amit Shah",2118,1834,220),
		ATM("Mukesh Ambani",2119,1934,55000),
		ATM("Anil Kapoor",2120,2034,1570)
	};

	int account,pin;
	cout<<" Enter your account no. : ";
	cin>>account;
	cout<<" Enter your ATM Pin : ";
	cin>>pin;
	int index = -1;

	for(int i=0; i<20; i++)
	{
		if(user[i].account_no == account && user[i].pin_no == pin)
		{
			index = i;
			break;
		}
	}
	if(index != -1)
	{
		cout<<"\n Welcome Mr. "<<user[index].name<<" !.\n";
	}
	else
	{
		cout<<"\n Invalid Account Number or Pin No.\n";
		exit(0);
	}

	int choice = 0;
	while(choice != 4)
	{
		cout<<"\n";
		cout<<" +-----------------------------+\n";
		cout<<" |Press 1 for Check Balance    |\n";
		cout<<" |Press 2 for Deposite Amount  |\n";
		cout<<" |Press 3 for Withdrawl Amount |\n";
		cout<<" |Press 4 for Exit             |\n";
		cout<<" +-----------------------------+\n";
		cout<<"\n";
		cout<<" Enter Your Choice : ";
		cin>>choice;
		switch(choice)
		{
		case 1:
			user[index].show_balance();
			break;
		case 2:
			double amount;
			cout<<" Enter Your Amount = ";
			cin>>amount;
			user[index].deposit(amount);
			break;
		case 3:
			cout<<" Enter your Amount = ";
			cin>>amount;
			user[index].withdrawl(amount);
			break;
		case 4:
			cout<<"\n THANK YOU !.\n";
			exit(0);
		default:
			cout<<" Your choice is wrong !.\n";

		}
	}
return 0;

}
