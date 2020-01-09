#include <iostream>
using namespace std;
int main()
{
	int a=50;
	int *p;
	p=&a;
	cout<<"a="<<a<<endl;
	cout<<"a nin adresi:"<<&a<<endl;
	cout<<"a nin adresi:"<<p<<endl;
	return 0;
}
