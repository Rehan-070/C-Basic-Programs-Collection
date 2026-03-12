/* 
	Aim: Program To Illustrate The Use Of Class Template.
*/

#include<iostream>
using namespace std;

template <class T>    // Creating Class Template With Parameter T
class Swap
{
    T temp;
    T a;
    T b;
public:
    void get (T x, T y)
    {
        a=x;
        b=y;
    }
    void show()               // Swapping The Give Values
    {
        temp=a;
        a=b;
        b=temp;
        cout<<"\nA="<<a<<endl;
        cout<<"\nB="<<b<<endl;

    }
};
int main()
{
        double a,b;

        Swap <int> p;//Creating Object With Template Argument Int

        cout<<"\n\n Enter The Integers You Want To Swap : ";
        cin>>a>>b;

        cout<<"\n\n Integers Before Swapping : " ;
        cout<<"\n\nA=:"<<a<<endl;
        cout<<"\nB=:"<<b<<endl;
        p.get(a,b);

        cout<<"\n\n Integers After Swapping : "<<endl;
        p.show();


        Swap <float> q;       // Template Argument Float

        cout<<"\n\n Enter The Float Values You Want To Swap : ";
        cin>>a>>b;

        cout<<"\n\n Float Values Before Swapping : ";
        cout<<"\n\nA=:"<<a<<endl;
        cout<<"\nB=:"<<b<<endl;
        p.get(a,b);

        cout<<"\n\n Float Values After Swapping : "<<endl;
        p.show();

}
    /*OUTPUT

 Enter The Integers You Want To Swap : 5        2


 Integers Before Swapping :

A=:5

B=:2


 Integers After Swapping :

A=2

B=5


 Enter The Float Values You Want To Swap : 2.5  5.2


 Float Values Before Swapping :

A=:2.5

B=:5.2


 Float Values After Swapping :

A=5

B=2

*/
