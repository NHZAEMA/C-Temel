// kar��la�t�rma

//		>	B�Y�KT�R
//		<	K���KT�R
//		>=  B�Y�KE��TT�R
//		<=  K���KE��TT�R
//		==	E��TT�R
//		!=  E��TDE��LD�R		


#include <iostream>
using namespace:: std;

int x;
int y;	//int x,y; 'de yazabiliriz.

int main()
{
	x=20;
	
	if(x==20)	//kar��la�t�rma ifadesi
	{	
		cout<<"1.karsilastirma\n";
		cout<<"DOGRU";	// x 20'ye e�it ise ekrana DOGRU yaz.
	}	//kar��la�t�rma do�ru ise yap�lacak i�ler iki s�sl� parantez aras�na yaz�l�r yada "if()" ifadesinin bir sat�r alt�na yaz�l�r.
	else // e�er yukardaki ifade do�ru de�il ise bu ifadenin parantezleri aras�ndaki i�lem yap�l�r genelde �n g�r�lemeyen sonu�lar i�in kullan�l�r.
	{
		cout<<"YANLIS";
	}//burdada yap�lacak i�ler iki s�sl� parantez aras�na yaz�l�r yada "else" ifadesinin bir sat�r alt�na yaz�l�r.
	
	
	if(x!=20)
	{
		cout<<"1.karsilastirma\n";
		cout<<"\n2. kar��la�t�rma\n";
		cout<<"DOGRU";
	}
	else
	{
		cout<<"\n2. karsilastirma\n";
		cout<<"yanlis";
	}
}
