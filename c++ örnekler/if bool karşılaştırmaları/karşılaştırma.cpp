// karþýlaþtýrma

//		>	BÜYÜKTÜR
//		<	KÜÇÜKTÜR
//		>=  BÜYÜKEÞÝTTÝR
//		<=  KÜÇÜKEÞÝTTÝR
//		==	EÞÝTTÝR
//		!=  EÞÝTDEÐÝLDÝR		


#include <iostream>
using namespace:: std;

int x;
int y;	//int x,y; 'de yazabiliriz.

int main()
{
	x=20;
	
	if(x==20)	//karþýlaþtýrma ifadesi
	{	
		cout<<"1.karsilastirma\n";
		cout<<"DOGRU";	// x 20'ye eþit ise ekrana DOGRU yaz.
	}	//karþýlaþtýrma doðru ise yapýlacak iþler iki süslü parantez arasýna yazýlýr yada "if()" ifadesinin bir satýr altýna yazýlýr.
	else // eðer yukardaki ifade doðru deðil ise bu ifadenin parantezleri arasýndaki iþlem yapýlýr genelde ön görülemeyen sonuçlar için kullanýlýr.
	{
		cout<<"YANLIS";
	}//burdada yapýlacak iþler iki süslü parantez arasýna yazýlýr yada "else" ifadesinin bir satýr altýna yazýlýr.
	
	
	if(x!=20)
	{
		cout<<"1.karsilastirma\n";
		cout<<"\n2. karþýlaþtýrma\n";
		cout<<"DOGRU";
	}
	else
	{
		cout<<"\n2. karsilastirma\n";
		cout<<"yanlis";
	}
}
