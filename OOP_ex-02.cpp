/* Name: 
	Aim: Program For Parameterized Constructor.
*/

#include<iostream>
using namespace std;

class Bank
{
	public:

	int bal , accno , wamt , damt ;

	Bank(int a, int b)              // Parameterized Constructor
	{
		accno = a;
		bal = b;
	}

	void wid();
	void dip();
	void display();
};

void Bank::wid()                // Withdraw Function
{
	cout<<"\n\n Enter Account No. :\t";
	cin>>accno;
	cout<<"\n Enter Amount To Withdraw :\t";
	cin>>wamt;

	while( wamt > bal )
	{
		cout<<"\n Amount Exceeding Balance\n\n\t Enter Valid Amount \t ";
		cin>>wamt;
	}

	bal-=wamt;

	cout<<"\n\n Remaining Balance :\t"<<bal;
};

void Bank::dip()                // Deposit Function
{
	cout<<"\n\n Enter Account No. :\t";
	cin>>accno;
	cout<<"\n Enter Amount To Deposit :\t";
	cin>>damt;

	bal+=damt;

	cout<<"\n\n Remaining Balance :\t"<<bal;
};

void Bank::display()            // Display Function
{
	cout<<"\n\n Enter Account No. :\t";
	cin>>accno;
	cout<<"\n Balance :\t"<<bal;
};

int main()
{
	Bank p( 1 , 5000 );
	int choice;

do{
	cout<<"\n\n Enter Your Choice From Following : ";
	cout<<"\n\n 1. \t Withdraw Amount ";
	cout<<"\n\n 2. \t Deposit Amount ";
	cout<<"\n\n 3. \t Display Amount ";
	cout<<"\n\n 4. \t Exit Program \n\n Choice: \t";
	cin>>choice;

switch( choice )
	{

	case 1 : p.wid();break;
	case 2 : p.dip();break;
	case 3 : p.display();break;
	case 4 : break;

	}

  }while( choice <= 3 );

}

/* Output

 Enter Your Choice From Following :

 1. 	 Withdraw Amount

 2. 	 Deposit Amount

 3. 	 Display Amount

 4. 	 Exit Program

 Choice: 	3


 Enter Account No. :	1

 Balance :	5000

 Enter Your Choice From Following :

 1. 	 Withdraw Amount

 2. 	 Deposit Amount

 3. 	 Display Amount

 4. 	 Exit Program

 Choice: 	1


 Enter Account No. :	1

 Enter Amount To Withdraw :	7500

 Amount Exceeding Balance

	 Enter Valid Amount 	 1000


 Remaining Balance :	4000

 Enter Your Choice From Following :

 1. 	 Withdraw Amount

 2. 	 Deposit Amount

 3. 	 Display Amount

 4. 	 Exit Program

 Choice: 	2


 Enter Account No. :	1

 Enter Amount To Deposit :	11000


 Remaining Balance :	15000

 Enter Your Choice From Following :

 1. 	 Withdraw Amount

 2. 	 Deposit Amount

 3. 	 Display Amount

 4. 	 Exit Program

 Choice: 	3


 Enter Account No. :	1

 Balance :	15000

 Enter Your Choice From Following :

 1. 	 Withdraw Amount

 2. 	 Deposit Amount

 3. 	 Display Amount

 4. 	 Exit Program

 Choice: 	4
*/
