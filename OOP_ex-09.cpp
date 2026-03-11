/*
	Aim: Program To Illustrate The Use Of Function Template.
*/

#include<iostream>
using namespace std;

template <class T>              // Template Declaration
void sort(T a[10])
{
        T temp;
        int i,j;

        for(i=0;i<5;i++)               // Bubble Sort Method
        {
                for(j=i+1;j<5;j++)
                {
                        if(a[i]>a[j])
                        {
                                temp=a[i];
                                a[i]=a[j];
                                a[j]=temp;
                        }
                }
        }

        cout<<"Sorted array="<<endl;

        for(i=0;i<5;i++)
                cout<<a[i]<<endl;
};

int main()
{
        int a[5],i,j;
        float b[5];
        char c[5];

        cout<<"\nEnter 5 integer elements : ";
        for(i=0;i<5;i++)
                cin>>a[i];

        cout<<"\nenter 5 decimal elements : ";
        for(i=0;i<5;i++)
                cin>>b[i];

        cout<<"\nEnter 5 character : ";
        for(i=0;i<5;i++)
                cin>>c[i];

        sort(a);
        sort(b);
        sort(c);

}

/*OUTPUT

Enter 5 integer elements : 1 5 3 4 2

enter 5 decimal elements : 6.5 4.4 3.3 1.1 2.2

Enter 5 character : g a s d f
Sorted array=
1
2
3
4
5
Sorted array=
1.1
2.2
3.3
4.4
6.5
Sorted array=
a
d
f
g
s
*/
