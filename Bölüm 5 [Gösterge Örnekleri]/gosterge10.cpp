//belli sayiyi klavyeden girip pointerlarla toplar...
#include <iostream>
using namespace std;
int main()
{
	int a,b;
	int *pa, *pb;
	cout<<"a gir:";	cin>>a;
	cout<<"b gir:";	cin>>b;
	pa=&a;
	pb=&b;
	if (*pa > *pb)	
		cout<<"Buyuk="<<a<<endl;
	else
		cout<<"Buyuk="<<b<<endl;
	cout<<"x/y="<<*px / *py<<endl;	
	return 0;
}
