#include <iostream>
using namespace std;
int main()
{
	double y=1200;
	double *p;
	p=&y;
	cout<<"y/10="<<y/10<<endl;
	cout<<"10/*p="<<10/ *p<<endl;
	cout<<"*p +y="<<*p + y<<endl;

	return 0;
}
