
//program yazarken kullan�c�n�n program� daha sa�l�kl� kulllanabimesi i�in menu ile kullan�c�ya neler yapabilece�imizi g�sterebiliriz
//�rne�in basit bir hesap makinesinin yapt��� i�i men� ile yapabilriz
//ihtiyac�m�z olan malzemeler bir teflon tava 3 yumurta bir su barda�� s�t ve bir �ay barda�� kadar �i�ek ya�� 
//AB�MMMMMMM (medet)
#include <iostream>
using namespace::std;
int main();	//E�er alttaki bir fonksiyon  �st fonksiyonlar taraf�ndan �a��r�lacaksa �nceden tan�mlan�r ki hata alm�yal�m c++ yukardan a��a�� do�ru �al���r
float a,b;
int x=0;
void toplama_(void)	//toplama i�lemini yapan fonksiyon
{
	cout<<"Toplamak istedigin 2 sayiyi gir:";
	cin>>a>>b;
	cout<<"SONUC="<<a+b<<endl;
	main();	//i�lemin bitmemesi i�in tekrar main fonksiyonunu ba�latt�m
}

void cikarma_(void)//c�karma i�lemini yapan fonksiyon
{
	cout<<"cikarmak istedigin 2 sayiyi gir:";
	cin>>a>>b;
	cout<<"SONUC="<<a-b<<endl;
	main();
}
void carpma_(void)//�arpma i�lemini yapan fonksiyon
{
	cout<<"carpmak istedigin 2 sayiyi gir:";
	cin>>a>>b;
	cout<<"SONUC="<<a*b<<endl;
	main();
}
void bolme_(void)//b�lme i�lemini yapan fonksiyon
{
	cout<<"bolmek istedigin 2 sayiyi gir:";
	cin>>a>>b;
	if(b==0)
		cout<<"\nsifira bolunemez!!!\n\n";
	else
		cout<<"SONUC="<<a/b<<endl;
	main();
}

int main()//ana fonksiyon
{	
	cout<<"1.Toplama\n2.Cikarma\n3.Carpma\n4.Bolme\n0.Cikis\n\nSeciminizi girin:";//ekranda yapabileceklerimizi g�steren men�
	cin>>x;

	switch (x)//kullan�c�n�n neyi se�ti�in kontrol eden komut
		{
			case 1://case ile g�sterilen yerler se�ime ba�l� olarak ne i� yap�laca��na karar verir
				x=0;toplama_();break;
			
			case 2:
				x=0;cikarma_();break;
			case 3:
				x=0;carpma_();break;
			case 4:
				x=0;bolme_();break;
			case 0:
				return 0;
			default:// �n g�r�lemeyen giri�ler i�in bir �nlem
				{
					cout<<"\nsecim gecersiz!!!\n"<<endl;
					main();
				}
		}
		
		return 0;//program biti�i
}
