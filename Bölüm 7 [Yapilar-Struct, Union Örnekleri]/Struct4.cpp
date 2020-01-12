//sýnýf örneði
#include <iostream>
#include <string.h>
using namespace std;
struct kapi
{
	int boyu;
	int eni;
	char rengi[100];
}k1, k2;
int main()
{
	cout<<"kapi 1 boyu:";	cin>>k1.boyu;
	cout<<"kapi 1 eni:";	cin>>k1.eni;
	strcpy(k1.rengi, "Mavi");
	
	cout<<"kapi 2 boyu:";	cin>>k2.boyu;
	cout<<"kapi 2 eni:";	cin>>k2.eni;
	strcpy(k2.rengi, "Kirmizi");	
	
	cout<<"kapi boyu toplami:"<<k1.boyu + k2.boyu<<endl;
	cout<<"kapi eni toplami :"<<k1.eni + k2.eni <<endl;
	cout<<"Kapi 1 rengi:"<<k1.rengi<<endl;
	cout<<"Kapi 2 rengi:"<<k2.rengi<<endl;
	return 0;
} 

