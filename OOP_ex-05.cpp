/* 
	Aim: Program For Factorial By Using Copy Constructor.
*/

#include<iostream>
using namespace std;
class fact
{
	private :
		int n;
	public :
		fact(int a)             // Parameterized Constructor
		{
			n=a;
		}
		fact(fact &b)           // Copy Constructor
		{
			int f=1;
			n=b.n;
			for(int i=1;i<b.n;i++)
				f=f*i;
			cout<<"\n factorial=\n"<<f;
		}
};
main()
{
	int a;
	cout<<"\n Enter the number=";
	cin>>a;
	fact p(a);
	fact q(p);
}
/* Output
Enter the number 5

factorial=24
*/
