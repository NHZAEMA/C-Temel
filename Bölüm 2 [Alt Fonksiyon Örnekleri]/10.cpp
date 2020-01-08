#include <iostream>
using namespace std;
double ust(int a, int b);
int main()
{
	long double top=0;
	for (int i=1; i<=10; i++)
		top+=ust(3,i);
	cout<<"sonuc="<<top<<endl;
	return 0;
}
double ust (int a, int b)
{
	double carpim=1;
	for(int i=1; i<=b; i++)
		carpim*=a;
	return carpim;
}




