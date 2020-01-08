#include <iostream>
using namespace std;
double ust(int a, int b);
double fakt(int c);
int main()
{
	int a,b,c;
	cout<<"a gir:";		cin>>a;
	cout<<"b gir:";		cin>>b;
	cout<<"c gir:";		cin>>c;
	cout<<"y="<<ust(a,b)+fakt(c)<<endl;
	return 0;
}
double ust (int a, int b)
{
	double carpim=1;
	for(int i=1; i<=b; i++)
		carpim*=a;
	return carpim;
}
double fakt (int c)
{
	double carpim=1;
	for(int i=1; i<=c; i++)
		carpim*=i;
	return carpim;
}




