//sýnýf örneði
#include <iostream>
using namespace std;
struct ogrenci
{
	int no;
	int v;
	int f;
	char ad[20];
	char soyad[20];
	char bolumu[20];
	float bn()
	{
		return ((v*0.4)+ (f*0.6));
	}
}o[5];
int main()
{
	int top=0;
	for (int i=0; i<5; i++)
	{	
		cout<<i+1<<". Bilgiler Giriliyor:****"<<endl;
		cout<<i+1<<". no:";			cin>>o[i].no;
		cout<<i+1<<". ad:";			cin>>o[i].ad;
		cout<<i+1<<". soyad:";		cin>>o[i].soyad;
		cout<<i+1<<". bolumu:";		cin>>o[i].bolumu;
		cout<<i+1<<". vize:";		cin>>o[i].v;
		cout<<i+1<<". final:";		cin>>o[i].f;
		top+=o[i].bn();	
		cout<<"*****************************"<<endl;
	}
	cout<<"5 Ogrenci icin Basari Notu Ortalamasi:"<<top/5<<endl;
	return 0;
} 

