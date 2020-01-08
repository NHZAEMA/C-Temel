#include <iostream>
using namespace std;
int main()
{
	int sayi, a=1, b=1, c=1;
	for(int i=1; i<=10; i++)
		a*=i;
	for(int i=1; i<=11; i++)
		b*=i;
	for(int i=1; i<=12; i++)
		c*=i;		
	cout<<"10!+11!+12! ="<<a+b+c<<endl;
	return 0;
}





