//ust, fakt, fonksiyon içinden fonksiyon cagirma..
#include <iostream>
using namespace std;
void hesap(int secim);
long fakt(int a);
long ust(int a, int b);
int main()
{
	int secim;
	cout<<"1-Faktoriyel | 2- Ust icin Secim Gir:";		cin>>secim;
	hesap(secim);
	return 0;
}
void hesap(int secim)
{
	int a,b;
	switch (secim)
	{
		case 1:	//faktoriyel
				cout<<"a:";		cin>>a;
				cout<<a<<"!="<<fakt(a)<<endl;	break;
		case 2: //Ust
				cout<<"a:";		cin>>a;
				cout<<"b:";		cin>>b;
				cout<<a<<"^"<<b<<"="<<ust(a,b)<<endl;	break;
		default : cout<<"Hatali secim...Tekrar Dene.."<<endl;
	}
}
long fakt (int a)
{
	long carpim=1;
	for (int i=1; i<=a; i++)
		carpim*=i;
	return carpim;
}
long ust (int a, int b)
{
	long carpim=1;
	for (int i=1; i<=b; i++)
		carpim*=a;
	return carpim;
}
