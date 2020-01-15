// bool karþýlaþtýrmasý

//		>	BÜYÜKTÜR
//		<	KÜÇÜKTÜR
//		>=  BÜYÜKEÞÝTTÝR
//		<=  KÜÇÜKEÞÝTTÝR
//		==	EÞÝTTÝR
//		!=  EÞÝTDEÐÝLDÝR		

#include <iostream>
using namespace::std;// c++ taki bazý komutalarý kullana bilmek için gereken kod satýrý örneðin cout veya cin koutlarýný bu satýr sayesinde kullnabiliriz

int main() //ana fonksiyon tüm iþlemler bu fonksiyon içeresinde sýrasýyla (yukarýdan aþþaðýya doðru gerçekleþir)gerçekleþir.
{
	bool x;// x bool cinsinden olduðu için 1 yada 0 deðerini ala bilir "1"doðru demek "0" yanlýþ.
	
	x=(10==15);// içinde bulunan iþleme göre doðru yada yanlýþ diye bir deðer dönecek dönen deðere göre x "1" yada "0" deðerini almýþ olucak.
	cout <<x;
	cout<<"\n";//imleci 1 satýr aþþaðý indirir.
	
	if(x)
	{
	cout<<"DOGRU";	
	}
	else
	{
		cout<<"YANLIS";
	}
	
	
}
