//belli sayi araligini toplar...
#include <iostream>
using namespace std;
int main()
{
	int gl,gd, top=0;
	for (int i=1; i<=5; i++)
	{
		cout<<i<<". gelir gir:";	cin>>gl;
		cout<<i<<". gider gir:";	cin>>gd;
		top+=(gl-gd);	
	}
		
	cout<<"toplam="<<top<<endl;	
	return 0;
}
