#include <iostream>
using namespace std;
int main()
{
	int a=100;
	int *p;
	p=&a;
	cout<<"*p="<<*p<<endl;
	cout<<"p="<<p<<endl;
	cout<<"*p+1="<<*p+1<<endl;
	cout<<"p+1="<<p+1<<endl;	
	
	return 0;
}
