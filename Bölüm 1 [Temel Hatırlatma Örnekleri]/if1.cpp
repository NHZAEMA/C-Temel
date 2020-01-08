//if yapisi
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a=1, b=2, c=1, x1, x2;
	int delta=b*b-4*a*c;
	if (delta>0)
	{
		x1=(-b-sqrt(delta))/(2*a);
		x2=(-b+sqrt(delta))/(2*a);
		cout<<"x1="<<x1<<"-"<<"x2="<<x2<<endl;
	}
	else if (delta==0)
	{
		x1=(-b)/(2*a);
		cout<<"x1=x2="<<x1<<endl;
	}
	else
	{
		cout<<"Gercek kok yoktur..!"<<endl;
	}
	return 0;
}







