#include<iostream>
using namespace::std;
int x,y;
string c,d;
int buyuk_olan(int a,int b)	//iþlemleri yapan fonksiyon.
{
	if(a<b)			//a küçüktür b ise ekrana büyük olan b yaz
	{
		return b;
	}
	else if(a>b)
	{
		return a;
	}
	else
	{
		return a;//rerurn b; de yazýla bilirdi burda ikisinin eþit olduðunu ele alýyoruz;
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

