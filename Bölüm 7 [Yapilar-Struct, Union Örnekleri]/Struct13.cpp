//sınıf örneği
#include <iostream>
using namespace std;
int N;
struct urun
{
	int kod;
	int fiyat;
	int kar;
	char ad[20];
	float satis()
	{
		return (fiyat+ (fiyat*kar/100));
	}
}u[99999];
int main()
{
	cout<<"Urun Satisi gir:";	cin>>N;
	for(int i=0; i<N; i++)
	{
	cout<<"Bilgiler Giriliyor:****"<<endl;
	cout<<"kodu:";			cin>>u[i].kod;
	cout<<"adi:";			cin>>u[i].ad;
	cout<<"alis fiyati:";	cin>>u[i].fiyat;
	cout<<"kar orani:";		cin>>u[i].kar;
	cout<<"*****************************"<<endl;
	cout<<"Satis Fiyati:"<<u[i].satis()<<endl;		
	}

	return 0;
} 

