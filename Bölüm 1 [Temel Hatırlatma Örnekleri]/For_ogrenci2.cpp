//10 adet ogrenci basarý hesabý
#include<iostream>
using namespace std;
int main()
{
	int vize, final, BN, toplam=0;
	for(int i=1; i<=10; i++)
	{
		cout<<i<<". Vize Gir:"; 	cin>>vize;
		cout<<i<<". Final Gir:"; 	cin>>final;
		BN=(vize*0.4)+(final*0.6);
		toplam+=BN;
	}
	cout<<"10 Ogrenci Ortalamasi:"<<toplam/10<<endl;
	return 0;
}
