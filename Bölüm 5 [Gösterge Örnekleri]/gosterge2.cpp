#include <iostream>
using namespace std;
int main()
{
	int a=100;
	int *p;
	p=&a;
	cout<<"Adres a="<<p<<endl;
	cout<<"Adres a+1="<<++p<<endl;
	cout<<"Adres a-1="<<--p<<endl;

	return 0;
}
