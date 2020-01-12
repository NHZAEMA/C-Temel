#include <iostream>
using namespace std;
struct kapi
{
	int boyu;
	int eni;
	char rengi[20];
}k[10];
int main()
{
	for (int i=0; i<10; i++)
	{
		cout<<i+1<<". kapi boyu:";	cin>>k[i].boyu;
		cout<<i+1<<". kapi eni:";	cin>>k[i].eni;
		cout<<i+1<<". rengi :";		cin>>k[i].rengi;	
	}
	for(int i=0; i<10; i++)
	{
		cout<<i+1<<". kapi boyu:"<<k[i].boyu<<endl;
		cout<<i+1<<". kapi eni:"<<k[i].eni<<endl;
		cout<<i+1<<". kapi rengi:"<<k[i].rengi<<endl;		
	}
	return 0;
} 

