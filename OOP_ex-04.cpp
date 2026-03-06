/* 
	Aim: C++ Program For Unary Operator Overloading.
*/

#include<iostream>
using namespace std;
class addmission
{	private:

	int c,m,i,e,t;
	char ch;

	public:

	addmission()
	{	c=0; m=0; i=0; e=0; t=0;	}

void operator ++() // Declaration Of Operator '++' function
{
cout<<"\n Enter Code From Following:\n";
cout<<"\n\n\t C For Computer\n\n\t M For Mechanical";
	cout<<"\n\n\t I For IT\n\n\t E For ENTC";
	cout<<"\n\n\t  Enter the branch Code = "; cin>>ch;

	if(ch == 'C'|| ch == 'c' )
	{	c++;t++;	}

	else if(ch== 'M'|| ch == 'm' )
	{	m++;t++;	}

	else if(ch == 'I'|| ch == 'i' )
	{	i++;t++;	}

	else if(ch == 'E'|| ch == 'e' )
	{	e++;t++;	}

}
	void display()
{
	cout<<"\n Number Of Admissions Taken :";
	cout<<"\n\n Computer\t"<<c;
	cout<<"\n\n Mechanical\t"<<m;
	cout<<"\n\n IT\t\t"<<i;
	cout<<"\n\n ENTC\t\t"<<e;
	cout<<"\n\n\n Total Admissions\t"<<t;
}
void operator --()  // Declaration Of Operator '--' Function
{
cout<<"\n Enter Code From Following:\n";
cout<<"\n\n\t C For Computer\n\n\t M For Mechanical";
	cout<<"\n\n\t I For IT\n\n\t E For ENTC";
	cout<<"\n\n\t Enter bramch Code = "; cin>>ch;

	if(ch == 'C'|| ch == 'c' )
	{	c--;t--;	}

	else if(ch == 'M'|| ch == 'm' )
	{	m--;t--;	}

	else if(ch == 'I'|| ch == 'i' )
	{	i--;t--;	}

	else if(ch == 'E'|| ch == 'e' )
	{	e--;t--;	}

}
};

int main()
{
	addmission a; int i;

	do
{
	cout<<"\n Enter Your Choice :";
	cout<<"\n\n 1\t Take Admission \n\n 2\t Cancel Admission \n\n 3\t Display Admission Count \n\n 4\t Exit Program";
	cout<<"\n\n\t Choice = "; cin>>i;

	switch (i)
	{
		case 1 : ++a; break;
		case 2 : --a; break;
		case 3 : a.display(); break;
		case 4 : break;
	}

}	while(i<=4);

}

/* Output

 Enter Your Choice :

 1	 Take Admission

 2	 Cancel Admission

 3	 Display Admission Count

 4	 Exit Program

	 Choice = 1

 Enter Code From Following:


	 C For Computer

	 M For Mechanical

	 I For IT

	 E For ENTC

	 Code = c

 Enter Your Choice :

 1	 Take Admission

 2	 Cancel Admission

 3	 Display Admission Count

 4	 Exit Program

	 Choice = 1

 Enter Code From Following:


	 C For Computer

	 M For Mechanical

	 I For IT

	 E For ENTC

	 Code = m

 Enter Your Choice :

 1	 Take Admission

 2	 Cancel Admission

 3	 Display Admission Count

 4	 Exit Program

	 Choice = 1

 Enter Code From Following:


	 C For Computer

	 M For Mechanical

	 I For IT

	 E For ENTC

	 Code = i

 Enter Your Choice :

 1	 Take Admission

 2	 Cancel Admission

 3	 Display Admission Count

 4	 Exit Program

	 Choice = 1

 Enter Code From Following:


	 C For Computer

	 M For Mechanical

	 I For IT

	 E For ENTC

	 Code = e

 Enter Your Choice :

 1	 Take Admission

 2	 Cancel Admission

 3	 Display Admission Count

 4	 Exit Program

	 Choice = 1

 Enter Code From Following:


	 C For Computer

	 M For Mechanical

	 I For IT

	 E For ENTC

	 Code = C

 Enter Your Choice :

 1	 Take Admission

 2	 Cancel Admission

 3	 Display Admission Count

 4	 Exit Program

	 Choice = 3

 Number Of Admissions Taken :

 Computer	2

 Mechanical	1

 IT		1

 ENTC		1


 Total Admissions	5
 Enter Your Choice :

 1	 Take Admission

 2	 Cancel Admission

 3	 Display Admission Count

 4	 Exit Program

	 Choice = 2

 Enter Code From Following:


	 C For Computer

	 M For Mechanical

	 I For IT

	 E For ENTC

	 Code = c

 Enter Your Choice :

 1	 Take Admission

 2	 Cancel Admission

 3	 Display Admission Count

 4	 Exit Program

	 Choice = 3

 Number Of Admissions Taken :

 Computer	1

 Mechanical	1

 IT		1

 ENTC		1


 Total Admissions	4
 Enter Your Choice :

 1	 Take Admission

 2	 Cancel Admission

 3	 Display Admission Count

 4	 Exit Program

	 Choice = 4
*/
