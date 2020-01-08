#include <iostream>
using namespace std;
double ust(int a, int b);
int main()
{
	cout<<"y="<<ust(2,6)+ust(3,4)<<endl;
	return 0;
}
double ust (int a, int b)
{
	double carpim=1;
	for(int i=1; i<=b; i++)
		carpim*=a;
	return carpim;
}




