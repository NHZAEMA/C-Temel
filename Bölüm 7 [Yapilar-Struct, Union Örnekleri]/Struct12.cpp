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
}o={1,50,50,"Orhan", "ER", "EEM"};
int main()
{
	cout<<"**Bilgiler Ekrana Yaziliyor:****"<<endl;
	cout<<"Ogrenci Ad ve Soyadi:"<<o.ad<<" "<<o.soyad<<endl;
	cout<<"Ogrenci No:"<<o.no<<endl;
	cout<<"Ogrenci Bolumu:"<<o.bolumu<<endl;
	cout<<"Ogrenci Basari Notu:"<<o.bn()<<endl;
	return 0;
} 

