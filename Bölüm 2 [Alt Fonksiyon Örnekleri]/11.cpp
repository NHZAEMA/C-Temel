#include <iostream>
using namespace std;
long ust(int a, int b);
int main()
{
	long a,b;
	cout<<"a gir:";		cin>>a;
	cout<<"b gir:";		cin>>b;
	cout<<"x="<<ust(a,b)<<endl;
	return 0;
}
long ust (int a, int b)
{
	long carpim=1;
	for(int i=1; i<=b; i++)
		carpim*=a;
	return carpim;
}




