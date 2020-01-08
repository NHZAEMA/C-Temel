//belli sayi araligini toplar...
#include <iostream>
using namespace std;
int main()
{
	int m,d, top=0;
	for (int i=1; i<=5; i++)
	{
		cout<<i<<". gelir gir:";	cin>>m;
		cout<<i<<". gider gir:";	cin>>d;
		top+=(m-d);	
	}
		
	cout<<"toplam="<<top<<endl;	
	return 0;
}
