//sýnýf örneði
#include <iostream>
#define PI 3.14
using namespace std;
struct kure
{
	float r;
	float alan()
	{
		return (PI*r*r);
	}
	float hacim()
	{
		return (4*PI*r*r*r/3);
	}	
}k;
int main()
{
	cout<<"yari cap:";	cin>>k.r;
	cout<<"Alan:"<<k.alan()<<endl;	
	cout<<"Hacim:"<<k.hacim()<<endl;
	return 0;
} 

