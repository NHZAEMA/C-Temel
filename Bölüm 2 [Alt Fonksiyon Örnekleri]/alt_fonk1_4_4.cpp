//alan ve cevre hesabi
#include <iostream>
#include <math.h>
#define PI 3.14
using namespace std;
void hesap(int secim);
int main()
{
	int secim;
	cout<<"1-Dik, 2-Ucgen, 3-Daire: Secim Gir:";		cin>>secim;
	hesap(secim);
	return 0;
}
void hesap(int secim)
{
	float a,b,h,r;
	switch (secim)
	{
		case 1:	//dikdortgen
				cout<<"a:";		cin>>a;
				cout<<"b:";		cin>>b;
				cout<<"alan:"<<a*b<<endl;
				cout<<"cevre:"<<2*(a+b)<<endl;		break;
		case 2: //Ucgen
				cout<<"a:";		cin>>a;
				cout<<"h:";		cin>>h;
				cout<<"alan:"<<(a*h)/2<<endl;
				cout<<"cevre:"<<2*sqrt(h*h+a*a/4)+a<<endl;		break;
		case 3: //Daire
				cout<<"r:";		cin>>r;
				cout<<"alan:"<<PI*r*r<<endl;
				cout<<"cevre:"<<2*PI*r<<endl;		break;
		default : cout<<"Hatali secim...Tekrar Dene.."<<endl;
	}
	
}
