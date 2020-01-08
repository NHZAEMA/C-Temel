//iki sayi karsilastirma
#include<iostream>
using namespace std;
int main()
{
    int vize, final,ortalama;
    cout<<"vize notu gir:"; cin>>vize;
    cout<<"final notu gir:"; cin>>final;
    ortalama=vize*0.4+final*0.6;
    if (ortalama>=90 && ortalama<=100)
    	      	cout<<"harf notu= AA= ";
    else if (ortalama>=80 && ortalama<90)
      	cout<<"harf notu= BA= ";
    else if (ortalama>=70 && ortalama<80)
      	cout<<"harf notu= BB= ";
    else if (ortalama>=60 && ortalama<70)
      	cout<<"harf notu= CB= ";
    else if (ortalama>=50 && ortalama<60)
      	cout<<"harf notu= CC= ";
	else if (ortalama>=0 && ortalama<50)
      	cout<<"harf notu= FF= ";
	else cout<<"hatali giris yapildi...\n";
    system("PAUSE");  	
	return 0;
}

