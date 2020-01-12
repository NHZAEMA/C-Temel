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
	
}k[10];
int main()
{
	for (int i=0; i<10; i++)
	{
		cout<<i+1<<".yari cap:";	cin>>k[i].r;
		cout<<i+1<<". Alan:"<<k[i].alan()<<endl;	
		cout<<i+1<<". Hacim:"<<k[i].hacim()<<endl;
		cout<<"***********************************"<<endl;		
	}

	return 0;
} 

