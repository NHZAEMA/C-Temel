#include <iostream>
using namespace std;
struct kapi
{
	int boyu;
	int eni;
	char rengi[20];
}k;
int main()
{
	cout<<"boyu:";	cin>>k.boyu;
	cout<<"eni:";	cin>>k.eni;
	cout<<"rengi:";	cin>>k.rengi;
	
	cout<<"kapi boyu:"<<k.boyu<<endl;
	cout<<"kapi eni:"<<k.eni<<endl;
	cout<<"Kapi rengi:"<<k.rengi<<endl;

	return 0;
} 

