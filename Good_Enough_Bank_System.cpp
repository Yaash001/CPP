#include <iostream>
#include <stdlib.h>
using namespace std;

class acc
{
protected:
	int acc_no=0;
	char name[30];

public:
	void set()
	{
		cout<<"\nEnter Account No:";
		cin>>acc_no;
		cout<<"\nEnter Account Holder Name:";
		cin>>name;
	}
	void show()
	{
		cout<<"\nAccount No:"<<acc_no;
		cout<<"\nName :"<<name;
	}
};


class saving_acc : virtual public acc
{
	int sa_id=0;
	double amt=0;
public:
	void set_sa()
	{
		set();
		cout<<"\nEnter Saving Account ID: ";
		cin>>sa_id;
		cout<<"\nEnter Saving Balance: ";
		cin>>amt;

	}
	void show_sa()
	{
		if(acc_no == 0)
		{
			cout<<"\nNo Data Found\n";
		}
		else
		{
			show();
			cout<<"\nSaving Account ID : "<<sa_id;
			cout<<"\nBalance : "<<amt;
		}

	}
};


class curr_acc : virtual public acc
{
	int curr_id=0;
	double amt=0;
public:
	void set_curr()
	{
		set();
		cout<<"\nEnter Current Account ID: ";
		cin>>curr_id;
		cout<<"\nEnter Current Balance: ";
		cin>>amt;
	}
	void show_curr()
	{
		show();
		if(acc_no == 0)
		{
			cout<<"\nNo Data Found\n";
		}
		else {
			cout<<"\nCurrent Account ID : "<<curr_id;
			cout<<"\nBalance : "<<amt;
		}

	}
};


class fd_acc : public saving_acc,public curr_acc
{
	int fd_id=0;
	double amt=0;
	char ip;

public:
	void set_fd()
	{

		int ch=0;
		cout<<"\n1.Saving\n2.Current\n3.Exit";
		cout<<"\nEnter choice:";
		cin>>ch;
		switch(ch)
		{
		case 1:
			set_sa();
			break;
		case 2:
			set_curr();
			break;
		case 3:
			exit(0);
			break;
		}
		cout<<"\nDo You Have An Fixed Deposit (Y / N) :";
		cin>>ip;
		if(ip == 'y' || ip == 'Y')
		{
			cout<<"\nEnter Fixed Deposit ID:";
			cin>>fd_id;
			cout<<"\nEnter Amount :";
			cin>>amt;
		}
	}

	void show_fd()
	{
		int ch=0;
		cout<<"\n1.Saving\n2.Current\n3.Exit";
		cout<<"\nEnter choice:";
		cin>>ch;

		switch(ch)
		{
		case 1:
			show_sa();
			break;
		case 2:
			show_curr();
			break;
		case 3:
			exit(0);
			break;
		}
		if(ip == 'Y' || ip == 'y')
		{
			cout<<"\n Fixed Deposit ID:"<<fd_id;
			cout<<"\nAmount In Fixed Deposit:"<<amt;
		}
		else
		{
			cout<<"\n\nNo data For Fixed Deposit\n";
		}
	}
};


int main()
{
	fd_acc f;
	int chce;
	cout<<"\nWELOCOME TO XYZ BANK";
	cout<<"\n____________________";
	while(1)
	{
		cout<<"\n1.To Insert Data\n2.To See Data\n3.Exit";
		cout<<"\nEnter choice:";
		cin>>chce;
		switch(chce)
		{
		case 1:
			f.set_fd();
			break;
		case 2:
			f.show_fd();
			break;
		case 3:
			exit(0);
		}
	}
	return 0;
}