#include <iostream>
using namespace std;
struct kapi
{
	int boyu;
	int eni;
	char rengi[];
	int alan()
	{
		return (boyu*eni);
	}
}k;
int main()
{
	cout<<"boyu:";	cin>>k.boyu;
	cout<<"eni:";	cin>>k.eni;
	cout<<"rengi:";	cin>>k.rengi;
	
	cout<<"kapi boyu:"<<k.boyu<<endl;
	cout<<"kapi eni:"<<k.eni<<endl;
	cout<<"Kapi rengi:"<<k.rengi<<endl;
	cout<<"Kapinin Alani:"<<k.alan()<<endl;
	return 0;
} 

