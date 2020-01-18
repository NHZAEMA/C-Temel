
//program yazarken kullanýcýnýn programý daha saðlýklý kulllanabimesi için menu ile kullanýcýya neler yapabileceðimizi gösterebiliriz
//örneðin basit bir hesap makinesinin yaptýðý iþi menü ile yapabilriz
//ihtiyacýmýz olan malzemeler bir teflon tava 3 yumurta bir su bardaðý süt ve bir çay bardaðý kadar çiçek yaðý 
//ABÝMMMMMMM (medet)
#include <iostream>
using namespace::std;
int main();	//Eðer alttaki bir fonksiyon  üst fonksiyonlar tarafýndan çaðýrýlacaksa önceden tanýmlanýr ki hata almýyalým c++ yukardan aþþaðý doðru çalýþýr
float a,b;
int x=0;
void toplama_(void)	//toplama iþlemini yapan fonksiyon
{
	cout<<"Toplamak istedigin 2 sayiyi gir:";
	cin>>a>>b;
	cout<<"SONUC="<<a+b<<endl;
	main();	//iþlemin bitmemesi için tekrar main fonksiyonunu baþlattým
}

void cikarma_(void)//cýkarma iþlemini yapan fonksiyon
{
	cout<<"cikarmak istedigin 2 sayiyi gir:";
	cin>>a>>b;
	cout<<"SONUC="<<a-b<<endl;
	main();
}
void carpma_(void)//çarpma iþlemini yapan fonksiyon
{
	cout<<"carpmak istedigin 2 sayiyi gir:";
	cin>>a>>b;
	cout<<"SONUC="<<a*b<<endl;
	main();
}
void bolme_(void)//bölme iþlemini yapan fonksiyon
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
	cout<<"1.Toplama\n2.Cikarma\n3.Carpma\n4.Bolme\n0.Cikis\n\nSeciminizi girin:";//ekranda yapabileceklerimizi gösteren menü
	cin>>x;

	switch (x)//kullanýcýnýn neyi seçtiðin kontrol eden komut
		{
			case 1://case ile gösterilen yerler seçime baðlý olarak ne iþ yapýlacaðýna karar verir
				x=0;toplama_();break;
			
			case 2:
				x=0;cikarma_();break;
			case 3:
				x=0;carpma_();break;
			case 4:
				x=0;bolme_();break;
			case 0:
				return 0;
			default:// ön görülemeyen giriþler için bir önlem
				{
					cout<<"\nsecim gecersiz!!!\n"<<endl;
					main();
				}
		}
		
		return 0;//program bitiþi
}
