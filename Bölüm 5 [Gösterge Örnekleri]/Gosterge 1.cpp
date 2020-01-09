#include <iostream>
using namespace std;
int main()
{
	int a=100;
	int *b;
	b=&a;
	cout<<"a="<<a<<endl;
	cout<<"a nin adresi:"<<&a<<endl;
	cout<<"a nin adresi:"<<b<<endl;
	return 0;
}
