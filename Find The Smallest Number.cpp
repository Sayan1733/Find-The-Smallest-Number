#include <iostream>
#include <conio.h>
//FInd The Smallest no
using namespace std;
int Smallestno(int a,int b,int c)
{
	int d=0;
	
	if(a<=b && a<=c)
	{
		d=a;
	}
    else if(b<=a && b<=c)
	{
		d=b;
	}
    else
	{
		d=c;
	}
	return d;       
}
int main()
{
    int a,b,c;
    cout<<"Enter thee three number:";
    cin>>a>>b>>c;
	
	cout<<"The Smallest Number among the "<<a<<","<<b<<","<<c<<" is:"<<Smallestno(a,b,c);
	
	getch();
    return 0;
}
