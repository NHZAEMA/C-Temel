#include<iostream>
using namespace::std;
int x,y;
string c,d;
int buyuk_olan(int a,int b)	//i�lemleri yapan fonksiyon.
{
	if(a<b)			//a k���kt�r b ise ekrana b�y�k olan b yaz
	{
		return b;
	}
	else if(a>b)
	{
		return a;
	}
	else
	{
		return a;//rerurn b; de yaz�la bilirdi burda ikisinin e�it oldu�unu ele al�yoruz;
	}
}

string isim_syisim(string isim, string soy_isim)
{
	return isim+soy_isim;
}



int main()
{
	cout<<"lutfen iki sayi gir";
	cin>>x>>y;
	int buyuk=buyuk_olan(x,y);
	cout<<"buyuk olan"<<buyuk;
	
	cout<<"\nAdinizi ve SoyAdinizi girin";
	cin>>c>>d;
	string isim=isim_syisim(c,d);
	cout<<"hosgeldiniz\t"<<isim;
}

