#include <iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"x:";		cin>>x;
	cout<<"y:";		cin>>y;
	int *px, *py;
	px=&x;
	py=&y;
	cout<<"x+y="<<*px+*py<<endl;

	return 0;
}
