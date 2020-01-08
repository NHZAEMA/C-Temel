//10 adet ogrenci basarý hesabý
#include<iostream>
using namespace std;
int main()
{
	int vize, final, BN, toplam=0, ort;
	for(int i=1; i<=10; i++)
	{
		cout<<i<<". Vize Gir:"; 	cin>>vize;
		cout<<i<<". Final Gir:"; 	cin>>final;
		BN=(vize*0.4)+(final*0.6);
		toplam+=BN;
	}
	ort=toplam/10;
	cout<<"10 Ogrenci Ortalamasi:"<<ort<<endl;
	if (ort<50)
		cout<<"Tembel Sinif..."<<endl;
	else
		cout<<"Caliskan Sinif..."<<endl;
	return 0;
}
