/* 
	Aim: Program For Function Overloading.
*/

#include<iostream>
using namespace std;

class area_2D
{
	public:

	float r,b,h,ac,at;
	int l,w,s,ar,as;

	float area( float r)            // Only One Argument Of Float Type
	{	ac=3.142857*r*r;
		cout<<"\n Area Of Circle="<<ac<<endl;
	}

	float area( float b, float h)           // Two Arguments Of Float Type
	{	at=0.5*b*h;
		cout<<"\n Area Of Triangle="<<at<<endl;
	}

	int area( int l, int w)         // Two Arguments Of Int Type
	{	ar=l*w;
		cout<<"\n Area Of Rectangle="<<ar<<endl;
	}

	int area( int s)            // Only One Argument Of Int Type
	{	as=s*s;
		cout<<"\n Area Of Square="<<as<<endl;
	}
};

int main()
{
	area_2D a1;
	float r,b,h;
	int l,w,s;

	cout<<"\n Enter The Radius of Circle\t";cin>>r; a1.area(r);
	cout<<"\n Enter The Base And height of Triangle\t";cin>>b>>h; a1.area(b,h);
	cout<<"\n Enter The Length And Width of Rectangle\t";cin>>l>>w; a1.area(l,w);
	cout<<"\n Enter The Side of Square\t";cin>>s; a1.area(s);
	cout<<"\n";
}
/* Output

 Enter The Radius of Circle	7

 Area Of Circle=154

 Enter The Base And height of Triangle	2	10

 Area Of Triangle=10

 Enter The Length And Width of Rectangle	2	5

 Area Of Rectangle=10

 Enter The Side of Square	10

 Area Of Square=100

*/
