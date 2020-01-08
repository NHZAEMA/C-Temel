//10 adet ogrenci basarý hesabý
#include<iostream>
using namespace std;
int main()
{
	float vize, final;
	float BN;
	for(int i=1; i<=2; i++)
	{
		cout<<i<<". Vize Gir:"; 	cin>>vize;
		cout<<i<<". Final Gir:"; 	cin>>final;
		BN=(vize*0.4)+(final*0.6);
		cout<<i<<". Ogrenci Notu:"<<BN<<endl;
	}
	system("PAUSE");
	return 0;
}
