//10 adet urun indirimli satisi
#include<iostream>
using namespace std;
int main()
{
	int UM, SF;
	for(int i=1; i<=10; i++)
	{
		cout<<i<<". Urun Gir:"; 	cin>>UM;
		if (UM<100)
		   SF=UM-(UM*0.1);		
		else
		   SF=UM-(UM*0.2);
		cout<<i<<"Indirimli Fiyat:"<<SF<<endl;	
		
	}
	return 0;
}
