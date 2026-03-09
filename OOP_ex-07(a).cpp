/* 
	Aim: Program Of Payroll System By Using Multilevel Inheritance.
*/

#include<iostream>
using namespace std;
class Income
{
 public :
 char name[30];
 int id;

void get()
{
cout<<"\n\n Enter Name:";
cin>>name;
cout<<"\nEnter ID no.:";
cin>>id;
}
};

class Salary : public Income            // Derived From Class Income
{
public:
int hra,da,basic,gs;

void calsal()
{
cout<<"\n\nEnter Basic Salary:";
cin>>basic;
cout<<"\nEnter HRA:";
cin>>hra;
cout<<"\nEnter DA:";
cin>>da;
gs=basic+hra+da;
}
};

class Netsalary : public Salary          // Derived From Class Salary
{
public:
int net,deduction;

void netsal()
{
cout<<"\n\nEnter amount of deduction";
cin>>deduction;
net=gs-deduction;
}

void display()
{
cout<<endl<<endl;
cout<<"NAME:"<<name<<endl;
cout<<"ID NO.:"<<id<<endl;
cout<<"__________________________________________"<<endl;
cout<<"Basic Salary:"<<basic<<endl;
cout<<"HRA:"<<hra<<endl;
cout<<"DA:"<<da<<endl;
cout<<"__________________________________________"<<endl;
cout<<"Gross Salary:"<<gs<<endl;
cout<<"Net Salary:"<<net<<endl;
cout<<"___________________________________________"<<endl;
}
};

int main()
{
Netsalary n1;
n1.get();
n1.calsal();
n1.netsal();
n1.display();
return 0;
}

/* Output

 Enter Name: Z

Enter ID no.: 2048


Enter Basic Salary: 50000

Enter HRA: 10000

Enter DA: 5000


Enter amount of deduction 20000


NAME:Z
ID NO.:2048
__________________________________________
Basic Salary:50000
HRA:10000
DA:5000
__________________________________________
Gross Salary:65000
Net Salary:45000
___________________________________________

*/
