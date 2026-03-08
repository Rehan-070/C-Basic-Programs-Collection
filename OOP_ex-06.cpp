/* 
	Aim: Write aC++ Program  for matrix addition by using friend function*/

#include<iostream>
using namespace std;
class Matrix_2;
class Matrix_1
{
	int m,n;
	int a[5][5];

	public:
		void getm1();           // I/p Function For Matrix_1
		void putm1();           // O/p Function For Matrix_1

		friend void matsum(Matrix_1&,Matrix_2&);                // Friend Function Declaration In Class Matrix_1
};

void Matrix_1::getm1()
{
	int i,j;

	cout<<"\n\n Matrix_1 : \n\n\t Enter R n C :\t ";
	cin>>m>>n;
	cout<<"\n\n Enter The Elements :\n";
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		cin>>a[i][j];
	}
}

void Matrix_1::putm1()
{
	int i,j;

	cout<<"\n\n Matrix_1 : \n\n";
	for(i=1;i<=m;i++)
	{	cout<<"\t";
		for(j=1;j<n;j++)
		cout<<a[i][j]<<"  ";
		cout<<endl;
	}
}

class Matrix_2
{
	int m,n;
	int b[5][5];

	public:
		void getm2();           // I/p Function For Matrix_2
		void putm2();           // O/p Function For Matrix_2

		friend void matsum(Matrix_1&,Matrix_2&);                // Friend Function Declaration In Class Matrix_2
};

void Matrix_2::getm2()
{
	int i,j;

	cout<<"\n\n Matrix_2 : \n\n\t Enter R n C :\t ";
	cin>>m>>n;
	cout<<"\n\n Enter The Elements :\n";
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		cin>>b[i][j];
	}
}

void Matrix_2::putm2()
{
	int i,j;

	cout<<"\n\n Matrix_2 : \n\n";
	for(i=0;i<m;i++)
	{	cout<<"\t";
		for(j=0;j<n;j++)
		cout<<b[i][j]<<"  ";
		cout<<endl;
	}
}

void matsum(Matrix_1 &x,Matrix_2 &y)                // Friend Function Body
{
	int i,j;

	if(x.m==y.m && x.n==y.n)
	{
		cout<<"\n\n Sum Of Matrix_1 And Matrix_2 : \n\n";
		for(i=0;i<x.m;i++)
		{	cout<<"\t";
			for(j=0;j<x.n;j++)
			cout<<x.a[i][j]+y.b[i][j]<<"  ";
			cout<<endl;
		}cout<<"\n\n";
	}
	else
	cout<<"\n\n Syntax Error!! \n Can't Add Given Matrices\n\n";
}

int main()
{
	Matrix_1 m1;
	Matrix_2 m2;

	m1.getm1();
	m2.getm2();

	m1.putm1();
	m2.putm2();
	matsum(m1,m2);
}

/* Output

 Matrix_1 :

	 Enter R n C :	 3	3


 Enter The Elements :
 1	2	3
 4	5	6
 7	8	9


 Matrix_2 :

	 Enter R n C :	 3	3


 Enter The Elements :
 9	8	7
 6	5	4
 3	2	1


 Matrix_1 :

	1  2  3
	4  5  6
	7  8  9


 Matrix_2 :

	9  8  7
	6  5  4
	3  2  1


 Sum Of Matrix_1 And Matrix_2 :

	10  10  10
	10  10  10
	10  10  10


*/




A[1][1]+B[1][1]=2
A[1][2]+b[1][2]=4
a[2][1]+B[2][1]=6
A[2][2]+b[2][2]=8






A                             B				c


1   2                         1   2          2     4

3   4                         3   4          6     8



Friend Function


