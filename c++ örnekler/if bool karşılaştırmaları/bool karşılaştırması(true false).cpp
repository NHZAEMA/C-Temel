// bool kar��la�t�rmas�

//		>	B�Y�KT�R
//		<	K���KT�R
//		>=  B�Y�KE��TT�R
//		<=  K���KE��TT�R
//		==	E��TT�R
//		!=  E��TDE��LD�R		

#include <iostream>
using namespace::std;// c++ taki baz� komutalar� kullana bilmek i�in gereken kod sat�r� �rne�in cout veya cin koutlar�n� bu sat�r sayesinde kullnabiliriz

int main() //ana fonksiyon t�m i�lemler bu fonksiyon i�eresinde s�ras�yla (yukar�dan a��a��ya do�ru ger�ekle�ir)ger�ekle�ir.
{
	bool x;// x bool cinsinden oldu�u i�in 1 yada 0 de�erini ala bilir "1"do�ru demek "0" yanl��.
	
	x=(10==15);// i�inde bulunan i�leme g�re do�ru yada yanl�� diye bir de�er d�necek d�nen de�ere g�re x "1" yada "0" de�erini alm�� olucak.
	cout <<x;
	cout<<"\n";//imleci 1 sat�r a��a�� indirir.
	
	if(x)
	{
	cout<<"DOGRU";	
	}
	else
	{
		cout<<"YANLIS";
	}
	
	
}
