#include <iostream>
using namespace std;
int main()
{
	int v,f,bn,top=0, ort, enb=0, enk=100;
	for(int i=10; i>=1; i--)
	{
		cout<<i<<". vize:";		cin>>v;
		cout<<i<<". final:";	cin>>f;
		bn=(v*0.4)+(f*0.6);
		cout<<i<<". basari notu:"<<bn<<endl;
		top+=bn;
		if (enb<bn)
		    enb=bn;
		if (enk>bn)
			enk=bn;
	}
	ort=top/10;
	cout<<"Ortalama="<<ort<<endl;
	cout<<"En kotu not="<<enk<<endl;
	cout<<"En iyi not="<<enb<<endl;
	return 0;
}





