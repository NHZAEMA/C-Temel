//for dongusu
#include<iostream>
using namespace std;
int main()
{
	int sayi, top=0;
	for (int i=1; i<=5; i++)
	{
		cout<<i<<". sayi gir:";	cin>>sayi;
		top+=sayi;
	}
		
	cout<<"Toplam:"<<top<<endl;
	return 0;
}
