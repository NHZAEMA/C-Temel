#include <iostream>
using namespace std;
int main()
{
	float x,y;
	cout<<"x:";		cin>>x;
	cout<<"y:";		cin>>y;
	float *px, *py;
	px=&x;
	py=&y;
	cout<<"x/y="<<*px / *py<<endl;

	return 0;
}
