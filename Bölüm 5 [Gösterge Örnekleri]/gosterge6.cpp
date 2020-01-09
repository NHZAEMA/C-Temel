#include <iostream>
using namespace std;
int main()
{
	double x=5.3, y=11.33;
	int z=6;
	double *px, *py;
	int *pz;
	px=&x;
	py=&y;
	pz=&z;
	cout<<"x degeri="<<*px<<endl;
	cout<<"x adresi="<<px<<endl;
	cout<<"y degeri="<<*py<<endl;
	cout<<"y adresi="<<py<<endl;
	cout<<"z degeri="<<*pz<<endl;
	cout<<"z adresi="<<pz<<endl;	
	return 0;
}
