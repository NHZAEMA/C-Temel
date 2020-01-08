//belli sayi araligini toplar...
#include <iostream>
using namespace std;
int main()
{
	int f,w, top=0;
	for (int i=1; i<=5; i++)
	{
		cout<<i<<". fiyat gir:";	cin>>f;
		cout<<i<<". indirim gir:";	cin>>w;
		top+=(f*w/100);	
	}
		
	cout<<"toplam="<<top<<endl;	
	return 0;
}
