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
	if (*px > *py)
	  cout<<"buyuk="<<*px<<endl;
	else
	  cout<<"buyuk="<<*py<<endl;

	return 0;
}
