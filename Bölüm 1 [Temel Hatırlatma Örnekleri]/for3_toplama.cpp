//belli sayiyi klavyeden girip hesaplayýp toplar...
#include <iostream>
using namespace std;
int main()
{
	int v,f, top=0;
	for (int i=1; i<=5; i++)
	{
		cout<<i<<". vize gir:";		cin>>v;
		cout<<i<<". final gir:";	cin>>f;
		top+=((v*0.4)+(f*0.6));	
	}
		
	cout<<"toplam="<<top<<endl;	
	return 0;
}
