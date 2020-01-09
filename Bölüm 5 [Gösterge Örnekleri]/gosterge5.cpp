#include <iostream>
using namespace std;
int main()
{
	int x=1200;
	int *p;
	p=&x;
	cout<<"*p-50="<<*p-50<<endl;
	cout<<"p-50="<<p-50<<endl;
	cout<<"*p*50="<<*p*50<<endl;
	return 0;
}
